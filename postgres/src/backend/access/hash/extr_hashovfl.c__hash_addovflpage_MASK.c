
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int bmpage_found; int bmsize; } ;
typedef TYPE_1__ xl_hash_add_ovfl_page ;
typedef int uint32 ;
typedef int XLogRecPtr ;
struct TYPE_11__ {int hashm_firstfree; int hashm_ovflpoint; int* hashm_spares; int hashm_nmaps; int hashm_bmsize; void** hashm_mapp; } ;
struct TYPE_10__ {int hasho_flag; int hasho_bucket; void* hasho_nextblkno; int hasho_page_id; void* hasho_prevblkno; } ;
typedef int Relation ;
typedef int Page ;
typedef TYPE_2__* HashPageOpaque ;
typedef TYPE_3__* HashMetaPage ;
typedef int Buffer ;
typedef int Bucket ;
typedef void* BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* FUNC_9 (int ) ;
 TYPE_3__* FUNC_10 (int ) ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_11 (int ,int ) ;
 int VAR_16 ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int*,int) ;
 int FUNC_18 () ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_19 () ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int,char*,int) ;
 int FUNC_22 (int,int ,int ) ;
 int FUNC_23 (char*,int ) ;
 int FUNC_24 (int ,int ,int) ;
 scalar_t__ FUNC_25 (int) ;
 int FUNC_26 (int ,void*,int ,int) ;
 int FUNC_27 (int ,void*) ;
 int FUNC_28 (int ,void*,int ) ;
 int FUNC_29 (int ,int ,int) ;
 int FUNC_30 (int ,int ) ;
 void* FUNC_31 (TYPE_3__*,int) ;
 int FUNC_32 (int ,int ) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (char*,int ) ;

