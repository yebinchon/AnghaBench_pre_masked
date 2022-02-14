
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ blockno; int recheck; } ;
struct TYPE_18__ {scalar_t__ blockno; int ntuples; int recheck; } ;
struct TYPE_17__ {TYPE_3__* ptchunks; TYPE_2__* ptpages; TYPE_1__* ptbase; TYPE_4__* state; TYPE_6__ output; } ;
struct TYPE_16__ {size_t schunkptr; size_t nchunks; int schunkbit; size_t spageptr; size_t npages; int lock; } ;
struct TYPE_15__ {int* index; } ;
struct TYPE_14__ {int* index; } ;
struct TYPE_13__ {TYPE_7__* ptentry; } ;
typedef TYPE_4__ TBMSharedIteratorState ;
typedef TYPE_5__ TBMSharedIterator ;
typedef TYPE_6__ TBMIterateResult ;
typedef TYPE_7__ PagetableEntry ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_7__*,int*) ;
 int FUNC_3 (TYPE_7__*,TYPE_6__*) ;

TBMIterateResult *
FUNC_4(TBMSharedIterator *VAR_2)
{
 TBMIterateResult *VAR_3 = &VAR_2->output;
 TBMSharedIteratorState *VAR_4 = VAR_2->state;
 PagetableEntry *VAR_5 = ((void*)0);
 int *VAR_6 = ((void*)0);
 int *VAR_7 = ((void*)0);

 if (VAR_2->ptbase != ((void*)0))
  VAR_5 = VAR_2->ptbase->ptentry;
 if (VAR_2->ptpages != ((void*)0))
  VAR_6 = VAR_2->ptpages->index;
 if (VAR_2->ptchunks != ((void*)0))
  VAR_7 = VAR_2->ptchunks->index;


 FUNC_0(&VAR_4->lock, VAR_0);





 while (VAR_4->schunkptr < VAR_4->nchunks)
 {
  PagetableEntry *VAR_8 = &VAR_5[VAR_7[VAR_4->schunkptr]];
  int VAR_9 = VAR_4->schunkbit;

  FUNC_2(VAR_8, &VAR_9);
  if (VAR_9 < VAR_1)
  {
   VAR_4->schunkbit = VAR_9;
   break;
  }

  VAR_4->schunkptr++;
  VAR_4->schunkbit = 0;
 }





 if (VAR_4->schunkptr < VAR_4->nchunks)
 {
  PagetableEntry *VAR_10 = &VAR_5[VAR_7[VAR_4->schunkptr]];
  BlockNumber VAR_11;

  VAR_11 = VAR_10->blockno + VAR_4->schunkbit;

  if (VAR_4->spageptr >= VAR_4->npages ||
   VAR_11 < VAR_5[VAR_6[VAR_4->spageptr]].blockno)
  {

   VAR_3->blockno = VAR_11;
   VAR_3->ntuples = -1;
   VAR_3->recheck = 1;
   VAR_4->schunkbit++;

   FUNC_1(&VAR_4->lock);
   return VAR_3;
  }
 }

 if (VAR_4->spageptr < VAR_4->npages)
 {
  PagetableEntry *VAR_12 = &VAR_5[VAR_6[VAR_4->spageptr]];
  int VAR_13;


  VAR_13 = FUNC_3(VAR_12, VAR_3);
  VAR_3->blockno = VAR_12->blockno;
  VAR_3->ntuples = VAR_13;
  VAR_3->recheck = VAR_12->recheck;
  VAR_4->spageptr++;

  FUNC_1(&VAR_4->lock);

  return VAR_3;
 }

 FUNC_1(&VAR_4->lock);


 return ((void*)0);
}
