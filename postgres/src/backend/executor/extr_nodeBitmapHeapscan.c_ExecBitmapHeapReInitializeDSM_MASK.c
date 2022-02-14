
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int dsa_area ;
struct TYPE_8__ {TYPE_1__* state; } ;
struct TYPE_9__ {TYPE_2__ ps; } ;
struct TYPE_11__ {TYPE_3__ ss; TYPE_4__* pstate; } ;
struct TYPE_10__ {void* prefetch_iterator; void* tbmiterator; int state; } ;
struct TYPE_7__ {int * es_query_dsa; } ;
typedef int ParallelContext ;
typedef TYPE_4__ ParallelBitmapHeapState ;
typedef TYPE_5__ BitmapHeapScanState ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 void* VAR_1 ;
 int FUNC_1 (int *,void*) ;

void
FUNC_2(BitmapHeapScanState *VAR_2,
         ParallelContext *VAR_3)
{
 ParallelBitmapHeapState *VAR_4 = VAR_2->pstate;
 dsa_area *VAR_5 = VAR_2->ss.ps.state->es_query_dsa;


 if (VAR_5 == ((void*)0))
  return;

 VAR_4->state = VAR_0;

 if (FUNC_0(VAR_4->tbmiterator))
  FUNC_1(VAR_5, VAR_4->tbmiterator);

 if (FUNC_0(VAR_4->prefetch_iterator))
  FUNC_1(VAR_5, VAR_4->prefetch_iterator);

 VAR_4->tbmiterator = VAR_1;
 VAR_4->prefetch_iterator = VAR_1;
}