Buffer
FUNC_35(Relation VAR_22, Buffer VAR_23, Buffer VAR_24, bool VAR_25)
{
 Buffer VAR_26;
 Page VAR_27;
 Page VAR_28;
 HashPageOpaque VAR_29;
 HashPageOpaque VAR_30;
 HashMetaPage VAR_31;
 Buffer VAR_32 = VAR_10;
 Buffer VAR_33 = VAR_10;
 BlockNumber VAR_34;
 uint32 VAR_35;
 uint32 VAR_36;
 uint32 *VAR_37 = ((void*)0);
 uint32 VAR_38;
 uint32 VAR_39;
 uint32 VAR_40;
 uint32 VAR_41;
 uint32 VAR_42;
 uint32 VAR_43;
 uint32 VAR_44,
    VAR_45;
 bool VAR_46 = 0;
 FUNC_11(VAR_24, VAR_2);


 FUNC_24(VAR_22, VAR_24, VAR_12 | VAR_14);


 for (;;)
 {
  BlockNumber VAR_47;

  VAR_27 = FUNC_6(VAR_24);
  VAR_29 = (HashPageOpaque) FUNC_13(VAR_27);
  VAR_47 = VAR_29->hasho_nextblkno;

  if (!FUNC_4(VAR_47))
   break;


  if (VAR_25)
  {

   FUNC_0((VAR_29->hasho_flag & VAR_15) == VAR_12);
   FUNC_11(VAR_24, VAR_3);
  }
  else
   FUNC_30(VAR_22, VAR_24);

  VAR_25 = 0;

  VAR_24 = FUNC_26(VAR_22, VAR_47, VAR_8, VAR_14);
 }


 FUNC_11(VAR_23, VAR_2);

 FUNC_24(VAR_22, VAR_23, VAR_13);
 VAR_31 = FUNC_10(FUNC_6(VAR_23));


 VAR_35 = VAR_31->hashm_firstfree;
 VAR_41 = VAR_35 >> FUNC_3(VAR_31);
 VAR_39 = VAR_35 & FUNC_2(VAR_31);
 VAR_44 = VAR_41;
 VAR_45 = VAR_39 / VAR_1;
 VAR_39 &= ~(VAR_1 - 1);


 for (;;)
 {
  BlockNumber VAR_48;
  Page VAR_49;
  uint32 VAR_50;


  VAR_36 = VAR_31->hashm_ovflpoint;
  VAR_38 = VAR_31->hashm_spares[VAR_36] - 1;
  VAR_43 = VAR_38 >> FUNC_3(VAR_31);
  VAR_42 = VAR_38 & FUNC_2(VAR_31);

  if (VAR_44 > VAR_43)
   break;

  FUNC_0(VAR_44 < VAR_31->hashm_nmaps);
  VAR_48 = VAR_31->hashm_mapp[VAR_44];

  if (VAR_44 == VAR_43)
   VAR_50 = VAR_42;
  else
   VAR_50 = FUNC_1(VAR_31) - 1;


  FUNC_11(VAR_23, VAR_3);

  VAR_32 = FUNC_26(VAR_22, VAR_48, VAR_8, VAR_11);
  VAR_49 = FUNC_6(VAR_32);
  VAR_37 = FUNC_9(VAR_49);

  for (; VAR_39 <= VAR_50; VAR_45++, VAR_39 += VAR_1)
  {
   if (VAR_37[VAR_45] != VAR_0)
   {
    VAR_46 = 1;


    FUNC_11(VAR_23, VAR_2);


    VAR_39 += FUNC_25(VAR_37[VAR_45]);
    VAR_40 = VAR_39;


    VAR_39 += (VAR_44 << FUNC_3(VAR_31));

    VAR_34 = FUNC_31(VAR_31, VAR_39);


    VAR_26 = FUNC_27(VAR_22, VAR_34);

    goto found;
   }
  }


  FUNC_30(VAR_22, VAR_32);
  VAR_32 = VAR_10;
  VAR_44++;
  VAR_45 = 0;
  VAR_39 = 0;


  FUNC_11(VAR_23, VAR_2);
 }





 if (VAR_42 == (uint32) (FUNC_1(VAR_31) - 1))
 {
  VAR_39 = VAR_31->hashm_spares[VAR_36];


  if (VAR_31->hashm_nmaps >= VAR_7)
   FUNC_32(VAR_5,
     (FUNC_33(VAR_4),
      FUNC_34("out of overflow pages in hash index \"%s\"",
       FUNC_15(VAR_22))));

  VAR_33 = FUNC_28(VAR_22, FUNC_31(VAR_31, VAR_39), VAR_16);
 }
 else
 {




 }


 VAR_39 = FUNC_7(VAR_33) ?
  VAR_31->hashm_spares[VAR_36] + 1 : VAR_31->hashm_spares[VAR_36];
 VAR_34 = FUNC_31(VAR_31, VAR_39);
 VAR_26 = FUNC_28(VAR_22, VAR_34, VAR_16);

found:






 FUNC_18();

 if (VAR_46)
 {
  FUNC_0(FUNC_7(VAR_32));


  FUNC_17(VAR_37, VAR_40);
  FUNC_12(VAR_32);
 }
 else
 {

  VAR_31->hashm_spares[VAR_36]++;

  if (FUNC_7(VAR_33))
  {
   FUNC_29(VAR_33, VAR_31->hashm_bmsize, 0);
   FUNC_12(VAR_33);


   VAR_31->hashm_mapp[VAR_31->hashm_nmaps] = FUNC_5(VAR_33);
   VAR_31->hashm_nmaps++;
   VAR_31->hashm_spares[VAR_36]++;
  }

  FUNC_12(VAR_23);





 }





 if (VAR_31->hashm_firstfree == VAR_35)
 {
  VAR_31->hashm_firstfree = VAR_39 + 1;
  FUNC_12(VAR_23);
 }


 VAR_28 = FUNC_6(VAR_26);
 VAR_30 = (HashPageOpaque) FUNC_13(VAR_28);
 VAR_30->hasho_prevblkno = FUNC_5(VAR_24);
 VAR_30->hasho_nextblkno = VAR_9;
 VAR_30->hasho_bucket = VAR_29->hasho_bucket;
 VAR_30->hasho_flag = VAR_14;
 VAR_30->hasho_page_id = VAR_6;

 FUNC_12(VAR_26);


 VAR_29->hasho_nextblkno = FUNC_5(VAR_26);

 FUNC_12(VAR_24);


 if (FUNC_16(VAR_22))
 {
  XLogRecPtr VAR_51;
  xl_hash_add_ovfl_page VAR_52;

  VAR_52.bmpage_found = VAR_46;
  VAR_52.bmsize = VAR_31->hashm_bmsize;

  FUNC_19();
  FUNC_23((char *) &VAR_52, VAR_20);

  FUNC_22(0, VAR_26, VAR_18);
  FUNC_21(0, (char *) &VAR_29->hasho_bucket, sizeof(Bucket));

  FUNC_22(1, VAR_24, VAR_17);

  if (FUNC_7(VAR_32))
  {
   FUNC_22(2, VAR_32, VAR_17);
   FUNC_21(2, (char *) &VAR_40, sizeof(uint32));
  }

  if (FUNC_7(VAR_33))
   FUNC_22(3, VAR_33, VAR_18);

  FUNC_22(4, VAR_23, VAR_17);
  FUNC_21(4, (char *) &VAR_31->hashm_firstfree, sizeof(uint32));

  VAR_51 = FUNC_20(VAR_19, VAR_21);

  FUNC_14(FUNC_6(VAR_26), VAR_51);
  FUNC_14(FUNC_6(VAR_24), VAR_51);

  if (FUNC_7(VAR_32))
   FUNC_14(FUNC_6(VAR_32), VAR_51);

  if (FUNC_7(VAR_33))
   FUNC_14(FUNC_6(VAR_33), VAR_51);

  FUNC_14(FUNC_6(VAR_23), VAR_51);
 }

 FUNC_8();

 if (VAR_25)
  FUNC_11(VAR_24, VAR_3);
 else
  FUNC_30(VAR_22, VAR_24);

 if (FUNC_7(VAR_32))
  FUNC_30(VAR_22, VAR_32);

 FUNC_11(VAR_23, VAR_3);

 if (FUNC_7(VAR_33))
  FUNC_30(VAR_22, VAR_33);

 return VAR_26;
}
