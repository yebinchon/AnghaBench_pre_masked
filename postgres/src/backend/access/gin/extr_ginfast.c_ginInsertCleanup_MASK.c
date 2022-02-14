
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


typedef int uint32 ;
struct TYPE_19__ {long allocatedMemory; TYPE_2__* ginstate; } ;
struct TYPE_18__ {scalar_t__ head; scalar_t__ tail; } ;
struct TYPE_17__ {int index; } ;
struct TYPE_16__ {int maxvalues; } ;
struct TYPE_15__ {scalar_t__ rightlink; } ;
typedef long Size ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int MemoryContext ;
typedef TYPE_1__ KeyArray ;
typedef int ItemPointerData ;
typedef int IndexBulkDeleteResult ;
typedef TYPE_2__ GinState ;
typedef int GinNullCategory ;
typedef TYPE_3__ GinMetaPageData ;
typedef int Datum ;
typedef TYPE_4__ BuildAccumulator ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_4 (int ) ;
 TYPE_13__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,scalar_t__,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,scalar_t__) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,scalar_t__,int ) ;
 int FUNC_19 (int ) ;
 int VAR_9 ;
 int FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (TYPE_2__*,scalar_t__,int ,int ,int *,int ,int *) ;
 int * FUNC_22 (TYPE_4__*,scalar_t__*,int *,int *,int *) ;
 int FUNC_23 (TYPE_4__*) ;
 int FUNC_24 (TYPE_1__*,int) ;
 int VAR_10 ;
 int FUNC_25 (TYPE_4__*,TYPE_1__*,int ,scalar_t__) ;
 int FUNC_26 (int ,int ,scalar_t__,int,int *) ;
 int FUNC_27 () ;
 long VAR_11 ;

void
FUNC_28(GinState *VAR_12, bool VAR_13,
     bool VAR_14, bool VAR_15,
     IndexBulkDeleteResult *VAR_16)
{
 Relation VAR_17 = VAR_12->index;
 Buffer VAR_18,
    VAR_19;
 Page VAR_20,
    VAR_21;
 GinMetaPageData *VAR_22;
 MemoryContext VAR_23,
    VAR_24;
 BuildAccumulator VAR_25;
 KeyArray VAR_26;
 BlockNumber VAR_27,
    VAR_28;
 bool VAR_29 = 0;
 bool VAR_30 = 0;
 Size VAR_31;
 if (VAR_15)
 {




  FUNC_11(VAR_17, VAR_5, VAR_2);
  VAR_31 =
   (FUNC_9() && VAR_9 != -1) ?
   VAR_9 : VAR_10;
 }
 else
 {





  if (!FUNC_3(VAR_17, VAR_5, VAR_2))
   return;
  VAR_31 = VAR_11;
 }

 VAR_18 = FUNC_16(VAR_17, VAR_5);
 FUNC_10(VAR_18, VAR_6);
 VAR_20 = FUNC_2(VAR_18);
 VAR_22 = FUNC_4(VAR_20);

 if (VAR_22->head == VAR_8)
 {

  FUNC_19(VAR_18);
  FUNC_18(VAR_17, VAR_5, VAR_2);
  return;
 }





 VAR_28 = VAR_22->tail;




 VAR_27 = VAR_22->head;
 VAR_19 = FUNC_16(VAR_17, VAR_27);
 FUNC_10(VAR_19, VAR_6);
 VAR_21 = FUNC_2(VAR_19);

 FUNC_10(VAR_18, VAR_7);




 VAR_23 = FUNC_0(VAR_1,
          "GIN insert cleanup temporary context",
          VAR_0);

 VAR_24 = FUNC_14(VAR_23);

 FUNC_24(&VAR_26, 128);
 FUNC_23(&VAR_25);
 VAR_25.ginstate = VAR_12;






 for (;;)
 {
  FUNC_1(!FUNC_7(VAR_21));







  if (VAR_27 == VAR_28 && VAR_13 == 0)
   VAR_29 = 1;




  FUNC_25(&VAR_25, &VAR_26, VAR_21, VAR_3);

  FUNC_27();






  if (FUNC_5(VAR_21)->rightlink == VAR_8 ||
   (FUNC_6(VAR_21) &&
    (VAR_25.allocatedMemory >= VAR_31 * 1024L)))
  {
   ItemPointerData *VAR_32;
   uint32 VAR_33;
   Datum VAR_34;
   GinNullCategory VAR_35;
   OffsetNumber VAR_36,
      VAR_37;






   VAR_36 = FUNC_15(VAR_21);
   FUNC_10(VAR_19, VAR_7);






   FUNC_20(&VAR_25);
   while ((VAR_32 = FUNC_22(&VAR_25,
           &VAR_37, &VAR_34, &VAR_35, &VAR_33)) != ((void*)0))
   {
    FUNC_21(VAR_12, VAR_37, VAR_34, VAR_35,
          VAR_32, VAR_33, ((void*)0));
    FUNC_27();
   }




   FUNC_10(VAR_18, VAR_4);
   FUNC_10(VAR_19, VAR_6);

   FUNC_1(!FUNC_7(VAR_21));
   if (FUNC_15(VAR_21) != VAR_36)
   {
    FUNC_23(&VAR_25);
    FUNC_25(&VAR_25, &VAR_26, VAR_21, VAR_36 + 1);

    FUNC_20(&VAR_25);
    while ((VAR_32 = FUNC_22(&VAR_25,
            &VAR_37, &VAR_34, &VAR_35, &VAR_33)) != ((void*)0))
     FUNC_21(VAR_12, VAR_37, VAR_34, VAR_35,
           VAR_32, VAR_33, ((void*)0));
   }




   VAR_27 = FUNC_5(VAR_21)->rightlink;
   FUNC_19(VAR_19);






   FUNC_26(VAR_17, VAR_18, VAR_27, VAR_14, VAR_16);


   VAR_30 = 1;

   FUNC_1(VAR_27 == VAR_22->head);
   FUNC_10(VAR_18, VAR_7);





   if (VAR_27 == VAR_8 || VAR_29)
    break;




   FUNC_13(VAR_23);
   FUNC_24(&VAR_26, VAR_26.maxvalues);
   FUNC_23(&VAR_25);
  }
  else
  {
   VAR_27 = FUNC_5(VAR_21)->rightlink;
   FUNC_19(VAR_19);
  }




  FUNC_27();
  VAR_19 = FUNC_16(VAR_17, VAR_27);
  FUNC_10(VAR_19, VAR_6);
  VAR_21 = FUNC_2(VAR_19);
 }

 FUNC_18(VAR_17, VAR_5, VAR_2);
 FUNC_17(VAR_18);






 if (VAR_30 && VAR_14)
  FUNC_8(VAR_17);


 FUNC_14(VAR_24);
 FUNC_12(VAR_23);
}
