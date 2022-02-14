
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int panic; } ;
typedef TYPE_1__ js_State ;
typedef int js_Panic ;



js_Panic FUNC_0(js_State *VAR_0, js_Panic VAR_1)
{
 js_Panic VAR_2 = VAR_0->panic;
 VAR_0->panic = VAR_1;
 return VAR_2;
}
