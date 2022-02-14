
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int dsa_pointer ;
typedef int dsa_area ;
struct TYPE_6__ {int refcount; } ;
struct TYPE_5__ {int refcount; } ;
struct TYPE_4__ {int schunks; int spages; int pagetable; } ;
typedef TYPE_1__ TBMSharedIteratorState ;
typedef TYPE_2__ PTIterationArray ;
typedef TYPE_3__ PTEntryArray ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int) ;

void
FUNC_4(dsa_area *VAR_0, dsa_pointer VAR_1)
{
 TBMSharedIteratorState *VAR_2 = FUNC_2(VAR_0, VAR_1);
 PTEntryArray *VAR_3;
 PTIterationArray *VAR_4;
 PTIterationArray *VAR_5;

 if (FUNC_0(VAR_2->pagetable))
 {
  VAR_3 = FUNC_2(VAR_0, VAR_2->pagetable);
  if (FUNC_3(&VAR_3->refcount, 1) == 0)
   FUNC_1(VAR_0, VAR_2->pagetable);
 }
 if (FUNC_0(VAR_2->spages))
 {
  VAR_4 = FUNC_2(VAR_0, VAR_2->spages);
  if (FUNC_3(&VAR_4->refcount, 1) == 0)
   FUNC_1(VAR_0, VAR_2->spages);
 }
 if (FUNC_0(VAR_2->schunks))
 {
  VAR_5 = FUNC_2(VAR_0, VAR_2->schunks);
  if (FUNC_3(&VAR_5->refcount, 1) == 0)
   FUNC_1(VAR_0, VAR_2->schunks);
 }

 FUNC_1(VAR_0, VAR_1);
}
