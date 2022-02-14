
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TrgmStateKey ;
struct TYPE_6__ {int * tentParent; scalar_t__ tentFlags; int * parent; int snumber; scalar_t__ flags; void* enterKeys; void* arcs; } ;
typedef TYPE_1__ TrgmState ;
struct TYPE_7__ {int queue; int nstates; int states; } ;
typedef TYPE_2__ TrgmNFA ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int*) ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static TrgmState *
FUNC_2(TrgmNFA *VAR_2, TrgmStateKey *VAR_3)
{
 TrgmState *VAR_4;
 bool VAR_5;

 VAR_4 = (TrgmState *) FUNC_0(VAR_2->states, VAR_3, VAR_0,
           &VAR_5);
 if (!VAR_5)
 {

  VAR_4->arcs = VAR_1;
  VAR_4->enterKeys = VAR_1;
  VAR_4->flags = 0;

  VAR_4->snumber = -(++VAR_2->nstates);
  VAR_4->parent = ((void*)0);
  VAR_4->tentFlags = 0;
  VAR_4->tentParent = ((void*)0);

  VAR_2->queue = FUNC_1(VAR_2->queue, VAR_4);
 }
 return VAR_4;
}
