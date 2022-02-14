
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int new_bucket; int old_bucket_flag; int new_bucket_flag; int flags; } ;
typedef TYPE_1__ xl_hash_split_allocate_page ;
typedef int uint32 ;
typedef int XLogRecPtr ;
struct TYPE_10__ {double hashm_ntuples; int hashm_maxbucket; int hashm_lowmask; int hashm_highmask; int hashm_ovflpoint; scalar_t__* hashm_spares; scalar_t__ hashm_ffactor; } ;
struct TYPE_9__ {int hasho_flag; int hasho_prevblkno; int hasho_bucket; int hasho_page_id; int hasho_nextblkno; } ;
typedef int Relation ;
typedef int Page ;
typedef TYPE_2__* HashPageOpaque ;
typedef TYPE_3__* HashMetaPage ;
typedef int Buffer ;
typedef int Bucket ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 TYPE_3__* FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int ,int ) ;
 int VAR_8 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int,char*,int) ;
 int FUNC_17 (int,int ,int ) ;
 int FUNC_18 (char*,int ) ;
 int FUNC_19 (int ,int ,int) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ,int ,int,int,int,int) ;
 int FUNC_23 (int) ;
 int FUNC_24 (int ,int ,int) ;
 int FUNC_25 (int ,int ,int ) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int) ;
 int FUNC_28 (int ,int ,int,int,int ,int ,int *,int,int,int) ;
 int FUNC_29 (int ,int,int ,int ,int *,int,int,int,int *,int *,int,int *,int *) ;

