
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_17__ {int lasttarget; int lineinfoLastPC; int h; scalar_t__ lastlineOffset; scalar_t__ lastline; scalar_t__ packedlineinfoSize; int * bl; scalar_t__ nactvar; scalar_t__ nlocvars; scalar_t__ np; scalar_t__ nk; scalar_t__ freereg; int jpc; scalar_t__ pc; TYPE_1__* L; TYPE_3__* ls; struct TYPE_17__* prev; TYPE_2__* f; } ;
struct TYPE_16__ {int source; TYPE_4__* fs; TYPE_1__* L; } ;
struct TYPE_15__ {int maxstacksize; int source; } ;
typedef TYPE_2__ Proto ;
typedef TYPE_3__ LexState ;
typedef TYPE_4__ FuncState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_5 (LexState *VAR_1, FuncState *VAR_2) {
  lua_State *VAR_3 = VAR_1->L;
  Proto *VAR_4 = FUNC_1(VAR_3);
  VAR_2->f = VAR_4;
  VAR_2->prev = VAR_1->fs;
  VAR_2->ls = VAR_1;
  VAR_2->L = VAR_3;
  VAR_1->fs = VAR_2;
  VAR_2->pc = 0;
  VAR_2->lasttarget = -1;
  VAR_2->jpc = VAR_0;
  VAR_2->freereg = 0;
  VAR_2->nk = 0;
  VAR_2->np = 0;
  VAR_2->nlocvars = 0;
  VAR_2->nactvar = 0;
  VAR_2->bl = ((void*)0);
  VAR_4->source = VAR_1->source;
  VAR_4->maxstacksize = 2;






  VAR_2->h = FUNC_2(VAR_3, 0, 0);

  FUNC_3(VAR_3, VAR_3->top, VAR_2->h);
  FUNC_0(VAR_3);
  FUNC_4(VAR_3, VAR_3->top, VAR_4);
  FUNC_0(VAR_3);
}
