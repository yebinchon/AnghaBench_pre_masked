
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int conn ;
struct TYPE_2__ {int detail_enabled; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 TYPE_1__ VAR_0 ;
 char* FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *,char*,int) ;

__attribute__((used)) inline static void FUNC_5(conn *VAR_1, const char *VAR_2) {
    FUNC_0(VAR_1 != ((void*)0));

    if (FUNC_3(VAR_2, "on") == 0) {
        VAR_0.detail_enabled = 1;
        FUNC_1(VAR_1, "OK");
    }
    else if (FUNC_3(VAR_2, "off") == 0) {
        VAR_0.detail_enabled = 0;
        FUNC_1(VAR_1, "OK");
    }
    else if (FUNC_3(VAR_2, "dump") == 0) {
        int VAR_3;
        char *VAR_4 = FUNC_2(&VAR_3);
        FUNC_4(VAR_1, VAR_4, VAR_3);
    }
    else {
        FUNC_1(VAR_1, "CLIENT_ERROR usage: stats detail on|off|dump");
    }
}
