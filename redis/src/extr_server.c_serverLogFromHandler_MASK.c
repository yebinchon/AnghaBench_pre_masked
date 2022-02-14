
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
struct TYPE_2__ {char* logfile; int verbosity; scalar_t__ daemonize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,int,int) ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,char const*,int) ;

void FUNC_7(int VAR_5, const char *VAR_6) {
    int VAR_7;
    int VAR_8 = VAR_4.logfile[0] == '\0';
    char VAR_9[64];

    if ((VAR_5&0xff) < VAR_4.verbosity || (VAR_8 && VAR_4.daemonize))
        return;
    VAR_7 = VAR_8 ? VAR_3 :
                         FUNC_3(VAR_4.logfile, VAR_0|VAR_1|VAR_2, 0644);
    if (VAR_7 == -1) return;
    FUNC_2(VAR_9,sizeof(VAR_9),FUNC_1());
    if (FUNC_6(VAR_7,VAR_9,FUNC_4(VAR_9)) == -1) goto err;
    if (FUNC_6(VAR_7,":signal-handler (",17) == -1) goto err;
    FUNC_2(VAR_9,sizeof(VAR_9),FUNC_5(((void*)0)));
    if (FUNC_6(VAR_7,VAR_9,FUNC_4(VAR_9)) == -1) goto err;
    if (FUNC_6(VAR_7,") ",2) == -1) goto err;
    if (FUNC_6(VAR_7,VAR_6,FUNC_4(VAR_6)) == -1) goto err;
    if (FUNC_6(VAR_7,"\n",1) == -1) goto err;
err:
    if (!VAR_8) FUNC_0(VAR_7);
}
