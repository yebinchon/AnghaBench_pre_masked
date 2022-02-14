
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pagetable_iterator ;
struct TYPE_5__ {scalar_t__ nentries; scalar_t__ status; int pagetable; int entry1; int iterating; } ;
typedef TYPE_1__ TIDBitmap ;
typedef int PagetableEntry ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

void
FUNC_4(TIDBitmap *VAR_2, const TIDBitmap *VAR_3)
{
 FUNC_0(!VAR_2->iterating);

 if (VAR_3->nentries == 0)
  return;

 if (VAR_3->status == VAR_1)
  FUNC_3(VAR_2, &VAR_3->entry1);
 else
 {
  pagetable_iterator VAR_4;
  PagetableEntry *VAR_5;

  FUNC_0(VAR_3->status == VAR_0);
  FUNC_2(VAR_3->pagetable, &VAR_4);
  while ((VAR_5 = FUNC_1(VAR_3->pagetable, &VAR_4)) != ((void*)0))
   FUNC_3(VAR_2, VAR_5);
 }
}
