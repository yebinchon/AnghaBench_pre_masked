
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int dsa_pointer ;
typedef int dsa_area ;
struct TYPE_5__ {void* ptchunks; void* ptpages; void* ptbase; TYPE_1__* state; } ;
struct TYPE_4__ {int schunks; scalar_t__ nchunks; int spages; scalar_t__ npages; int pagetable; } ;
typedef TYPE_1__ TBMSharedIteratorState ;
typedef TYPE_2__ TBMSharedIterator ;
typedef int OffsetNumber ;


 int VAR_0 ;
 void* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int) ;

TBMSharedIterator *
FUNC_2(dsa_area *VAR_1, dsa_pointer VAR_2)
{
 TBMSharedIterator *VAR_3;
 TBMSharedIteratorState *VAR_4;





 VAR_3 = (TBMSharedIterator *) FUNC_1(sizeof(TBMSharedIterator) +
            VAR_0 * sizeof(OffsetNumber));

 VAR_4 = (TBMSharedIteratorState *) FUNC_0(VAR_1, VAR_2);

 VAR_3->state = VAR_4;

 VAR_3->ptbase = FUNC_0(VAR_1, VAR_4->pagetable);

 if (VAR_4->npages)
  VAR_3->ptpages = FUNC_0(VAR_1, VAR_4->spages);
 if (VAR_4->nchunks)
  VAR_3->ptchunks = FUNC_0(VAR_1, VAR_4->schunks);

 return VAR_3;
}
