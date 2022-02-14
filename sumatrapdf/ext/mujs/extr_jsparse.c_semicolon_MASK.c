
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char lookahead; scalar_t__ newline; } ;
typedef TYPE_1__ js_State ;


 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char) ;

__attribute__((used)) static void FUNC_3(js_State *VAR_0)
{
 if (VAR_0->lookahead == ';') {
  FUNC_1(VAR_0);
  return;
 }
 if (VAR_0->newline || VAR_0->lookahead == '}' || VAR_0->lookahead == 0)
  return;
 FUNC_0(VAR_0, "unexpected token: %s (expected ';')", FUNC_2(VAR_0->lookahead));
}
