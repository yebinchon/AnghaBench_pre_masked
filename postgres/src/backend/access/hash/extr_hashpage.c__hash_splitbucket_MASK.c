
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int new_bucket_flag; int old_bucket_flag; } ;
typedef TYPE_1__ xl_hash_split_complete ;
typedef int uint32 ;
typedef int uint16 ;
typedef int XLogRecPtr ;
struct TYPE_12__ {int hasho_flag; int hasho_nextblkno; } ;
struct TYPE_11__ {int t_info; int t_tid; } ;
typedef scalar_t__ Size ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef TYPE_2__* IndexTuple ;
typedef TYPE_3__* HashPageOpaque ;
typedef int HTAB ;
typedef scalar_t__ Buffer ;
typedef scalar_t__ Bucket ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (scalar_t__,int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int VAR_10 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int ,int) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,scalar_t__) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 () ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_22 () ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int,scalar_t__,int ) ;
 int FUNC_25 (char*,int ) ;
 scalar_t__ FUNC_26 (int ,scalar_t__,scalar_t__,int) ;
 int FUNC_27 (TYPE_2__*) ;
 scalar_t__ FUNC_28 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_29 (int ,int ,int ,int ) ;
 int FUNC_30 (int ,scalar_t__,TYPE_2__**,scalar_t__*,int) ;
 int FUNC_31 (int ,scalar_t__) ;
 int FUNC_32 (int *,int *,int ,int*) ;
 int FUNC_33 (int ,scalar_t__,scalar_t__,int ,int *,int ,int ,int ,int *,int *,int,int *,int *) ;
 int FUNC_34 (int ,scalar_t__) ;
 int FUNC_35 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_36(Relation VAR_15,
      Buffer VAR_16,
      Bucket VAR_17,
      Bucket VAR_18,
      Buffer VAR_19,
      Buffer VAR_20,
      HTAB *VAR_21,
      uint32 VAR_22,
      uint32 VAR_23,
      uint32 VAR_24)
{
 Buffer VAR_25;
 Buffer VAR_26;
 Page VAR_27;
 Page VAR_28;
 HashPageOpaque VAR_29;
 HashPageOpaque VAR_30;
 OffsetNumber VAR_31[VAR_10];
 IndexTuple VAR_32[VAR_10];
 Size VAR_33 = 0;
 int VAR_34;
 uint16 VAR_35 = 0;

 VAR_25 = VAR_19;
 VAR_27 = FUNC_3(VAR_19);
 VAR_29 = (HashPageOpaque) FUNC_17(VAR_27);

 VAR_26 = VAR_20;
 VAR_28 = FUNC_3(VAR_20);
 VAR_30 = (HashPageOpaque) FUNC_17(VAR_28);


 FUNC_19(VAR_15,
         FUNC_2(VAR_25),
         FUNC_2(VAR_26));







 for (;;)
 {
  BlockNumber VAR_36;
  OffsetNumber VAR_37;
  OffsetNumber VAR_38;


  VAR_38 = FUNC_16(VAR_27);
  for (VAR_37 = VAR_2;
    VAR_37 <= VAR_38;
    VAR_37 = FUNC_12(VAR_37))
  {
   IndexTuple VAR_39;
   Size VAR_40;
   Bucket VAR_41;
   bool VAR_42 = 0;


   if (FUNC_8(FUNC_15(VAR_27, VAR_37)))
    continue;
   VAR_39 = (IndexTuple) FUNC_14(VAR_27,
           FUNC_15(VAR_27, VAR_37));

   if (VAR_21)
    (void) FUNC_32(VAR_21, &VAR_39->t_tid, VAR_3, &VAR_42);

   if (VAR_42)
    continue;

   VAR_41 = FUNC_29(FUNC_27(VAR_39),
            VAR_22, VAR_23, VAR_24);

   if (VAR_41 == VAR_18)
   {
    IndexTuple VAR_43;




    VAR_43 = FUNC_4(VAR_39);





    VAR_43->t_info |= VAR_5;






    VAR_40 = FUNC_6(VAR_43);
    VAR_40 = FUNC_10(VAR_40);

    if (FUNC_13(VAR_28, VAR_35 + 1) < (VAR_33 + VAR_40))
    {




     FUNC_21();

     FUNC_30(VAR_15, VAR_20, VAR_32, VAR_31, VAR_35);
     FUNC_11(VAR_20);

     FUNC_34(VAR_15, VAR_20);

     FUNC_5();


     FUNC_9(VAR_20, VAR_1);


     for (VAR_34 = 0; VAR_34 < VAR_35; VAR_34++)
      FUNC_35(VAR_32[VAR_34]);
     VAR_35 = 0;
     VAR_33 = 0;


     VAR_20 = FUNC_26(VAR_15, VAR_16, VAR_20, (VAR_20 == VAR_26) ? 1 : 0);
     VAR_28 = FUNC_3(VAR_20);
     VAR_30 = (HashPageOpaque) FUNC_17(VAR_28);
    }

    VAR_32[VAR_35++] = VAR_43;
    VAR_33 += VAR_40;
   }
   else
   {



    FUNC_0(VAR_41 == VAR_17);
   }
  }

  VAR_36 = VAR_29->hasho_nextblkno;


  if (VAR_19 == VAR_25)
   FUNC_9(VAR_19, VAR_1);
  else
   FUNC_31(VAR_15, VAR_19);


  if (!FUNC_1(VAR_36))
  {




   FUNC_21();

   FUNC_30(VAR_15, VAR_20, VAR_32, VAR_31, VAR_35);
   FUNC_11(VAR_20);

   FUNC_34(VAR_15, VAR_20);

   FUNC_5();

   if (VAR_20 == VAR_26)
    FUNC_9(VAR_20, VAR_1);
   else
    FUNC_31(VAR_15, VAR_20);


   for (VAR_34 = 0; VAR_34 < VAR_35; VAR_34++)
    FUNC_35(VAR_32[VAR_34]);
   break;
  }


  VAR_19 = FUNC_28(VAR_15, VAR_36, VAR_4, VAR_9);
  VAR_27 = FUNC_3(VAR_19);
  VAR_29 = (HashPageOpaque) FUNC_17(VAR_27);
 }
 FUNC_9(VAR_25, VAR_0);
 VAR_27 = FUNC_3(VAR_25);
 VAR_29 = (HashPageOpaque) FUNC_17(VAR_27);

 FUNC_9(VAR_26, VAR_0);
 VAR_28 = FUNC_3(VAR_26);
 VAR_30 = (HashPageOpaque) FUNC_17(VAR_28);

 FUNC_21();

 VAR_29->hasho_flag &= ~VAR_7;
 VAR_30->hasho_flag &= ~VAR_6;







 VAR_29->hasho_flag |= VAR_8;





 FUNC_11(VAR_25);
 FUNC_11(VAR_26);

 if (FUNC_20(VAR_15))
 {
  XLogRecPtr VAR_44;
  xl_hash_split_complete VAR_45;

  VAR_45.old_bucket_flag = VAR_29->hasho_flag;
  VAR_45.new_bucket_flag = VAR_30->hasho_flag;

  FUNC_22();

  FUNC_25((char *) &VAR_45, VAR_13);

  FUNC_24(0, VAR_25, VAR_11);
  FUNC_24(1, VAR_26, VAR_11);

  VAR_44 = FUNC_23(VAR_12, VAR_14);

  FUNC_18(FUNC_3(VAR_25), VAR_44);
  FUNC_18(FUNC_3(VAR_26), VAR_44);
 }

 FUNC_5();
 if (FUNC_7(VAR_25))
 {
  FUNC_9(VAR_26, VAR_1);
  FUNC_33(VAR_15, VAR_17, VAR_25,
        FUNC_2(VAR_25), ((void*)0),
        VAR_22, VAR_23, VAR_24, ((void*)0), ((void*)0), 1,
        ((void*)0), ((void*)0));
 }
 else
 {
  FUNC_9(VAR_26, VAR_1);
  FUNC_9(VAR_25, VAR_1);
 }
}
