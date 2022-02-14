
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ntups; int is_prim_bucket_same_wrt; } ;
typedef TYPE_1__ xl_hash_move_page_contents ;
typedef int uint16 ;
typedef int XLogRecPtr ;
struct TYPE_4__ {scalar_t__ hasho_nextblkno; scalar_t__ hasho_bucket; scalar_t__ hasho_prevblkno; } ;
typedef scalar_t__ Size ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef scalar_t__ IndexTuple ;
typedef TYPE_2__* HashPageOpaque ;
typedef int BufferAccessStrategy ;
typedef scalar_t__ Buffer ;
typedef scalar_t__ Bucket ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,scalar_t__) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,scalar_t__*,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 () ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_21 () ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int,char*,int) ;
 int FUNC_25 (int,scalar_t__,int) ;
 int FUNC_26 (char*,int ) ;
 int FUNC_27 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,int,int ) ;
 scalar_t__ FUNC_28 (int ,scalar_t__,int ,int ,int ) ;
 int FUNC_29 (int ,scalar_t__,scalar_t__*,scalar_t__*,int) ;
 int FUNC_30 (int ,scalar_t__) ;
 int FUNC_31 (scalar_t__) ;

void
FUNC_32(Relation VAR_12,
     Bucket VAR_13,
     BlockNumber VAR_14,
     Buffer VAR_15,
     BufferAccessStrategy VAR_16)
{
 BlockNumber VAR_17;
 BlockNumber VAR_18;
 Buffer VAR_19;
 Buffer VAR_20;
 Page VAR_21;
 Page VAR_22;
 HashPageOpaque VAR_23;
 HashPageOpaque VAR_24;




 VAR_17 = VAR_14;
 VAR_19 = VAR_15;
 VAR_21 = FUNC_2(VAR_19);
 VAR_23 = (HashPageOpaque) FUNC_15(VAR_21);





 if (!FUNC_1(VAR_23->hasho_nextblkno))
 {
  FUNC_7(VAR_19, VAR_0);
  return;
 }







 VAR_20 = VAR_3;
 VAR_24 = VAR_23;
 do
 {
  VAR_18 = VAR_24->hasho_nextblkno;
  if (VAR_20 != VAR_3)
   FUNC_30(VAR_12, VAR_20);
  VAR_20 = FUNC_28(VAR_12,
            VAR_18,
            VAR_2,
            VAR_4,
            VAR_16);
  VAR_22 = FUNC_2(VAR_20);
  VAR_24 = (HashPageOpaque) FUNC_15(VAR_22);
  FUNC_0(VAR_24->hasho_bucket == VAR_13);
 } while (FUNC_1(VAR_24->hasho_nextblkno));




 for (;;)
 {
  OffsetNumber VAR_25;
  OffsetNumber VAR_26;
  OffsetNumber VAR_27[VAR_6];
  IndexTuple VAR_28[VAR_5];
  Size VAR_29[VAR_5];
  OffsetNumber VAR_30[VAR_5];
  uint16 VAR_31 = 0;
  uint16 VAR_32 = 0;
  Size VAR_33 = 0;
  int VAR_34;
  bool VAR_35 = 0;

readpage:

  VAR_26 = FUNC_14(VAR_22);
  for (VAR_25 = VAR_1;
    VAR_25 <= VAR_26;
    VAR_25 = FUNC_10(VAR_25))
  {
   IndexTuple VAR_36;
   Size VAR_37;


   if (FUNC_6(FUNC_13(VAR_22, VAR_25)))
    continue;

   VAR_36 = (IndexTuple) FUNC_12(VAR_22,
           FUNC_13(VAR_22, VAR_25));
   VAR_37 = FUNC_5(VAR_36);
   VAR_37 = FUNC_8(VAR_37);






   while (FUNC_11(VAR_21, VAR_32 + 1) < (VAR_33 + VAR_37))
   {
    Buffer VAR_38 = VAR_3;
    bool VAR_39 = 0;

    FUNC_0(!FUNC_17(VAR_21));

    if (VAR_17 == VAR_14)
     VAR_35 = 1;

    VAR_17 = VAR_23->hasho_nextblkno;
    FUNC_0(FUNC_1(VAR_17));


    if (VAR_17 != VAR_18)
     VAR_38 = FUNC_28(VAR_12,
                 VAR_17,
                 VAR_2,
                 VAR_4,
                 VAR_16);

    if (VAR_32 > 0)
    {
     FUNC_0(VAR_32 == VAR_31);





     if (FUNC_19(VAR_12))
      FUNC_22(0, 3 + VAR_32);

     FUNC_20();







     FUNC_29(VAR_12, VAR_19, VAR_28, VAR_30, VAR_32);
     FUNC_9(VAR_19);


     FUNC_16(VAR_22, VAR_27, VAR_31);
     FUNC_9(VAR_20);


     if (FUNC_19(VAR_12))
     {
      XLogRecPtr VAR_40;
      xl_hash_move_page_contents VAR_41;

      VAR_41.ntups = VAR_32;
      VAR_41.is_prim_bucket_same_wrt = (VAR_19 == VAR_15) ? 1 : 0;

      FUNC_21();
      FUNC_26((char *) &VAR_41, VAR_10);





      if (!VAR_41.is_prim_bucket_same_wrt)
       FUNC_25(0, VAR_15, VAR_8 | VAR_7);

      FUNC_25(1, VAR_19, VAR_8);
      FUNC_24(1, (char *) VAR_30,
           VAR_32 * sizeof(OffsetNumber));
      for (VAR_34 = 0; VAR_34 < VAR_32; VAR_34++)
       FUNC_24(1, (char *) VAR_28[VAR_34], VAR_29[VAR_34]);

      FUNC_25(2, VAR_20, VAR_8);
      FUNC_24(2, (char *) VAR_27,
           VAR_31 * sizeof(OffsetNumber));

      VAR_40 = FUNC_23(VAR_9, VAR_11);

      FUNC_18(FUNC_2(VAR_19), VAR_40);
      FUNC_18(FUNC_2(VAR_20), VAR_40);
     }

     FUNC_4();

     VAR_39 = 1;
    }





    if (VAR_35)
     FUNC_7(VAR_19, VAR_0);
    else
     FUNC_30(VAR_12, VAR_19);


    if (VAR_18 == VAR_17)
    {
     FUNC_30(VAR_12, VAR_20);
     return;
    }

    VAR_19 = VAR_38;
    VAR_21 = FUNC_2(VAR_19);
    VAR_23 = (HashPageOpaque) FUNC_15(VAR_21);
    FUNC_0(VAR_23->hasho_bucket == VAR_13);
    VAR_35 = 0;


    for (VAR_34 = 0; VAR_34 < VAR_32; VAR_34++)
     FUNC_31(VAR_28[VAR_34]);
    VAR_32 = 0;
    VAR_33 = 0;
    VAR_31 = 0;





    if (VAR_39)
     goto readpage;
   }


   VAR_27[VAR_31++] = VAR_25;






   VAR_28[VAR_32] = FUNC_3(VAR_36);
   VAR_29[VAR_32++] = VAR_37;
   VAR_33 += VAR_37;
  }
  VAR_18 = VAR_24->hasho_prevblkno;
  FUNC_0(FUNC_1(VAR_18));


  FUNC_27(VAR_12, VAR_15, VAR_20, VAR_19, VAR_28, VAR_30,
         VAR_29, VAR_32, VAR_16);


  for (VAR_34 = 0; VAR_34 < VAR_32; VAR_34++)
   FUNC_31(VAR_28[VAR_34]);


  if (VAR_18 == VAR_17)
  {

   if (VAR_17 == VAR_14)
    FUNC_7(VAR_19, VAR_0);
   else
    FUNC_30(VAR_12, VAR_19);
   return;
  }

  VAR_20 = FUNC_28(VAR_12,
            VAR_18,
            VAR_2,
            VAR_4,
            VAR_16);
  VAR_22 = FUNC_2(VAR_20);
  VAR_24 = (HashPageOpaque) FUNC_15(VAR_22);
  FUNC_0(VAR_24->hasho_bucket == VAR_13);
 }


}
