
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int ss_currentScanDesc; } ;
struct TYPE_9__ {scalar_t__ vmbuffer; scalar_t__ pvmbuffer; int initialized; TYPE_5__ ss; int * shared_prefetch_iterator; int * shared_tbmiterator; int * prefetch_iterator; int * tbmres; int * tbmiterator; int * tbm; } ;
struct TYPE_8__ {int * chgParam; } ;
typedef TYPE_1__ PlanState ;
typedef TYPE_2__ BitmapHeapScanState ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(BitmapHeapScanState *VAR_1)
{
 PlanState *VAR_2 = FUNC_3(VAR_1);


 FUNC_4(VAR_1->ss.ss_currentScanDesc, ((void*)0));


 if (VAR_1->tbmiterator)
  FUNC_5(VAR_1->tbmiterator);
 if (VAR_1->prefetch_iterator)
  FUNC_5(VAR_1->prefetch_iterator);
 if (VAR_1->shared_tbmiterator)
  FUNC_6(VAR_1->shared_tbmiterator);
 if (VAR_1->shared_prefetch_iterator)
  FUNC_6(VAR_1->shared_prefetch_iterator);
 if (VAR_1->tbm)
  FUNC_7(VAR_1->tbm);
 if (VAR_1->vmbuffer != VAR_0)
  FUNC_2(VAR_1->vmbuffer);
 if (VAR_1->pvmbuffer != VAR_0)
  FUNC_2(VAR_1->pvmbuffer);
 VAR_1->tbm = ((void*)0);
 VAR_1->tbmiterator = ((void*)0);
 VAR_1->tbmres = ((void*)0);
 VAR_1->prefetch_iterator = ((void*)0);
 VAR_1->initialized = 0;
 VAR_1->shared_tbmiterator = ((void*)0);
 VAR_1->shared_prefetch_iterator = ((void*)0);
 VAR_1->vmbuffer = VAR_0;
 VAR_1->pvmbuffer = VAR_0;

 FUNC_1(&VAR_1->ss);





 if (VAR_2->chgParam == ((void*)0))
  FUNC_0(VAR_2);
}
