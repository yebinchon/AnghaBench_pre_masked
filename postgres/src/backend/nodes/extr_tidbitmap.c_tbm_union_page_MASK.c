
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int bitmapword ;
struct TYPE_11__ {int* words; int recheck; scalar_t__ ischunk; scalar_t__ blockno; } ;
struct TYPE_10__ {scalar_t__ nentries; scalar_t__ maxentries; } ;
typedef TYPE_1__ TIDBitmap ;
typedef TYPE_2__ PagetableEntry ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(TIDBitmap *VAR_3, const PagetableEntry *VAR_4)
{
 PagetableEntry *VAR_5;
 int VAR_6;

 if (VAR_4->ischunk)
 {

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  {
   bitmapword VAR_7 = VAR_4->words[VAR_6];

   if (VAR_7 != 0)
   {
    BlockNumber VAR_8;

    VAR_8 = VAR_4->blockno + (VAR_6 * VAR_0);
    while (VAR_7 != 0)
    {
     if (VAR_7 & 1)
      FUNC_2(VAR_3, VAR_8);
     VAR_8++;
     VAR_7 >>= 1;
    }
   }
  }
 }
 else if (FUNC_3(VAR_3, VAR_4->blockno))
 {

  return;
 }
 else
 {
  VAR_5 = FUNC_0(VAR_3, VAR_4->blockno);
  if (VAR_5->ischunk)
  {

   VAR_5->words[0] |= ((bitmapword) 1 << 0);
  }
  else
  {

   for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
    VAR_5->words[VAR_6] |= VAR_4->words[VAR_6];
   VAR_5->recheck |= VAR_4->recheck;
  }
 }

 if (VAR_3->nentries > VAR_3->maxentries)
  FUNC_1(VAR_3);
}
