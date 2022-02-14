
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ blockno; scalar_t__ ischunk; } ;
struct TYPE_6__ {scalar_t__ nentries; scalar_t__ status; int pagetable; TYPE_2__ entry1; } ;
typedef TYPE_1__ TIDBitmap ;
typedef TYPE_2__ PagetableEntry ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static const PagetableEntry *
FUNC_2(const TIDBitmap *VAR_1, BlockNumber VAR_2)
{
 const PagetableEntry *VAR_3;

 if (VAR_1->nentries == 0)
  return ((void*)0);

 if (VAR_1->status == VAR_0)
 {
  VAR_3 = &VAR_1->entry1;
  if (VAR_3->blockno != VAR_2)
   return ((void*)0);
  FUNC_0(!VAR_3->ischunk);
  return VAR_3;
 }

 VAR_3 = FUNC_1(VAR_1->pagetable, VAR_2);
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 if (VAR_3->ischunk)
  return ((void*)0);
 return VAR_3;
}
