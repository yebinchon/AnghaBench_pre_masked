
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* dbnum; int hostip; void* hostport; int auth; } ;


 void* FUNC_0 (char const*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (char const*,int) ;
 int VAR_1 ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char const*,int) ;

__attribute__((used)) static void FUNC_8(const char *VAR_2) {

    const char *VAR_3 = "redis://";
    const char *VAR_4 = VAR_2;
    const char *VAR_5 = VAR_2 + FUNC_6(VAR_2);
    const char *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10;


    if (FUNC_7(VAR_3, VAR_4, FUNC_6(VAR_3))) {
        FUNC_2(VAR_1,"Invalid URI scheme\n");
        FUNC_1(1);
    }
    VAR_4 += FUNC_6(VAR_3);
    if (VAR_4 == VAR_5) return;


    if ((VAR_6 = FUNC_5(VAR_4,'@'))) {
        if ((VAR_7 = FUNC_5(VAR_4, ':')) && VAR_7 < VAR_6) {

            VAR_4 = VAR_7 + 1;
        }

        VAR_0.auth = FUNC_3(VAR_4, VAR_6 - VAR_4);
        VAR_4 = VAR_6 + 1;
    }
    if (VAR_4 == VAR_5) return;


    VAR_10 = FUNC_5(VAR_4, '/');
    if (*VAR_4 != '/') {
        VAR_9 = VAR_10 ? VAR_10 - 1 : VAR_5;
        if ((VAR_8 = FUNC_5(VAR_4, ':'))) {
            VAR_0.hostport = FUNC_0(VAR_8 + 1);
            VAR_9 = VAR_8 - 1;
        }
        VAR_0.hostip = FUNC_4(VAR_4, VAR_9 - VAR_4 + 1);
    }
    VAR_4 = VAR_10 ? VAR_10 + 1 : VAR_5;
    if (VAR_4 == VAR_5) return;


    VAR_0.dbnum = FUNC_0(VAR_4);
}
