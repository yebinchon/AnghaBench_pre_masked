
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {TYPE_1__* lua_client; } ;
struct TYPE_3__ {int resp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int) ;
 char* FUNC_5 (int *,char*) ;
 TYPE_2__ VAR_0 ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,int,long long*) ;

char *FUNC_8(lua_State *VAR_1, char *VAR_2, int VAR_3) {
    char *VAR_4 = FUNC_6(VAR_2+1,'\r');
    long long VAR_5;
    int VAR_6 = 0;

    FUNC_7(VAR_2+1,VAR_4-VAR_2-1,&VAR_5);
    if (VAR_0.lua_client->resp == 2 || VAR_3 == '*') {
        VAR_4 += 2;
        if (VAR_5 == -1) {
            FUNC_1(VAR_1,0);
            return VAR_4;
        }
        FUNC_0(VAR_1);
        for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
            FUNC_2(VAR_1,VAR_6+1);
            VAR_4 = FUNC_5(VAR_1,VAR_4);
            FUNC_4(VAR_1,-3);
        }
    } else if (VAR_0.lua_client->resp == 3) {




        VAR_4 += 2;
        FUNC_0(VAR_1);
        FUNC_3(VAR_1,VAR_3 == '%' ? "map" : "set");
        FUNC_0(VAR_1);
        for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
            VAR_4 = FUNC_5(VAR_1,VAR_4);
            if (VAR_3 == '%') {
                VAR_4 = FUNC_5(VAR_1,VAR_4);
            } else {
                FUNC_1(VAR_1,1);
            }
            FUNC_4(VAR_1,-3);
        }
        FUNC_4(VAR_1,-3);
    }
    return VAR_4;
}
