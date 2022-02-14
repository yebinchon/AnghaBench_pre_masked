
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int pagetable_iterator ;
struct TYPE_10__ {scalar_t__ ischunk; } ;
struct TYPE_9__ {scalar_t__ schunkbit; scalar_t__ schunkptr; scalar_t__ spageptr; TYPE_1__* tbm; } ;
struct TYPE_8__ {scalar_t__ iterating; scalar_t__ status; int npages; int nchunks; TYPE_3__** schunks; TYPE_3__** spages; int pagetable; int mcxt; } ;
typedef TYPE_1__ TIDBitmap ;
typedef TYPE_2__ TBMIterator ;
typedef TYPE_3__ PagetableEntry ;
typedef int OffsetNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__**,int,int,int ) ;
 int VAR_5 ;

TBMIterator *
FUNC_6(TIDBitmap *VAR_6)
{
 TBMIterator *VAR_7;

 FUNC_0(VAR_6->iterating != VAR_3);





 VAR_7 = (TBMIterator *) FUNC_4(sizeof(TBMIterator) +
           VAR_0 * sizeof(OffsetNumber));
 VAR_7->tbm = VAR_6;




 VAR_7->spageptr = 0;
 VAR_7->schunkptr = 0;
 VAR_7->schunkbit = 0;







 if (VAR_6->status == VAR_1 && VAR_6->iterating == VAR_4)
 {
  pagetable_iterator VAR_8;
  PagetableEntry *VAR_9;
  int VAR_10;
  int VAR_11;

  if (!VAR_6->spages && VAR_6->npages > 0)
   VAR_6->spages = (PagetableEntry **)
    FUNC_1(VAR_6->mcxt,
           VAR_6->npages * sizeof(PagetableEntry *));
  if (!VAR_6->schunks && VAR_6->nchunks > 0)
   VAR_6->schunks = (PagetableEntry **)
    FUNC_1(VAR_6->mcxt,
           VAR_6->nchunks * sizeof(PagetableEntry *));

  VAR_10 = VAR_11 = 0;
  FUNC_3(VAR_6->pagetable, &VAR_8);
  while ((VAR_9 = FUNC_2(VAR_6->pagetable, &VAR_8)) != ((void*)0))
  {
   if (VAR_9->ischunk)
    VAR_6->schunks[VAR_11++] = VAR_9;
   else
    VAR_6->spages[VAR_10++] = VAR_9;
  }
  FUNC_0(VAR_10 == VAR_6->npages);
  FUNC_0(VAR_11 == VAR_6->nchunks);
  if (VAR_10 > 1)
   FUNC_5(VAR_6->spages, VAR_10, sizeof(PagetableEntry *),
      VAR_5);
  if (VAR_11 > 1)
   FUNC_5(VAR_6->schunks, VAR_11, sizeof(PagetableEntry *),
      VAR_5);
 }

 VAR_6->iterating = VAR_2;

 return VAR_7;
}
