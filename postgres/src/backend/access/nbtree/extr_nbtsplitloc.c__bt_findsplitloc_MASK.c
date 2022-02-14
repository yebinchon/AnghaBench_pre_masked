
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int newitemsz; int is_leaf; int is_rightmost; int leftspace; int rightspace; int olddataitemstotal; int maxsplits; int nsplits; int interval; TYPE_1__* splits; int rel; scalar_t__ newitemoff; int minfirstrightsz; int newitem; int page; } ;
struct TYPE_12__ {scalar_t__ firstoldonright; scalar_t__ newitemonleft; } ;
typedef TYPE_1__ SplitPoint ;
typedef int Size ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemIdData ;
typedef int ItemId ;
typedef int IndexTuple ;
typedef scalar_t__ FindSplitStrat ;
typedef TYPE_2__ FindSplitData ;
typedef int BTPageOpaqueData ;
typedef scalar_t__ BTPageOpaque ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int,double) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_17 (TYPE_2__*,scalar_t__,int,int*) ;
 scalar_t__ FUNC_18 (TYPE_2__*,int,int*,scalar_t__) ;
 int FUNC_19 (TYPE_2__*,double,int) ;
 int FUNC_20 (TYPE_2__*,scalar_t__,int,int,int) ;
 int FUNC_21 (TYPE_2__*,TYPE_1__*,TYPE_1__*,scalar_t__*) ;
 int FUNC_22 (int ,char*,int ) ;
 TYPE_1__* FUNC_23 (int) ;
 int FUNC_24 (TYPE_1__*) ;

OffsetNumber
FUNC_25(Relation VAR_12,
     Page VAR_13,
     OffsetNumber VAR_14,
     Size VAR_15,
     IndexTuple VAR_16,
     bool *VAR_17)
{
 BTPageOpaque VAR_18;
 int VAR_19,
    VAR_20,
    VAR_21,
    VAR_22,
    VAR_23,
    VAR_24;
 FindSplitData VAR_25;
 FindSplitStrat VAR_26;
 ItemId VAR_27;
 OffsetNumber VAR_28,
    VAR_29,
    VAR_30;
 double VAR_31;
 bool VAR_32;
 SplitPoint VAR_33,
    VAR_34;

 VAR_18 = (BTPageOpaque) FUNC_14(VAR_13);
 VAR_29 = FUNC_12(VAR_13);


 VAR_19 = VAR_20 =
  FUNC_13(VAR_13) - VAR_11 -
  FUNC_3(sizeof(BTPageOpaqueData));


 if (!FUNC_9(VAR_18))
 {
  VAR_27 = FUNC_11(VAR_13, VAR_6);
  VAR_20 -= (int) (FUNC_3(FUNC_2(VAR_27)) +
        sizeof(ItemIdData));
 }


 VAR_21 = VAR_20 - (int) FUNC_10(VAR_13);
 VAR_24 = FUNC_15(VAR_12, VAR_0);


 VAR_15 += sizeof(ItemIdData);
 VAR_25.rel = VAR_12;
 VAR_25.page = VAR_13;
 VAR_25.newitem = VAR_16;
 VAR_25.newitemsz = VAR_15;
 VAR_25.is_leaf = FUNC_8(VAR_18);
 VAR_25.is_rightmost = FUNC_9(VAR_18);
 VAR_25.leftspace = VAR_19;
 VAR_25.rightspace = VAR_20;
 VAR_25.olddataitemstotal = VAR_21;
 VAR_25.minfirstrightsz = VAR_7;
 VAR_25.newitemoff = VAR_14;
 VAR_25.maxsplits = VAR_29;
 VAR_25.splits = FUNC_23(sizeof(SplitPoint) * VAR_25.maxsplits);
 VAR_25.nsplits = 0;





 VAR_22 = 0;

 for (VAR_28 = FUNC_7(VAR_18);
   VAR_28 <= VAR_29;
   VAR_28 = FUNC_6(VAR_28))
 {
  Size VAR_35;

  VAR_27 = FUNC_11(VAR_13, VAR_28);
  VAR_35 = FUNC_3(FUNC_2(VAR_27)) + sizeof(ItemIdData);
  if (VAR_28 < VAR_14)
   FUNC_20(&VAR_25, VAR_28, 0, VAR_22, VAR_35);
  else if (VAR_28 > VAR_14)
   FUNC_20(&VAR_25, VAR_28, 1, VAR_22, VAR_35);
  else
  {




   FUNC_20(&VAR_25, VAR_28, 0, VAR_22, VAR_35);





   FUNC_20(&VAR_25, VAR_28, 1, VAR_22, VAR_35);
  }

  VAR_22 += VAR_35;
 }






 FUNC_0(VAR_22 == VAR_21);
 if (VAR_14 > VAR_29)
  FUNC_20(&VAR_25, VAR_14, 0, VAR_21, 0);





 if (VAR_25.nsplits == 0)
  FUNC_22(VAR_3, "could not find a feasible split point for index \"%s\"",
    FUNC_16(VAR_12));
 if (!VAR_25.is_leaf)
 {

  VAR_32 = VAR_25.is_rightmost;
  VAR_31 = VAR_1 / 100.0;
 }
 else if (VAR_25.is_rightmost)
 {

  VAR_32 = 1;
  VAR_31 = VAR_24 / 100.0;
 }
 else if (FUNC_17(&VAR_25, VAR_29, VAR_24, &VAR_32))
 {







  if (VAR_32)
  {

   VAR_31 = VAR_24 / 100.0;
  }
  else
  {

   for (int VAR_36 = 0; VAR_36 < VAR_25.nsplits; VAR_36++)
   {
    SplitPoint *VAR_37 = VAR_25.splits + VAR_36;

    if (VAR_37->newitemonleft &&
     VAR_14 == VAR_37->firstoldonright)
    {
     FUNC_24(VAR_25.splits);
     *VAR_17 = 1;
     return VAR_14;
    }
   }






   VAR_31 = 0.50;
  }
 }
 else
 {

  VAR_32 = 0;

  VAR_31 = 0.50;
 }
 VAR_25.interval = FUNC_5(FUNC_4(1, VAR_25.nsplits * 0.05),
       VAR_25.is_leaf ? VAR_5 :
       VAR_4);





 VAR_33 = VAR_25.splits[0];
 VAR_34 = VAR_25.splits[VAR_25.nsplits - 1];


 FUNC_19(&VAR_25, VAR_31, VAR_32);
 VAR_23 = FUNC_21(&VAR_25, &VAR_33, &VAR_34, &VAR_26);

 if (VAR_26 == VAR_8)
 {




 }
 else if (VAR_26 == VAR_9)
 {
  FUNC_0(VAR_25.is_leaf);

  FUNC_0(VAR_23 ==
      FUNC_1(VAR_25.rel));

  VAR_25.interval = VAR_25.nsplits;
 }
 else if (VAR_26 == VAR_10)
 {
  FUNC_0(VAR_25.is_leaf);

  VAR_32 = 1;
  VAR_31 = VAR_2 / 100.0;

  FUNC_19(&VAR_25, VAR_31, VAR_32);

  VAR_25.interval = 1;
 }






 VAR_30 = FUNC_18(&VAR_25, VAR_23, VAR_17,
            VAR_26);
 FUNC_24(VAR_25.splits);

 return VAR_30;
}
