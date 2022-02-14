
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int js_Value ;
struct TYPE_8__ {size_t trytop; int (* panic ) (TYPE_2__*) ;TYPE_1__* trybuf; int strict; int bot; int top; int tracetop; int envtop; int E; } ;
typedef TYPE_2__ js_State ;
struct TYPE_7__ {int buf; int strict; int bot; int top; int tracetop; int envtop; int E; } ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int) ;
 int * FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(js_State *VAR_0)
{
 if (VAR_0->trytop > 0) {
  js_Value VAR_1 = *FUNC_3(VAR_0, -1);
  --VAR_0->trytop;
  VAR_0->E = VAR_0->trybuf[VAR_0->trytop].E;
  VAR_0->envtop = VAR_0->trybuf[VAR_0->trytop].envtop;
  VAR_0->tracetop = VAR_0->trybuf[VAR_0->trytop].tracetop;
  VAR_0->top = VAR_0->trybuf[VAR_0->trytop].top;
  VAR_0->bot = VAR_0->trybuf[VAR_0->trytop].bot;
  VAR_0->strict = VAR_0->trybuf[VAR_0->trytop].strict;
  FUNC_1(VAR_0, VAR_1);
  FUNC_2(VAR_0->trybuf[VAR_0->trytop].buf, 1);
 }
 if (VAR_0->panic)
  VAR_0->panic(VAR_0);
 FUNC_0();
}
