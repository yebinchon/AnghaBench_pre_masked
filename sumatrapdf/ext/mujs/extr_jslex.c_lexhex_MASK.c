
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lexchar; } ;
typedef TYPE_1__ js_State ;


 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 double FUNC_3 (int ) ;

__attribute__((used)) static double FUNC_4(js_State *VAR_0)
{
 double VAR_1 = 0;
 if (!FUNC_1(VAR_0->lexchar))
  FUNC_0(VAR_0, "malformed hexadecimal number");
 while (FUNC_1(VAR_0->lexchar)) {
  VAR_1 = VAR_1 * 16 + FUNC_3(VAR_0->lexchar);
  FUNC_2(VAR_0);
 }
 return VAR_1;
}
