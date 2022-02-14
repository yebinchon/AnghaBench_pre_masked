
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lexchar; } ;
typedef TYPE_1__ js_State ;


 scalar_t__ FUNC_0 (TYPE_1__*,char) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(js_State *VAR_0)
{

 while (VAR_0->lexchar != 0) {
  if (FUNC_0(VAR_0, '*')) {
   while (VAR_0->lexchar == '*')
    FUNC_1(VAR_0);
   if (FUNC_0(VAR_0, '/'))
    return 0;
  }
  else
   FUNC_1(VAR_0);
 }
 return -1;
}
