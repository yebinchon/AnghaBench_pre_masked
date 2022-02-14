
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int ItemPointerData ;
typedef int * ItemPointer ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int) ;

ItemPointer
FUNC_3(ItemPointerData *VAR_0, uint32 VAR_1,
      ItemPointerData *VAR_2, uint32 VAR_3,
      int *VAR_4)
{
 ItemPointerData *VAR_5;

 VAR_5 = (ItemPointer) FUNC_2((VAR_1 + VAR_3) * sizeof(ItemPointerData));





 if (VAR_1 == 0 || VAR_3 == 0 || FUNC_0(&VAR_0[VAR_1 - 1], &VAR_2[0]) < 0)
 {
  FUNC_1(VAR_5, VAR_0, VAR_1 * sizeof(ItemPointerData));
  FUNC_1(&VAR_5[VAR_1], VAR_2, VAR_3 * sizeof(ItemPointerData));
  *VAR_4 = VAR_1 + VAR_3;
 }
 else if (FUNC_0(&VAR_2[VAR_3 - 1], &VAR_0[0]) < 0)
 {
  FUNC_1(VAR_5, VAR_2, VAR_3 * sizeof(ItemPointerData));
  FUNC_1(&VAR_5[VAR_3], VAR_0, VAR_1 * sizeof(ItemPointerData));
  *VAR_4 = VAR_1 + VAR_3;
 }
 else
 {
  ItemPointerData *VAR_6 = VAR_5;
  ItemPointerData *VAR_7 = VAR_0;
  ItemPointerData *VAR_8 = VAR_2;

  while (VAR_7 - VAR_0 < VAR_1 && VAR_8 - VAR_2 < VAR_3)
  {
   int VAR_9 = FUNC_0(VAR_7, VAR_8);

   if (VAR_9 > 0)
    *VAR_6++ = *VAR_8++;
   else if (VAR_9 == 0)
   {

    *VAR_6++ = *VAR_8++;
    VAR_7++;
   }
   else
    *VAR_6++ = *VAR_7++;
  }

  while (VAR_7 - VAR_0 < VAR_1)
   *VAR_6++ = *VAR_7++;

  while (VAR_8 - VAR_2 < VAR_3)
   *VAR_6++ = *VAR_8++;

  *VAR_4 = VAR_6 - VAR_5;
 }

 return VAR_5;
}
