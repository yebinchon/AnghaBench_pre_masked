
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int cur; } ;
typedef TYPE_1__ pagetable_iterator ;
struct TYPE_11__ {int blockno; scalar_t__ ischunk; } ;
struct TYPE_10__ {scalar_t__ iterating; scalar_t__ status; int nentries; int maxentries; int lossify_start; int pagetable; } ;
typedef TYPE_2__ TIDBitmap ;
typedef TYPE_3__ PagetableEntry ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_5(TIDBitmap *VAR_4)
{
 pagetable_iterator VAR_5;
 PagetableEntry *VAR_6;
 FUNC_0(VAR_4->iterating == VAR_3);
 FUNC_0(VAR_4->status == VAR_2);

 FUNC_3(VAR_4->pagetable, &VAR_5, VAR_4->lossify_start);
 while ((VAR_6 = FUNC_2(VAR_4->pagetable, &VAR_5)) != ((void*)0))
 {
  if (VAR_6->ischunk)
   continue;





  if ((VAR_6->blockno % VAR_1) == 0)
   continue;


  FUNC_4(VAR_4, VAR_6->blockno);

  if (VAR_4->nentries <= VAR_4->maxentries / 2)
  {




   VAR_4->lossify_start = VAR_5.cur;
   break;
  }







 }
 if (VAR_4->nentries > VAR_4->maxentries / 2)
  VAR_4->maxentries = FUNC_1(VAR_4->nentries, (VAR_0 - 1) / 2) * 2;
}
