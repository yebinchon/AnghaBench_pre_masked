
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ blockno; char status; } ;
struct TYPE_8__ {scalar_t__ status; int npages; int nentries; int pagetable; TYPE_2__ entry1; } ;
typedef TYPE_1__ TIDBitmap ;
typedef TYPE_2__ PagetableEntry ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_1 (int ,scalar_t__,int*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static PagetableEntry *
FUNC_3(TIDBitmap *VAR_2, BlockNumber VAR_3)
{
 PagetableEntry *VAR_4;
 bool VAR_5;

 if (VAR_2->status == VAR_0)
 {

  VAR_4 = &VAR_2->entry1;
  VAR_5 = 0;
  VAR_2->status = VAR_1;
 }
 else
 {
  if (VAR_2->status == VAR_1)
  {
   VAR_4 = &VAR_2->entry1;
   if (VAR_4->blockno == VAR_3)
    return VAR_4;

   FUNC_2(VAR_2);
  }


  VAR_4 = FUNC_1(VAR_2->pagetable, VAR_3, &VAR_5);
 }


 if (!VAR_5)
 {
  char VAR_6 = VAR_4->status;

  FUNC_0(VAR_4, 0, sizeof(PagetableEntry));
  VAR_4->status = VAR_6;
  VAR_4->blockno = VAR_3;

  VAR_2->nentries++;
  VAR_2->npages++;
 }

 return VAR_4;
}
