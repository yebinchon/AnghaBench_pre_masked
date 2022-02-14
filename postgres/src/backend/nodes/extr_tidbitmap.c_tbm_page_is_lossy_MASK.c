
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bitmapword ;
struct TYPE_6__ {int* words; scalar_t__ ischunk; } ;
struct TYPE_5__ {scalar_t__ nchunks; scalar_t__ status; int pagetable; } ;
typedef TYPE_1__ TIDBitmap ;
typedef TYPE_2__ PagetableEntry ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int ,int) ;

__attribute__((used)) static bool
FUNC_4(const TIDBitmap *VAR_2, BlockNumber VAR_3)
{
 PagetableEntry *VAR_4;
 BlockNumber VAR_5;
 int VAR_6;


 if (VAR_2->nchunks == 0)
  return 0;
 FUNC_0(VAR_2->status == VAR_1);

 VAR_6 = VAR_3 % VAR_0;
 VAR_5 = VAR_3 - VAR_6;

 VAR_4 = FUNC_3(VAR_2->pagetable, VAR_5);

 if (VAR_4 != ((void*)0) && VAR_4->ischunk)
 {
  int VAR_7 = FUNC_2(VAR_6);
  int VAR_8 = FUNC_1(VAR_6);

  if ((VAR_4->words[VAR_7] & ((bitmapword) 1 << VAR_8)) != 0)
   return 1;
 }
 return 0;
}
