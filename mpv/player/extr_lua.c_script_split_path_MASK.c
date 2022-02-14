
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int len; int start; } ;
typedef TYPE_1__ bstr ;


 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char const*) ;
 TYPE_1__ FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_0)
{
    const char *VAR_1 = FUNC_0(VAR_0, 1);
    bstr VAR_2 = FUNC_4(VAR_1);
    FUNC_1(VAR_0, VAR_2.start, VAR_2.len);
    FUNC_2(VAR_0, FUNC_3(VAR_1));
    return 2;
}
