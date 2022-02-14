
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t trytop; TYPE_1__* trybuf; int strict; int bot; int top; int tracetop; int envtop; int E; } ;
typedef TYPE_2__ js_State ;
typedef int js_Instruction ;
struct TYPE_5__ {void* buf; int * pc; int strict; int bot; int top; int tracetop; int envtop; int E; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;

void *FUNC_1(js_State *VAR_1, js_Instruction *VAR_2)
{
 if (VAR_1->trytop == VAR_0)
  FUNC_0(VAR_1, "try: exception stack overflow");
 VAR_1->trybuf[VAR_1->trytop].E = VAR_1->E;
 VAR_1->trybuf[VAR_1->trytop].envtop = VAR_1->envtop;
 VAR_1->trybuf[VAR_1->trytop].tracetop = VAR_1->tracetop;
 VAR_1->trybuf[VAR_1->trytop].top = VAR_1->top;
 VAR_1->trybuf[VAR_1->trytop].bot = VAR_1->bot;
 VAR_1->trybuf[VAR_1->trytop].strict = VAR_1->strict;
 VAR_1->trybuf[VAR_1->trytop].pc = VAR_2;
 return VAR_1->trybuf[VAR_1->trytop++].buf;
}
