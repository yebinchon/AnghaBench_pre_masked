
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ nCcalls; int top; } ;
struct TYPE_22__ {TYPE_3__* L; } ;
struct TYPE_21__ {void* maxstacksize; void* is_vararg; void* numparams; void* nups; void* lastlinedefined; void* linedefined; int * source; } ;
typedef int TString ;
typedef TYPE_1__ Proto ;
typedef TYPE_2__ LoadState ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 void* FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_3__*) ;
 TYPE_1__* FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_3__*,int ,TYPE_1__*) ;

__attribute__((used)) static Proto* FUNC_12(LoadState* VAR_1, TString* VAR_2)
{
 Proto* VAR_3;
 if (++VAR_1->L->nCcalls > VAR_0) FUNC_7(VAR_1,"code too deep");
 VAR_3=FUNC_9(VAR_1->L);
 FUNC_11(VAR_1->L,VAR_1->L->top,VAR_3); FUNC_8(VAR_1->L);
 VAR_3->source=FUNC_6(VAR_1); if (VAR_3->source==((void*)0)) VAR_3->source=VAR_2;
 VAR_3->linedefined=FUNC_5(VAR_1);
 VAR_3->lastlinedefined=FUNC_5(VAR_1);
 VAR_3->nups=FUNC_1(VAR_1);
 VAR_3->numparams=FUNC_1(VAR_1);
 VAR_3->is_vararg=FUNC_1(VAR_1);
 VAR_3->maxstacksize=FUNC_1(VAR_1);
 FUNC_2(VAR_1,VAR_3);
 FUNC_3(VAR_1,VAR_3);
 FUNC_4(VAR_1,VAR_3);
 FUNC_0 (!FUNC_10(VAR_3), "bad code");
 VAR_1->L->top--;
 VAR_1->L->nCcalls--;
 return VAR_3;
}
