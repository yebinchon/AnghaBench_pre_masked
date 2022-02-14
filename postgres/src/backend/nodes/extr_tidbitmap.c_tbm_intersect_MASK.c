
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int pagetable_iterator ;
struct TYPE_10__ {int blockno; scalar_t__ ischunk; } ;
struct TYPE_9__ {scalar_t__ nentries; scalar_t__ status; int pagetable; int npages; int nchunks; TYPE_2__ entry1; int iterating; } ;
typedef TYPE_1__ TIDBitmap ;
typedef TYPE_2__ PagetableEntry ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__* FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_2__*,TYPE_1__ const*) ;

void
FUNC_6(TIDBitmap *VAR_4, const TIDBitmap *VAR_5)
{
 FUNC_0(!VAR_4->iterating);

 if (VAR_4->nentries == 0)
  return;

 if (VAR_4->status == VAR_3)
 {
  if (FUNC_5(VAR_4, &VAR_4->entry1, VAR_5))
  {

   FUNC_0(!VAR_4->entry1.ischunk);
   VAR_4->npages--;
   VAR_4->nentries--;
   FUNC_0(VAR_4->nentries == 0);
   VAR_4->status = VAR_1;
  }
 }
 else
 {
  pagetable_iterator VAR_6;
  PagetableEntry *VAR_7;

  FUNC_0(VAR_4->status == VAR_2);
  FUNC_4(VAR_4->pagetable, &VAR_6);
  while ((VAR_7 = FUNC_3(VAR_4->pagetable, &VAR_6)) != ((void*)0))
  {
   if (FUNC_5(VAR_4, VAR_7, VAR_5))
   {

    if (VAR_7->ischunk)
     VAR_4->nchunks--;
    else
     VAR_4->npages--;
    VAR_4->nentries--;
    if (!FUNC_2(VAR_4->pagetable, VAR_7->blockno))
     FUNC_1(VAR_0, "hash table corrupted");
   }
  }
 }
}
