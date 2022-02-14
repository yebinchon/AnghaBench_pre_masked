
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rewriteConfigState {int dummy; } ;
typedef int sds ;
struct TYPE_2__ {int syslog_facility; } ;


 int VAR_0 ;
 char* FUNC_0 (int ,int) ;
 int FUNC_1 (struct rewriteConfigState*,char const*,int ,int) ;
 int FUNC_2 (int ,char*,char const*,char const*) ;
 int FUNC_3 () ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

void FUNC_4(struct rewriteConfigState *VAR_3) {
    int VAR_4 = VAR_1.syslog_facility;
    int VAR_5 = VAR_4 != VAR_0;
    const char *VAR_6 = ((void*)0), *VAR_7 = "syslog-facility";
    sds VAR_8;

    VAR_6 = FUNC_0(VAR_2,VAR_4);
    VAR_8 = FUNC_2(FUNC_3(),"%s %s",VAR_7,VAR_6);
    FUNC_1(VAR_3,VAR_7,VAR_8,VAR_5);
}
