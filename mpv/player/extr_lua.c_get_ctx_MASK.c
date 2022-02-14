
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {int dummy; } ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (struct script_ctx*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int) ;
 struct script_ctx* FUNC_3 (int *,int) ;

__attribute__((used)) static struct script_ctx *FUNC_4(lua_State *VAR_1)
{
    FUNC_1(VAR_1, VAR_0, "ctx");
    struct script_ctx *VAR_2 = FUNC_3(VAR_1, -1);
    FUNC_2(VAR_1, 1);
    FUNC_0(VAR_2);
    return VAR_2;
}
