
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Number ;
typedef int lua_Integer ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;

int FUNC_10(lua_State *VAR_1) {
    int VAR_2 = 0, VAR_3 = 0;

    lua_Number VAR_4;





    int VAR_5;

    VAR_5 = FUNC_1(VAR_1);

    FUNC_5(VAR_1);
    while(FUNC_3(VAR_1,-2)) {

        FUNC_4(VAR_1,1);


        if ((VAR_0 != FUNC_9(VAR_1,-1)) || (VAR_4 = FUNC_8(VAR_1, -1)) <= 0 ||
            !FUNC_0(VAR_4))



        {
            FUNC_6(VAR_1, VAR_5);
            return 0;
        }
        VAR_3 = (VAR_4 > VAR_3 ? VAR_4 : VAR_3);
        VAR_2++;
    }





    FUNC_6(VAR_1, VAR_5);
    return VAR_3 == VAR_2;
}
