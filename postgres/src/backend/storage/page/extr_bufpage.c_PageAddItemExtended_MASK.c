
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pd_lower; int pd_upper; scalar_t__ pd_special; } ;
typedef scalar_t__ Size ;
typedef TYPE_1__* PageHeader ;
typedef scalar_t__ Page ;
typedef scalar_t__ OffsetNumber ;
typedef void* LocationIndex ;
typedef int ItemIdData ;
typedef scalar_t__ ItemId ;
typedef int Item ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_10 (int ,scalar_t__) ;
 int VAR_8 ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,int,scalar_t__,scalar_t__) ;
 int FUNC_15 (char*,int ,scalar_t__) ;
 int FUNC_16 (scalar_t__,scalar_t__,scalar_t__) ;

OffsetNumber
FUNC_17(Page VAR_9,
     Item VAR_10,
     Size VAR_11,
     OffsetNumber VAR_12,
     int VAR_13)
{
 PageHeader VAR_14 = (PageHeader) VAR_9;
 Size VAR_15;
 int VAR_16;
 int VAR_17;
 ItemId VAR_18;
 OffsetNumber VAR_19;
 bool VAR_20 = 0;




 if (VAR_14->pd_lower < VAR_7 ||
  VAR_14->pd_lower > VAR_14->pd_upper ||
  VAR_14->pd_upper > VAR_14->pd_special ||
  VAR_14->pd_special > VAR_0)
  FUNC_12(VAR_6,
    (FUNC_13(VAR_1),
     FUNC_14("corrupted page pointers: lower = %u, upper = %u, special = %u",
      VAR_14->pd_lower, VAR_14->pd_upper, VAR_14->pd_special)));




 VAR_19 = FUNC_5(FUNC_8(VAR_9));


 if (FUNC_4(VAR_12))
 {

  if ((VAR_13 & VAR_5) != 0)
  {
   if (VAR_12 < VAR_19)
   {
    VAR_18 = FUNC_7(VAR_14, VAR_12);
    if (FUNC_1(VAR_18) || FUNC_0(VAR_18))
    {
     FUNC_11(VAR_8, "will not overwrite a used ItemId");
     return VAR_2;
    }
   }
  }
  else
  {
   if (VAR_12 < VAR_19)
    VAR_20 = 1;
  }
 }
 else
 {


  if (FUNC_9(VAR_14))
  {





   for (VAR_12 = 1; VAR_12 < VAR_19; VAR_12++)
   {
    VAR_18 = FUNC_7(VAR_14, VAR_12);
    if (!FUNC_1(VAR_18) && !FUNC_0(VAR_18))
     break;
   }
   if (VAR_12 >= VAR_19)
   {

    FUNC_6(VAR_14);
   }
  }
  else
  {

   VAR_12 = VAR_19;
  }
 }


 if (VAR_12 > VAR_19)
 {
  FUNC_11(VAR_8, "specified item offset is too large");
  return VAR_2;
 }


 if ((VAR_13 & VAR_4) != 0 && VAR_12 > VAR_3)
 {
  FUNC_11(VAR_8, "can't put more than MaxHeapTuplesPerPage items in a heap page");
  return VAR_2;
 }







 if (VAR_12 == VAR_19 || VAR_20)
  VAR_16 = VAR_14->pd_lower + sizeof(ItemIdData);
 else
  VAR_16 = VAR_14->pd_lower;

 VAR_15 = FUNC_3(VAR_11);

 VAR_17 = (int) VAR_14->pd_upper - (int) VAR_15;

 if (VAR_16 > VAR_17)
  return VAR_2;




 VAR_18 = FUNC_7(VAR_14, VAR_12);

 if (VAR_20)
  FUNC_16(VAR_18 + 1, VAR_18,
    (VAR_19 - VAR_12) * sizeof(ItemIdData));


 FUNC_2(VAR_18, VAR_17, VAR_11);
 FUNC_10(VAR_10, VAR_11);


 FUNC_15((char *) VAR_9 + VAR_17, VAR_10, VAR_11);


 VAR_14->pd_lower = (LocationIndex) VAR_16;
 VAR_14->pd_upper = (LocationIndex) VAR_17;

 return VAR_12;
}
