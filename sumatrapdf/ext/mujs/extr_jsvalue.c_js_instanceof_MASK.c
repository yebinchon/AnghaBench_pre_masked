
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_3__ {struct TYPE_3__* prototype; } ;
typedef TYPE_1__ js_Object ;


 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 TYPE_1__* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;

int FUNC_6(js_State *VAR_0)
{
 js_Object *VAR_1, *VAR_2;

 if (!FUNC_1(VAR_0, -1))
  FUNC_5(VAR_0, "instanceof: invalid operand");

 if (!FUNC_2(VAR_0, -2))
  return 0;

 FUNC_0(VAR_0, -1, "prototype");
 if (!FUNC_2(VAR_0, -1))
  FUNC_5(VAR_0, "instanceof: 'prototype' property is not an object");
 VAR_1 = FUNC_4(VAR_0, -1);
 FUNC_3(VAR_0, 1);

 VAR_2 = FUNC_4(VAR_0, -2);
 while (VAR_2) {
  VAR_2 = VAR_2->prototype;
  if (VAR_1 == VAR_2)
   return 1;
 }

 return 0;
}
