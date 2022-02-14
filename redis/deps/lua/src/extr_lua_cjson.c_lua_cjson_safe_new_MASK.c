
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,char const*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int (*) (int *)) ;
 int FUNC_4 (int *,int,char const*) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_1)
{
    const char *VAR_2[] = { "decode", "encode", ((void*)0) };
    int VAR_3;

    FUNC_0(VAR_1);


    FUNC_3(VAR_1, FUNC_5);
    FUNC_4(VAR_1, -2, "new");

    for (VAR_3 = 0; VAR_2[VAR_3]; VAR_3++) {
        FUNC_1(VAR_1, -1, VAR_2[VAR_3]);
        FUNC_2(VAR_1, VAR_0, 1);
        FUNC_4(VAR_1, -2, VAR_2[VAR_3]);
    }

    return 1;
}
