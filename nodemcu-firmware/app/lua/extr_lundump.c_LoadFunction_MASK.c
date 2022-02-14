
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ nCcalls; int top; } ;
struct TYPE_22__ {TYPE_3__* L; int Z; } ;
struct TYPE_21__ {void* maxstacksize; void* is_vararg; void* numparams; void* nups; void* lastlinedefined; void* linedefined; int * source; int marked; } ;
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
 int VAR_1 ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ,int ) ;
 TYPE_1__* FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (TYPE_3__*,int ,TYPE_1__*) ;

__attribute__((used)) static Proto* FUNC_14(LoadState* VAR_2, TString* VAR_3)
{
 Proto* VAR_4;
 if (++VAR_2->L->nCcalls > VAR_0) FUNC_7(VAR_2,"code too deep");
 VAR_4=FUNC_10(VAR_2->L);
 if (FUNC_12(VAR_2->Z)) FUNC_9((VAR_4)->marked, VAR_1);
 FUNC_13(VAR_2->L,VAR_2->L->top,VAR_4); FUNC_8(VAR_2->L);
 VAR_4->source=FUNC_6(VAR_2); if (VAR_4->source==((void*)0)) VAR_4->source=VAR_3;
 VAR_4->linedefined=FUNC_5(VAR_2);
 VAR_4->lastlinedefined=FUNC_5(VAR_2);
 VAR_4->nups=FUNC_1(VAR_2);
 VAR_4->numparams=FUNC_1(VAR_2);
 VAR_4->is_vararg=FUNC_1(VAR_2);
 VAR_4->maxstacksize=FUNC_1(VAR_2);
 FUNC_2(VAR_2,VAR_4);
 FUNC_3(VAR_2,VAR_4);
 FUNC_4(VAR_2,VAR_4);
 FUNC_0 (!FUNC_11(VAR_4), "bad code");
 VAR_2->L->top--;
 VAR_2->L->nCcalls--;
 return VAR_4;
}
