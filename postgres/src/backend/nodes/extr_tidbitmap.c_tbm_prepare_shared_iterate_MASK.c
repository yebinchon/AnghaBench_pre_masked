
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int pagetable_iterator ;
typedef void* dsa_pointer ;
struct TYPE_13__ {int refcount; TYPE_3__* ptentry; } ;
struct TYPE_12__ {int* index; int refcount; } ;
struct TYPE_11__ {scalar_t__ ischunk; } ;
struct TYPE_10__ {int npages; int nchunks; scalar_t__ spageptr; scalar_t__ schunkptr; scalar_t__ schunkbit; int lock; void* schunks; void* spages; void* pagetable; int maxentries; int nentries; } ;
struct TYPE_9__ {scalar_t__ iterating; int npages; int nchunks; scalar_t__ status; void* ptchunks; int * dsa; void* ptpages; void* dsapagetable; int maxentries; int nentries; int entry1; int pagetable; } ;
typedef TYPE_1__ TIDBitmap ;
typedef TYPE_2__ TBMSharedIteratorState ;
typedef TYPE_3__ PagetableEntry ;
typedef TYPE_4__ PTIterationArray ;
typedef TYPE_5__ PTEntryArray ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_2 (int *,int) ;
 void* FUNC_3 (int *,int) ;
 void* FUNC_4 (int *,void*) ;
 int FUNC_5 (TYPE_3__*,int *,int) ;
 TYPE_3__* FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (void*,int,int,int ,void*) ;
 int VAR_6 ;

dsa_pointer
FUNC_11(TIDBitmap *VAR_7)
{
 dsa_pointer VAR_8;
 TBMSharedIteratorState *VAR_9;
 PTEntryArray *VAR_10 = ((void*)0);
 PTIterationArray *VAR_11 = ((void*)0);
 PTIterationArray *VAR_12 = ((void*)0);

 FUNC_0(VAR_7->dsa != ((void*)0));
 FUNC_0(VAR_7->iterating != VAR_2);





 VAR_8 = FUNC_3(VAR_7->dsa, sizeof(TBMSharedIteratorState));
 VAR_9 = FUNC_4(VAR_7->dsa, VAR_8);






 if (VAR_7->iterating == VAR_4)
 {
  pagetable_iterator VAR_13;
  PagetableEntry *VAR_14;
  int VAR_15;
  int VAR_16;
  int VAR_17;





  if (VAR_7->npages)
  {
   VAR_7->ptpages = FUNC_2(VAR_7->dsa, sizeof(PTIterationArray) +
          VAR_7->npages * sizeof(int));
   VAR_11 = FUNC_4(VAR_7->dsa, VAR_7->ptpages);
   FUNC_9(&VAR_11->refcount, 0);
  }
  if (VAR_7->nchunks)
  {
   VAR_7->ptchunks = FUNC_2(VAR_7->dsa, sizeof(PTIterationArray) +
           VAR_7->nchunks * sizeof(int));
   VAR_12 = FUNC_4(VAR_7->dsa, VAR_7->ptchunks);
   FUNC_9(&VAR_12->refcount, 0);
  }







  VAR_16 = VAR_17 = 0;
  if (VAR_7->status == VAR_1)
  {
   VAR_10 = FUNC_4(VAR_7->dsa, VAR_7->dsapagetable);

   FUNC_7(VAR_7->pagetable, &VAR_13);
   while ((VAR_14 = FUNC_6(VAR_7->pagetable, &VAR_13)) != ((void*)0))
   {
    VAR_15 = VAR_14 - VAR_10->ptentry;
    if (VAR_14->ischunk)
     VAR_12->index[VAR_17++] = VAR_15;
    else
     VAR_11->index[VAR_16++] = VAR_15;
   }

   FUNC_0(VAR_16 == VAR_7->npages);
   FUNC_0(VAR_17 == VAR_7->nchunks);
  }
  else if (VAR_7->status == VAR_5)
  {





   VAR_7->dsapagetable = FUNC_2(VAR_7->dsa, sizeof(PTEntryArray) +
            sizeof(PagetableEntry));
   VAR_10 = FUNC_4(VAR_7->dsa, VAR_7->dsapagetable);
   FUNC_5(VAR_10->ptentry, &VAR_7->entry1, sizeof(PagetableEntry));
   VAR_11->index[0] = 0;
  }

  if (VAR_10 != ((void*)0))
   FUNC_9(&VAR_10->refcount, 0);
  if (VAR_16 > 1)
   FUNC_10((void *) (VAR_11->index), VAR_16, sizeof(int),
       VAR_6, (void *) VAR_10->ptentry);
  if (VAR_17 > 1)
   FUNC_10((void *) (VAR_12->index), VAR_17, sizeof(int),
       VAR_6, (void *) VAR_10->ptentry);
 }





 VAR_9->nentries = VAR_7->nentries;
 VAR_9->maxentries = VAR_7->maxentries;
 VAR_9->npages = VAR_7->npages;
 VAR_9->nchunks = VAR_7->nchunks;
 VAR_9->pagetable = VAR_7->dsapagetable;
 VAR_9->spages = VAR_7->ptpages;
 VAR_9->schunks = VAR_7->ptchunks;

 VAR_10 = FUNC_4(VAR_7->dsa, VAR_7->dsapagetable);
 VAR_11 = FUNC_4(VAR_7->dsa, VAR_7->ptpages);
 VAR_12 = FUNC_4(VAR_7->dsa, VAR_7->ptchunks);






 if (VAR_10 != ((void*)0))
  FUNC_8(&VAR_10->refcount, 1);
 if (VAR_11 != ((void*)0))
  FUNC_8(&VAR_11->refcount, 1);
 if (VAR_12 != ((void*)0))
  FUNC_8(&VAR_12->refcount, 1);


 FUNC_1(&VAR_9->lock, VAR_0);


 VAR_9->schunkbit = 0;
 VAR_9->schunkptr = 0;
 VAR_9->spageptr = 0;

 VAR_7->iterating = VAR_3;

 return VAR_8;
}
