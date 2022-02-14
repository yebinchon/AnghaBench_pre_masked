
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lookahead; } ;
typedef TYPE_1__ js_State ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(js_State *VAR_0, int VAR_1)
{
 if (!FUNC_2(VAR_0, VAR_1))
  FUNC_1(VAR_0, "JSON: unexpected token: %s (expected %s)",
    FUNC_0(VAR_0->lookahead), FUNC_0(VAR_1));
}
