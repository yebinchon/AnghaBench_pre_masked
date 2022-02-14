
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tm {int dummy; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
typedef scalar_t__ pid_t ;
typedef int buf ;
struct TYPE_2__ {char* logfile; int verbosity; scalar_t__ pid; scalar_t__ syslog_enabled; scalar_t__ masterhost; scalar_t__ sentinel_mode; int daylight_active; int timezone; } ;
typedef int FILE ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,...) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct timeval*,int *) ;
 int FUNC_6 (struct tm*,int ,int ,int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_7 (char*,int,char*,int) ;
 int * VAR_6 ;
 int FUNC_8 (char*,int,char*,struct tm*) ;
 int FUNC_9 (int const,char*,char const*) ;

void FUNC_10(int VAR_7, const char *VAR_8) {
    const int VAR_9[] = { VAR_1, VAR_2, VAR_3, VAR_4 };
    const char *VAR_10 = ".-*#";
    FILE *VAR_11;
    char VAR_12[64];
    int VAR_13 = (VAR_7 & VAR_0);
    int VAR_14 = VAR_5.logfile[0] == '\0';

    VAR_7 &= 0xff;
    if (VAR_7 < VAR_5.verbosity) return;

    VAR_11 = VAR_14 ? VAR_6 : FUNC_2(VAR_5.logfile,"a");
    if (!VAR_11) return;

    if (VAR_13) {
        FUNC_3(VAR_11,"%s",VAR_8);
    } else {
        int VAR_15;
        struct timeval VAR_16;
        int VAR_17;
        pid_t VAR_18 = FUNC_4();

        FUNC_5(&VAR_16,((void*)0));
        struct tm VAR_19;
        FUNC_6(&VAR_19,VAR_16.tv_sec,VAR_5.timezone,VAR_5.daylight_active);
        VAR_15 = FUNC_8(VAR_12,sizeof(VAR_12),"%d %b %Y %H:%M:%S.",&VAR_19);
        FUNC_7(VAR_12+VAR_15,sizeof(VAR_12)-VAR_15,"%03d",(int)VAR_16.tv_usec/1000);
        if (VAR_5.sentinel_mode) {
            VAR_17 = 'X';
        } else if (VAR_18 != VAR_5.pid) {
            VAR_17 = 'C';
        } else {
            VAR_17 = (VAR_5.masterhost ? 'S':'M');
        }
        FUNC_3(VAR_11,"%d:%c %s %c %s\n",
            (int)FUNC_4(),VAR_17, VAR_12,VAR_10[VAR_7],VAR_8);
    }
    FUNC_1(VAR_11);

    if (!VAR_14) FUNC_0(VAR_11);
    if (VAR_5.syslog_enabled) FUNC_9(VAR_9[VAR_7], "%s", VAR_8);
}
