
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int offsetindex; unsigned int itemoff; unsigned int alignedlen; } ;
typedef TYPE_1__ itemIdSortData ;
typedef TYPE_1__* itemIdSort ;
struct TYPE_6__ {scalar_t__ pd_lower; scalar_t__ pd_upper; scalar_t__ pd_special; int pd_linp; } ;
typedef unsigned int Size ;
typedef TYPE_3__* PageHeader ;
typedef int Page ;
typedef int OffsetNumber ;
typedef scalar_t__ Offset ;
typedef int ItemIdData ;
typedef int * ItemId ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (unsigned int) ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int * FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (TYPE_1__*,int,int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,unsigned int,scalar_t__,...) ;
 int FUNC_14 (int ,int *,int) ;

void
FUNC_15(Page VAR_6, OffsetNumber *VAR_7, int VAR_8)
{
 PageHeader VAR_9 = (PageHeader) VAR_6;
 Offset VAR_10 = VAR_9->pd_lower;
 Offset VAR_11 = VAR_9->pd_upper;
 Offset VAR_12 = VAR_9->pd_special;
 itemIdSortData VAR_13[VAR_4];
 ItemIdData VAR_14[VAR_4];
 itemIdSort VAR_15;
 ItemId VAR_16;
 int VAR_17,
    VAR_18;
 Size VAR_19;
 Size VAR_20;
 unsigned VAR_21;
 int VAR_22;
 OffsetNumber VAR_23;

 FUNC_0(VAR_8 <= VAR_4);
 if (VAR_8 <= 2)
 {
  while (--VAR_8 >= 0)
   FUNC_8(VAR_6, VAR_7[VAR_8]);
  return;
 }




 if (VAR_10 < VAR_5 ||
  VAR_10 > VAR_11 ||
  VAR_11 > VAR_12 ||
  VAR_12 > VAR_0 ||
  VAR_12 != FUNC_4(VAR_12))
  FUNC_11(VAR_2,
    (FUNC_12(VAR_1),
     FUNC_13("corrupted page pointers: lower = %u, upper = %u, special = %u",
      VAR_10, VAR_11, VAR_12)));






 VAR_17 = FUNC_7(VAR_6);
 VAR_15 = VAR_13;
 VAR_19 = 0;
 VAR_18 = 0;
 VAR_22 = 0;
 for (VAR_23 = VAR_3; VAR_23 <= VAR_17; VAR_23 = FUNC_5(VAR_23))
 {
  VAR_16 = FUNC_6(VAR_6, VAR_23);
  FUNC_0(FUNC_3(VAR_16));
  VAR_20 = FUNC_1(VAR_16);
  VAR_21 = FUNC_2(VAR_16);
  if (VAR_21 < VAR_11 ||
   (VAR_21 + VAR_20) > VAR_12 ||
   VAR_21 != FUNC_4(VAR_21))
   FUNC_11(VAR_2,
     (FUNC_12(VAR_1),
      FUNC_13("corrupted line pointer: offset = %u, size = %u",
       VAR_21, (unsigned int) VAR_20)));

  if (VAR_22 < VAR_8 && VAR_23 == VAR_7[VAR_22])
  {

   VAR_22++;
  }
  else
  {
   VAR_15->offsetindex = VAR_18;
   VAR_15->itemoff = VAR_21;
   VAR_15->alignedlen = FUNC_4(VAR_20);
   VAR_19 += VAR_15->alignedlen;
   VAR_14[VAR_18] = *VAR_16;
   VAR_15++;
   VAR_18++;
  }
 }


 if (VAR_22 != VAR_8)
  FUNC_10(VAR_2, "incorrect index offsets supplied");

 if (VAR_19 > (Size) (VAR_12 - VAR_10))
  FUNC_11(VAR_2,
    (FUNC_12(VAR_1),
     FUNC_13("corrupted item lengths: total %u, available space %u",
      (unsigned int) VAR_19, VAR_12 - VAR_10)));





 FUNC_14(VAR_9->pd_linp, VAR_14, VAR_18 * sizeof(ItemIdData));
 VAR_9->pd_lower = VAR_5 + VAR_18 * sizeof(ItemIdData);


 FUNC_9(VAR_13, VAR_18, VAR_6);
}
