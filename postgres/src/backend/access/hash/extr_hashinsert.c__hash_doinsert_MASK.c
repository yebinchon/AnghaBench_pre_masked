
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int offnum; } ;
typedef TYPE_1__ xl_hash_insert ;
typedef int uint32 ;
typedef int XLogRecPtr ;
struct TYPE_10__ {int hashm_maxbucket; int hashm_ntuples; scalar_t__ hashm_ffactor; int hashm_lowmask; int hashm_highmask; } ;
struct TYPE_9__ {scalar_t__ hasho_bucket; int hasho_flag; int hasho_nextblkno; } ;
typedef scalar_t__ Size ;
typedef int Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef scalar_t__ IndexTuple ;
typedef TYPE_2__* HashPageOpaque ;
typedef TYPE_3__* HashMetaPage ;
typedef scalar_t__ Buffer ;
typedef scalar_t__ Bucket ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *,scalar_t__) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (scalar_t__,int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 () ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_19 () ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,char*,scalar_t__) ;
 int FUNC_22 (int,scalar_t__,int ) ;
 int FUNC_23 (char*,int ) ;
 scalar_t__ FUNC_24 (int ,scalar_t__,scalar_t__,int) ;
 int FUNC_25 (int ,scalar_t__) ;
 int FUNC_26 (int ,scalar_t__) ;
 int FUNC_27 (int ,scalar_t__,scalar_t__,scalar_t__,int,int ,int ) ;
 int FUNC_28 (scalar_t__) ;
 scalar_t__ FUNC_29 (int ,int ,int ,TYPE_3__**) ;
 scalar_t__ FUNC_30 (int ,int ,int ,int) ;
 int FUNC_31 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_32 (int ,scalar_t__) ;
 int FUNC_33 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_34 (int ,int ) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (char*) ;
 int FUNC_37 (char*,scalar_t__,scalar_t__) ;

void
FUNC_38(Relation VAR_15, IndexTuple VAR_16, Relation VAR_17)
{
 Buffer VAR_18 = VAR_7;
 Buffer VAR_19;
 Buffer VAR_20;
 HashMetaPage VAR_21;
 HashMetaPage VAR_22 = ((void*)0);
 Page VAR_23;
 Page VAR_24;
 HashPageOpaque VAR_25;
 Size VAR_26;
 bool VAR_27;
 uint32 VAR_28;
 Bucket VAR_29;
 OffsetNumber VAR_30;




 VAR_28 = FUNC_28(VAR_16);


 VAR_26 = FUNC_9(VAR_16);
 VAR_26 = FUNC_12(VAR_26);


restart_insert:






 VAR_20 = FUNC_30(VAR_15, VAR_4, VAR_5, VAR_8);
 VAR_23 = FUNC_2(VAR_20);
 if (VAR_26 > FUNC_7(VAR_23))
  FUNC_34(VAR_3,
    (FUNC_35(VAR_2),
     FUNC_37("index row size %zu exceeds hash maximum %zu",
      VAR_26, FUNC_7(VAR_23)),
     FUNC_36("Values larger than a buffer page cannot be indexed.")));


 VAR_18 = FUNC_29(VAR_15, VAR_28, VAR_6,
            &VAR_22);
 FUNC_0(VAR_22 != ((void*)0));

 FUNC_3(VAR_15, ((void*)0), VAR_18);


 VAR_19 = VAR_18;

 VAR_24 = FUNC_2(VAR_18);
 VAR_25 = (HashPageOpaque) FUNC_15(VAR_24);
 VAR_29 = VAR_25->hasho_bucket;
 if (FUNC_5(VAR_25) && FUNC_10(VAR_18))
 {

  FUNC_11(VAR_18, VAR_1);

  FUNC_27(VAR_15, VAR_20, VAR_18, VAR_29,
         VAR_22->hashm_maxbucket,
         VAR_22->hashm_highmask,
         VAR_22->hashm_lowmask);


  FUNC_25(VAR_15, VAR_18);
  FUNC_25(VAR_15, VAR_20);
  goto restart_insert;
 }


 while (FUNC_14(VAR_24) < VAR_26)
 {
  BlockNumber VAR_31;






  if (FUNC_6(VAR_25))
  {

   if (FUNC_10(VAR_18))
   {
    FUNC_33(VAR_15, VAR_17, VAR_20, VAR_18);

    if (FUNC_14(VAR_24) >= VAR_26)
     break;
   }
  }




  VAR_31 = VAR_25->hasho_nextblkno;

  if (FUNC_1(VAR_31))
  {







   if (VAR_18 != VAR_19)
    FUNC_32(VAR_15, VAR_18);
   else
    FUNC_11(VAR_18, VAR_1);
   VAR_18 = FUNC_30(VAR_15, VAR_31, VAR_6, VAR_9);
   VAR_24 = FUNC_2(VAR_18);
  }
  else
  {






   FUNC_11(VAR_18, VAR_1);


   VAR_18 = FUNC_24(VAR_15, VAR_20, VAR_18, (VAR_18 == VAR_19) ? 1 : 0);
   VAR_24 = FUNC_2(VAR_18);


   FUNC_0(FUNC_14(VAR_24) >= VAR_26);
  }
  VAR_25 = (HashPageOpaque) FUNC_15(VAR_24);
  FUNC_0((VAR_25->hasho_flag & VAR_10) == VAR_9);
  FUNC_0(VAR_25->hasho_bucket == VAR_29);
 }





 FUNC_11(VAR_20, VAR_0);


 FUNC_18();


 VAR_30 = FUNC_31(VAR_15, VAR_18, VAR_26, VAR_16);
 FUNC_13(VAR_18);


 VAR_21 = FUNC_8(VAR_23);
 VAR_21->hashm_ntuples += 1;


 VAR_27 = VAR_21->hashm_ntuples >
  (double) VAR_21->hashm_ffactor * (VAR_21->hashm_maxbucket + 1);

 FUNC_13(VAR_20);


 if (FUNC_17(VAR_15))
 {
  xl_hash_insert VAR_32;
  XLogRecPtr VAR_33;

  VAR_32.offnum = VAR_30;

  FUNC_19();
  FUNC_23((char *) &VAR_32, VAR_13);

  FUNC_22(1, VAR_20, VAR_11);

  FUNC_22(0, VAR_18, VAR_11);
  FUNC_21(0, (char *) VAR_16, FUNC_9(VAR_16));

  VAR_33 = FUNC_20(VAR_12, VAR_14);

  FUNC_16(FUNC_2(VAR_18), VAR_33);
  FUNC_16(FUNC_2(VAR_20), VAR_33);
 }

 FUNC_4();


 FUNC_11(VAR_20, VAR_1);





 FUNC_32(VAR_15, VAR_18);
 if (VAR_18 != VAR_19)
  FUNC_25(VAR_15, VAR_19);


 if (VAR_27)
  FUNC_26(VAR_15, VAR_20);


 FUNC_25(VAR_15, VAR_20);
}
