
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_3__ {struct TYPE_3__* prototype; } ;
typedef TYPE_1__ js_Object ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 TYPE_1__* FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(js_State *VAR_0)
{
 js_Object *VAR_1 = FUNC_2(VAR_0, 0);
 if (FUNC_0(VAR_0, 1)) {
  js_Object *VAR_2 = FUNC_2(VAR_0, 1);
  do {
   VAR_2 = VAR_2->prototype;
   if (VAR_2 == VAR_1) {
    FUNC_1(VAR_0, 1);
    return;
   }
  } while (VAR_2);
 }
 FUNC_1(VAR_0, 0);
}
