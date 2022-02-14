
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ blockno; int recheck; } ;
struct TYPE_12__ {scalar_t__ blockno; int ntuples; int recheck; } ;
struct TYPE_11__ {size_t schunkptr; int schunkbit; size_t spageptr; TYPE_3__ output; TYPE_1__* tbm; } ;
struct TYPE_10__ {scalar_t__ iterating; size_t nchunks; size_t npages; scalar_t__ status; TYPE_4__** spages; TYPE_4__ entry1; TYPE_4__** schunks; } ;
typedef TYPE_1__ TIDBitmap ;
typedef TYPE_2__ TBMIterator ;
typedef TYPE_3__ TBMIterateResult ;
typedef TYPE_4__ PagetableEntry ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_4__*,int*) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;

TBMIterateResult *
FUNC_3(TBMIterator *VAR_3)
{
 TIDBitmap *VAR_4 = VAR_3->tbm;
 TBMIterateResult *VAR_5 = &(VAR_3->output);

 FUNC_0(VAR_4->iterating == VAR_1);





 while (VAR_3->schunkptr < VAR_4->nchunks)
 {
  PagetableEntry *VAR_6 = VAR_4->schunks[VAR_3->schunkptr];
  int VAR_7 = VAR_3->schunkbit;

  FUNC_1(VAR_6, &VAR_7);
  if (VAR_7 < VAR_0)
  {
   VAR_3->schunkbit = VAR_7;
   break;
  }

  VAR_3->schunkptr++;
  VAR_3->schunkbit = 0;
 }





 if (VAR_3->schunkptr < VAR_4->nchunks)
 {
  PagetableEntry *VAR_8 = VAR_4->schunks[VAR_3->schunkptr];
  BlockNumber VAR_9;

  VAR_9 = VAR_8->blockno + VAR_3->schunkbit;
  if (VAR_3->spageptr >= VAR_4->npages ||
   VAR_9 < VAR_4->spages[VAR_3->spageptr]->blockno)
  {

   VAR_5->blockno = VAR_9;
   VAR_5->ntuples = -1;
   VAR_5->recheck = 1;
   VAR_3->schunkbit++;
   return VAR_5;
  }
 }

 if (VAR_3->spageptr < VAR_4->npages)
 {
  PagetableEntry *VAR_10;
  int VAR_11;


  if (VAR_4->status == VAR_2)
   VAR_10 = &VAR_4->entry1;
  else
   VAR_10 = VAR_4->spages[VAR_3->spageptr];


  VAR_11 = FUNC_2(VAR_10, VAR_5);
  VAR_5->blockno = VAR_10->blockno;
  VAR_5->ntuples = VAR_11;
  VAR_5->recheck = VAR_10->recheck;
  VAR_3->spageptr++;
  return VAR_5;
 }


 return ((void*)0);
}
