
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;
typedef int lua_State ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int ,int ,char*) ;
 scalar_t__ FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int,char*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;

void FUNC_13(lua_State *VAR_0, sds *VAR_1, int VAR_2) {

    sds VAR_3 = FUNC_10(VAR_1+1,VAR_2-1," ",1);
    sds VAR_4 = FUNC_7(FUNC_12("return "),VAR_3);


    if (FUNC_2(VAR_0,VAR_4,FUNC_11(VAR_4),"@ldb_eval")) {
        FUNC_4(VAR_0,1);

        if (FUNC_2(VAR_0,VAR_3,FUNC_11(VAR_3),"@ldb_eval")) {
            FUNC_0(FUNC_6(FUNC_8(),"<error> %s",FUNC_5(VAR_0,-1)));
            FUNC_4(VAR_0,1);
            FUNC_9(VAR_3);
            return;
        }
    }


    FUNC_9(VAR_3);
    FUNC_9(VAR_4);
    if (FUNC_3(VAR_0,0,1,0)) {
        FUNC_0(FUNC_6(FUNC_8(),"<error> %s",FUNC_5(VAR_0,-1)));
        FUNC_4(VAR_0,1);
        return;
    }
    FUNC_1(VAR_0,"<retval> ");
    FUNC_4(VAR_0,1);
}
