
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ trytop; } ;
typedef TYPE_1__ js_State ;


 int FUNC_0 (TYPE_1__*,char*) ;

void FUNC_1(js_State *VAR_0)
{
 if (VAR_0->trytop == 0)
  FUNC_0(VAR_0, "endtry: exception stack underflow");
 --VAR_0->trytop;
}
