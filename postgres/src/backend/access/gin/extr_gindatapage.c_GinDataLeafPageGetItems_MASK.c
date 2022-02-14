
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int first; } ;
typedef scalar_t__ Size ;
typedef scalar_t__ Pointer ;
typedef int Page ;
typedef int ItemPointerData ;
typedef int * ItemPointer ;
typedef TYPE_1__ GinPostingList ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int ,int*) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int * FUNC_7 (TYPE_1__*,scalar_t__,int*) ;
 int FUNC_8 (int *,int *,int) ;
 int * FUNC_9 (int) ;

ItemPointer
FUNC_10(Page VAR_0, int *VAR_1, ItemPointerData VAR_2)
{
 ItemPointer VAR_3;

 if (FUNC_3(VAR_0))
 {
  GinPostingList *VAR_4 = FUNC_0(VAR_0);
  Size VAR_5 = FUNC_1(VAR_0);
  Pointer VAR_6 = ((Pointer) VAR_4) + VAR_5;
  GinPostingList *VAR_7;


  if (FUNC_4(&VAR_2))
  {
   VAR_7 = FUNC_2(VAR_4);
   while ((Pointer) VAR_7 < VAR_6 &&
       FUNC_6(&VAR_7->first, &VAR_2) <= 0)
   {
    VAR_4 = VAR_7;
    VAR_7 = FUNC_2(VAR_4);
   }
   VAR_5 = VAR_6 - (Pointer) VAR_4;
  }

  if (VAR_5 > 0)
   VAR_3 = FUNC_7(VAR_4, VAR_5, VAR_1);
  else
  {
   VAR_3 = ((void*)0);
   *VAR_1 = 0;
  }
 }
 else
 {
  ItemPointer VAR_8 = FUNC_5(VAR_0, VAR_1);

  VAR_3 = FUNC_9((*VAR_1) * sizeof(ItemPointerData));
  FUNC_8(VAR_3, VAR_8, (*VAR_1) * sizeof(ItemPointerData));
 }

 return VAR_3;
}