void
FUNC_30(Relation VAR_16, Buffer VAR_17)
{
 HashMetaPage VAR_18;
 Bucket VAR_19;
 Bucket VAR_20;
 uint32 VAR_21;
 BlockNumber VAR_22;
 BlockNumber VAR_23;
 Buffer VAR_24;
 Buffer VAR_25;
 Page VAR_26;
 Page VAR_27;
 HashPageOpaque VAR_28;
 HashPageOpaque VAR_29;
 uint32 VAR_30;
 uint32 VAR_31;
 uint32 VAR_32;
 bool VAR_33 = 0;
 bool VAR_34 = 0;

restart_expand:





 FUNC_8(VAR_17, VAR_0);

 FUNC_20(VAR_16, VAR_17, VAR_7);
 VAR_18 = FUNC_6(FUNC_2(VAR_17));







 if (VAR_18->hashm_ntuples <=
  (double) VAR_18->hashm_ffactor * (VAR_18->hashm_maxbucket + 1))
  goto fail;
 if (VAR_18->hashm_maxbucket >= (uint32) 0x7FFFFFFE)
  goto fail;
 VAR_20 = VAR_18->hashm_maxbucket + 1;

 VAR_19 = (VAR_20 & VAR_18->hashm_lowmask);

 VAR_22 = FUNC_1(VAR_18, VAR_19);

 VAR_25 = FUNC_24(VAR_16, VAR_22, VAR_6);
 if (!VAR_25)
  goto fail;

 VAR_26 = FUNC_2(VAR_25);
 VAR_28 = (HashPageOpaque) FUNC_10(VAR_26);
 if (FUNC_4(VAR_28))
 {





  VAR_30 = VAR_18->hashm_maxbucket;
  VAR_31 = VAR_18->hashm_highmask;
  VAR_32 = VAR_18->hashm_lowmask;





  FUNC_8(VAR_17, VAR_1);
  FUNC_8(VAR_25, VAR_1);

  FUNC_22(VAR_16, VAR_17, VAR_25, VAR_19, VAR_30,
         VAR_31, VAR_32);


  FUNC_21(VAR_16, VAR_25);

  goto restart_expand;
 }
 if (FUNC_5(VAR_28))
 {





  VAR_30 = VAR_18->hashm_maxbucket;
  VAR_31 = VAR_18->hashm_highmask;
  VAR_32 = VAR_18->hashm_lowmask;


  FUNC_8(VAR_17, VAR_1);

  FUNC_29(VAR_16, VAR_19, VAR_25, VAR_22, ((void*)0),
        VAR_30, VAR_31, VAR_32, ((void*)0), ((void*)0), 1,
        ((void*)0), ((void*)0));

  FUNC_21(VAR_16, VAR_25);

  goto restart_expand;
 }
 VAR_23 = FUNC_1(VAR_18, VAR_20);





 VAR_21 = FUNC_27(VAR_20 + 1);
 if (VAR_21 > VAR_18->hashm_ovflpoint)
 {
  uint32 VAR_35;

  FUNC_0(VAR_21 == VAR_18->hashm_ovflpoint + 1);







  VAR_35 = FUNC_23(VAR_21) - VAR_20;
  if (!FUNC_19(VAR_16, VAR_23, VAR_35))
  {

   FUNC_26(VAR_16, VAR_25);
   goto fail;
  }
 }
 VAR_24 = FUNC_25(VAR_16, VAR_23, VAR_8);
 if (!FUNC_7(VAR_24))
 {
  FUNC_26(VAR_16, VAR_25);
  FUNC_26(VAR_16, VAR_24);
  goto fail;
 }







 FUNC_13();




 VAR_18->hashm_maxbucket = VAR_20;

 if (VAR_20 > VAR_18->hashm_highmask)
 {

  VAR_18->hashm_lowmask = VAR_18->hashm_highmask;
  VAR_18->hashm_highmask = VAR_20 | VAR_18->hashm_lowmask;
  VAR_33 = 1;
 }






 if (VAR_21 > VAR_18->hashm_ovflpoint)
 {
  VAR_18->hashm_spares[VAR_21] = VAR_18->hashm_spares[VAR_18->hashm_ovflpoint];
  VAR_18->hashm_ovflpoint = VAR_21;
  VAR_34 = 1;
 }

 FUNC_9(VAR_17);
 VAR_30 = VAR_18->hashm_maxbucket;
 VAR_31 = VAR_18->hashm_highmask;
 VAR_32 = VAR_18->hashm_lowmask;

 VAR_26 = FUNC_2(VAR_25);
 VAR_28 = (HashPageOpaque) FUNC_10(VAR_26);







 VAR_28->hasho_flag |= VAR_5;
 VAR_28->hasho_prevblkno = VAR_30;

 FUNC_9(VAR_25);

 VAR_27 = FUNC_2(VAR_24);





 VAR_29 = (HashPageOpaque) FUNC_10(VAR_27);
 VAR_29->hasho_prevblkno = VAR_30;
 VAR_29->hasho_nextblkno = VAR_3;
 VAR_29->hasho_bucket = VAR_20;
 VAR_29->hasho_flag = VAR_6 | VAR_4;
 VAR_29->hasho_page_id = VAR_2;

 FUNC_9(VAR_24);


 if (FUNC_12(VAR_16))
 {
  xl_hash_split_allocate_page VAR_36;
  XLogRecPtr VAR_37;

  VAR_36.new_bucket = VAR_30;
  VAR_36.old_bucket_flag = VAR_28->hasho_flag;
  VAR_36.new_bucket_flag = VAR_29->hasho_flag;
  VAR_36.flags = 0;

  FUNC_14();

  FUNC_17(0, VAR_25, VAR_9);
  FUNC_17(1, VAR_24, VAR_10);
  FUNC_17(2, VAR_17, VAR_9);

  if (VAR_33)
  {
   VAR_36.flags |= VAR_13;
   FUNC_16(2, (char *) &VAR_18->hashm_lowmask, sizeof(uint32));
   FUNC_16(2, (char *) &VAR_18->hashm_highmask, sizeof(uint32));
  }

  if (VAR_34)
  {
   VAR_36.flags |= VAR_14;
   FUNC_16(2, (char *) &VAR_18->hashm_ovflpoint,
        sizeof(uint32));
   FUNC_16(2,
        (char *) &VAR_18->hashm_spares[VAR_18->hashm_ovflpoint],
        sizeof(uint32));
  }

  FUNC_18((char *) &VAR_36, VAR_12);

  VAR_37 = FUNC_15(VAR_11, VAR_15);

  FUNC_11(FUNC_2(VAR_25), VAR_37);
  FUNC_11(FUNC_2(VAR_24), VAR_37);
  FUNC_11(FUNC_2(VAR_17), VAR_37);
 }

 FUNC_3();


 FUNC_8(VAR_17, VAR_1);


 FUNC_28(VAR_16, VAR_17,
       VAR_19, VAR_20,
       VAR_25, VAR_24, ((void*)0),
       VAR_30, VAR_31, VAR_32);


 FUNC_21(VAR_16, VAR_25);
 FUNC_21(VAR_16, VAR_24);

 return;


fail:


 FUNC_8(VAR_17, VAR_1);
}
