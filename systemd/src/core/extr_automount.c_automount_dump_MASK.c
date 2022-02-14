
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_4__ {char* where; int directory_mode; int timeout_idle_usec; int result; int state; } ;
typedef int FILE ;
typedef TYPE_1__ Automount ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (char*,int,int ,int ) ;
 int FUNC_5 (int *,char*,char const*,char*,char const*,char*,char const*,char*,char const*,int,char const*,char*) ;

__attribute__((used)) static void FUNC_6(Unit *VAR_2, FILE *VAR_3, const char *VAR_4) {
        char VAR_5[VAR_0];
        Automount *VAR_6 = FUNC_0(VAR_2);

        FUNC_1(VAR_6);

        FUNC_5(VAR_3,
                "%sAutomount State: %s\n"
                "%sResult: %s\n"
                "%sWhere: %s\n"
                "%sDirectoryMode: %04o\n"
                "%sTimeoutIdleUSec: %s\n",
                VAR_4, FUNC_3(VAR_6->state),
                VAR_4, FUNC_2(VAR_6->result),
                VAR_4, VAR_6->where,
                VAR_4, VAR_6->directory_mode,
                VAR_4, FUNC_4(VAR_5, VAR_0, VAR_6->timeout_idle_usec, VAR_1));
}
