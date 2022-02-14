
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3( lua_State *VAR_0 )
{
    int VAR_1 = FUNC_0( VAR_0, 1 );

    if (VAR_1 < 0 || VAR_1 > 255) {
        return FUNC_1( VAR_0, "wrong arg range" );
    }

    FUNC_2( VAR_1 );

    return 0;
}
