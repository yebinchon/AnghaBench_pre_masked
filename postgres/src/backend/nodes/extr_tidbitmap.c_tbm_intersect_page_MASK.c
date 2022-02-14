
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bitmapword ;
struct TYPE_4__ {int* words; int recheck; scalar_t__ ischunk; scalar_t__ blockno; } ;
typedef int TIDBitmap ;
typedef TYPE_1__ PagetableEntry ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int const*,scalar_t__) ;
 scalar_t__ FUNC_2 (int const*,scalar_t__) ;

__attribute__((used)) static bool
FUNC_3(TIDBitmap *VAR_3, PagetableEntry *VAR_4, const TIDBitmap *VAR_5)
{
 const PagetableEntry *VAR_6;
 int VAR_7;

 if (VAR_4->ischunk)
 {

  bool VAR_8 = 1;

  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  {
   bitmapword VAR_9 = VAR_4->words[VAR_7];

   if (VAR_9 != 0)
   {
    bitmapword VAR_10 = VAR_9;
    BlockNumber VAR_11;
    int VAR_12;

    VAR_11 = VAR_4->blockno + (VAR_7 * VAR_0);
    VAR_12 = 0;
    while (VAR_9 != 0)
    {
     if (VAR_9 & 1)
     {
      if (!FUNC_2(VAR_5, VAR_11) &&
       FUNC_1(VAR_5, VAR_11) == ((void*)0))
      {

       VAR_10 &= ~((bitmapword) 1 << VAR_12);
      }
     }
     VAR_11++;
     VAR_12++;
     VAR_9 >>= 1;
    }
    VAR_4->words[VAR_7] = VAR_10;
    if (VAR_10 != 0)
     VAR_8 = 0;
   }
  }
  return VAR_8;
 }
 else if (FUNC_2(VAR_5, VAR_4->blockno))
 {






  VAR_4->recheck = 1;
  return 0;
 }
 else
 {
  bool VAR_13 = 1;

  VAR_6 = FUNC_1(VAR_5, VAR_4->blockno);
  if (VAR_6 != ((void*)0))
  {

   FUNC_0(!VAR_6->ischunk);
   for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
   {
    VAR_4->words[VAR_7] &= VAR_6->words[VAR_7];
    if (VAR_4->words[VAR_7] != 0)
     VAR_13 = 0;
   }
   VAR_4->recheck |= VAR_6->recheck;
  }

  return VAR_13;
 }
}
