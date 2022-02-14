
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {double num_tuples; int ffactor; int procid; } ;
typedef TYPE_1__ xl_hash_init_meta_page ;
struct TYPE_16__ {int bmsize; } ;
typedef TYPE_2__ xl_hash_init_bitmap_page ;
typedef scalar_t__ uint32 ;
typedef int int32 ;
typedef int XLogRecPtr ;
struct TYPE_18__ {scalar_t__ hashm_maxbucket; size_t hashm_nmaps; int hashm_bmsize; scalar_t__* hashm_mapp; int hashm_ffactor; int hashm_procid; } ;
struct TYPE_17__ {int rd_node; } ;
typedef TYPE_3__* Relation ;
typedef int RegProcedure ;
typedef int Page ;
typedef int ItemIdData ;
typedef int IndexTupleData ;
typedef TYPE_4__* HashMetaPage ;
typedef scalar_t__ ForkNumber ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_4__* FUNC_3 (int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_8 (TYPE_3__*,scalar_t__) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_11 (TYPE_3__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int,int ,int) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_17 (int ,double,int ,int,int) ;
 int FUNC_18 (int ,int ,int) ;
 int FUNC_19 (int ,scalar_t__,scalar_t__,int ,int) ;
 int FUNC_20 (TYPE_3__*,int ) ;
 int FUNC_21 (int ,char*,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (char*,int ) ;
 int FUNC_25 (TYPE_3__*,int,int ) ;
 int FUNC_26 (int *,scalar_t__,scalar_t__,int ,int) ;

uint32
FUNC_27(Relation VAR_17, double VAR_18, ForkNumber VAR_19)
{
 Buffer VAR_20;
 Buffer VAR_21;
 Buffer VAR_22;
 Page VAR_23;
 HashMetaPage VAR_24;
 RegProcedure VAR_25;
 int32 VAR_26;
 int32 VAR_27;
 int32 VAR_28;
 uint32 VAR_29;
 uint32 VAR_30;
 bool VAR_31;


 if (FUNC_8(VAR_17, VAR_19) != 0)
  FUNC_21(VAR_3, "cannot initialize non-empty hash index \"%s\"",
    FUNC_9(VAR_17));






 VAR_31 = FUNC_11(VAR_17) || VAR_19 == VAR_8;







 VAR_26 = sizeof(uint32);
 VAR_27 = FUNC_5(sizeof(IndexTupleData)) + FUNC_5(VAR_26) +
  sizeof(ItemIdData);
 VAR_28 = FUNC_10(VAR_17, VAR_5) / VAR_27;

 if (VAR_28 < 10)
  VAR_28 = 10;

 VAR_25 = FUNC_25(VAR_17, 1, VAR_4);
 VAR_20 = FUNC_16(VAR_17, VAR_7, VAR_19);
 FUNC_17(VAR_20, VAR_18, VAR_25, VAR_28, 0);
 FUNC_6(VAR_20);

 VAR_23 = FUNC_1(VAR_20);
 VAR_24 = FUNC_3(VAR_23);


 if (VAR_31)
 {
  xl_hash_init_meta_page VAR_32;
  XLogRecPtr VAR_33;

  VAR_32.num_tuples = VAR_18;
  VAR_32.procid = VAR_24->hashm_procid;
  VAR_32.ffactor = VAR_24->hashm_ffactor;

  FUNC_12();
  FUNC_15((char *) &VAR_32, VAR_14);
  FUNC_14(0, VAR_20, VAR_11 | VAR_10);

  VAR_33 = FUNC_13(VAR_12, VAR_16);

  FUNC_7(FUNC_1(VAR_20), VAR_33);
 }

 VAR_29 = VAR_24->hashm_maxbucket + 1;







 FUNC_4(VAR_20, VAR_1);




 for (VAR_30 = 0; VAR_30 < VAR_29; VAR_30++)
 {
  BlockNumber VAR_34;


  FUNC_2();

  VAR_34 = FUNC_0(VAR_24, VAR_30);
  VAR_21 = FUNC_16(VAR_17, VAR_34, VAR_19);
  FUNC_19(VAR_21, VAR_24->hashm_maxbucket, VAR_30, VAR_9, 0);
  FUNC_6(VAR_21);

  if (VAR_31)
   FUNC_26(&VAR_17->rd_node,
      VAR_19,
      VAR_34,
      FUNC_1(VAR_21),
      1);
  FUNC_20(VAR_17, VAR_21);
 }


 FUNC_4(VAR_20, VAR_0);




 VAR_22 = FUNC_16(VAR_17, VAR_29 + 1, VAR_19);
 FUNC_18(VAR_22, VAR_24->hashm_bmsize, 0);
 FUNC_6(VAR_22);



 if (VAR_24->hashm_nmaps >= VAR_6)
  FUNC_22(VAR_3,
    (FUNC_23(VAR_2),
     FUNC_24("out of overflow pages in hash index \"%s\"",
      FUNC_9(VAR_17))));

 VAR_24->hashm_mapp[VAR_24->hashm_nmaps] = VAR_29 + 1;

 VAR_24->hashm_nmaps++;
 FUNC_6(VAR_20);


 if (VAR_31)
 {
  xl_hash_init_bitmap_page VAR_35;
  XLogRecPtr VAR_36;

  VAR_35.bmsize = VAR_24->hashm_bmsize;

  FUNC_12();
  FUNC_15((char *) &VAR_35, VAR_13);
  FUNC_14(0, VAR_22, VAR_11);






  FUNC_14(1, VAR_20, VAR_10);

  VAR_36 = FUNC_13(VAR_12, VAR_15);

  FUNC_7(FUNC_1(VAR_22), VAR_36);
  FUNC_7(FUNC_1(VAR_20), VAR_36);
 }


 FUNC_20(VAR_17, VAR_22);
 FUNC_20(VAR_17, VAR_20);

 return VAR_29;
}
