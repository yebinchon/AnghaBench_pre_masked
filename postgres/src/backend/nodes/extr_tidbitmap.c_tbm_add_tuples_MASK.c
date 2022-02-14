
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int bitmapword ;
struct TYPE_9__ {int* words; int recheck; scalar_t__ ischunk; } ;
struct TYPE_8__ {scalar_t__ iterating; scalar_t__ nentries; scalar_t__ maxentries; } ;
typedef TYPE_1__ TIDBitmap ;
typedef TYPE_2__ PagetableEntry ;
typedef int OffsetNumber ;
typedef scalar_t__ ItemPointer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__ const) ;
 int FUNC_3 (scalar_t__ const) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int) ;
 TYPE_2__* FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,scalar_t__) ;

void
FUNC_9(TIDBitmap *VAR_4, const ItemPointer VAR_5, int VAR_6,
      bool VAR_7)
{
 BlockNumber VAR_8 = VAR_1;
 PagetableEntry *VAR_9 = ((void*)0);
 int VAR_10;

 FUNC_0(VAR_4->iterating == VAR_3);
 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
 {
  BlockNumber VAR_11 = FUNC_2(VAR_5 + VAR_10);
  OffsetNumber VAR_12 = FUNC_3(VAR_5 + VAR_10);
  int VAR_13,
     VAR_14;


  if (VAR_12 < 1 || VAR_12 > VAR_2)
   FUNC_5(VAR_0, "tuple offset out of range: %u", VAR_12);






  if (VAR_11 != VAR_8)
  {
   if (FUNC_8(VAR_4, VAR_11))
    VAR_9 = ((void*)0);
   else
    VAR_9 = FUNC_6(VAR_4, VAR_11);
   VAR_8 = VAR_11;
  }

  if (VAR_9 == ((void*)0))
   continue;

  if (VAR_9->ischunk)
  {

   VAR_13 = VAR_14 = 0;
  }
  else
  {

   VAR_13 = FUNC_4(VAR_12 - 1);
   VAR_14 = FUNC_1(VAR_12 - 1);
  }
  VAR_9->words[VAR_13] |= ((bitmapword) 1 << VAR_14);
  VAR_9->recheck |= VAR_7;

  if (VAR_4->nentries > VAR_4->maxentries)
  {
   FUNC_7(VAR_4);

   VAR_8 = VAR_1;
  }
 }
}
