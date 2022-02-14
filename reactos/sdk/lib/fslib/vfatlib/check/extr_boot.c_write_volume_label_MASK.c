
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mon; int tm_year; scalar_t__ tm_mday; } ;
typedef scalar_t__ off_t ;
struct TYPE_5__ {scalar_t__ size; scalar_t__ start; scalar_t__ starthi; void* date; void* adate; void* cdate; void* time; void* ctime; scalar_t__ ctime_ms; int attr; int name; } ;
typedef int DOS_FS ;
typedef TYPE_1__ DIR_ENT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (scalar_t__,int,TYPE_1__*) ;
 void* FUNC_3 (unsigned short) ;
 struct tm* FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(DOS_FS * VAR_1, char *VAR_2)
{
    time_t VAR_3 = FUNC_6(((void*)0));
    struct tm *VAR_4 = FUNC_4(&VAR_3);
    off_t VAR_5;
    int VAR_6;
    DIR_ENT VAR_7;

    VAR_6 = 0;
    VAR_5 = FUNC_1(VAR_1, &VAR_7);
    if (VAR_5 == 0) {
 VAR_6 = 1;
 VAR_5 = FUNC_0(VAR_1, &VAR_7, VAR_2, 0);
    }
    FUNC_5(VAR_7.name, VAR_2, 11);
    VAR_7.time = FUNC_3((unsigned short)((VAR_4->tm_sec >> 1) +
           (VAR_4->tm_min << 5) +
           (VAR_4->tm_hour << 11)));
    VAR_7.date = FUNC_3((unsigned short)(VAR_4->tm_mday +
           ((VAR_4->tm_mon + 1) << 5) +
           ((VAR_4->tm_year - 80) << 9)));
    if (VAR_6) {
 VAR_7.attr = VAR_0;
 VAR_7.ctime_ms = 0;
 VAR_7.ctime = VAR_7.time;
 VAR_7.cdate = VAR_7.date;
 VAR_7.adate = VAR_7.date;
 VAR_7.starthi = 0;
 VAR_7.start = 0;
 VAR_7.size = 0;
    }

    FUNC_2(VAR_5, sizeof(DIR_ENT), &VAR_7);
}
