
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {int * state; } ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,char*) ;
 int VAR_0 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct script_ctx *VAR_3)
{
    lua_State *VAR_4 = VAR_3->state;

    FUNC_5(VAR_4, "mp", VAR_0);

    FUNC_4(VAR_4, "mp");

    FUNC_2(VAR_4, 0);
    FUNC_1(VAR_4, VAR_1, 1);
    FUNC_3(VAR_4, -2, "get_property");

    FUNC_2(VAR_4, 1);
    FUNC_1(VAR_4, VAR_1, 1);
    FUNC_3(VAR_4, -2, "get_property_osd");

    FUNC_0(VAR_4, 1);

    FUNC_5(VAR_4, "mp.utils", VAR_2);
}
