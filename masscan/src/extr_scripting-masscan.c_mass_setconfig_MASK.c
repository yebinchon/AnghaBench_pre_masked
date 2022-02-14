
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lua_State {int dummy; } ;
struct MasscanWrapper {struct Masscan* masscan; } ;
struct Masscan {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (struct lua_State*,int) ;
 struct MasscanWrapper* FUNC_1 (struct lua_State*,int,int ) ;
 int FUNC_2 (struct Masscan*,char const*,char const*) ;

__attribute__((used)) static int FUNC_3(struct lua_State *VAR_1)
{
    struct MasscanWrapper *VAR_2;
    struct Masscan *VAR_3;
    const char *VAR_4;
    const char *VAR_5;

    VAR_2 = FUNC_1(VAR_1, 1, VAR_0);
    VAR_3 = VAR_2->masscan;
    VAR_4 = FUNC_0(VAR_1, 2);
    VAR_5 = FUNC_0(VAR_1, 3);

    FUNC_2(VAR_3, VAR_4, VAR_5);

    return 0;
}
