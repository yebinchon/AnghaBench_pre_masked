
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {double ntuples; } ;
typedef TYPE_1__ xl_hash_update_meta_page ;
typedef int XLogRecPtr ;
struct TYPE_18__ {scalar_t__ hashm_maxbucket; double hashm_ntuples; int hashm_lowmask; int hashm_highmask; } ;
struct TYPE_17__ {scalar_t__ hasho_prevblkno; } ;
struct TYPE_16__ {int estimated_count; double num_index_tuples; double tuples_removed; } ;
struct TYPE_15__ {int strategy; int index; } ;
typedef int Relation ;
typedef int Page ;
typedef TYPE_2__ IndexVacuumInfo ;
typedef TYPE_3__ IndexBulkDeleteResult ;
typedef int IndexBulkDeleteCallback ;
typedef TYPE_4__* HashPageOpaque ;
typedef TYPE_5__* HashMetaPage ;
typedef int Buffer ;
typedef scalar_t__ Bucket ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 TYPE_5__* FUNC_7 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int VAR_8 ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_13 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 () ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (char*,int ) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ,int ,int ) ;
 TYPE_5__* FUNC_23 (int ,int *,int) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ,scalar_t__,int ,int ,int ,scalar_t__,int ,int ,double*,double*,int,int ,void*) ;
 scalar_t__ FUNC_26 (int) ;

IndexBulkDeleteResult *
FUNC_27(IndexVacuumInfo *VAR_14, IndexBulkDeleteResult *VAR_15,
      IndexBulkDeleteCallback VAR_16, void *VAR_17)
{
 Relation VAR_18 = VAR_14->index;
 double VAR_19;
 double VAR_20;
 double VAR_21;
 Bucket VAR_22;
 Bucket VAR_23;
 Bucket VAR_24;
 Buffer VAR_25 = VAR_5;
 HashMetaPage VAR_26;
 HashMetaPage VAR_27;

 VAR_19 = 0;
 VAR_20 = 0;







 VAR_27 = FUNC_23(VAR_18, &VAR_25, 0);
 FUNC_0(VAR_27 != ((void*)0));

 VAR_22 = VAR_27->hashm_maxbucket;
 VAR_21 = VAR_27->hashm_ntuples;


 VAR_24 = 0;
 VAR_23 = VAR_22;

loop_top:
 while (VAR_24 <= VAR_23)
 {
  BlockNumber VAR_28;
  BlockNumber VAR_29;
  Buffer VAR_30;
  Buffer VAR_31;
  HashPageOpaque VAR_32;
  Page VAR_33;
  bool VAR_34 = 0;


  VAR_28 = FUNC_1(VAR_27, VAR_24);

  VAR_29 = VAR_28;





  VAR_31 = FUNC_13(VAR_18, VAR_8, VAR_29, VAR_9, VAR_14->strategy);
  FUNC_9(VAR_31);
  FUNC_20(VAR_18, VAR_31, VAR_6);

  VAR_33 = FUNC_2(VAR_31);
  VAR_32 = (HashPageOpaque) FUNC_11(VAR_33);






  if (!FUNC_5(VAR_32) &&
   FUNC_6(VAR_32))
  {
   VAR_34 = 1;
   FUNC_0(VAR_32->hasho_prevblkno != VAR_4);
   if (VAR_32->hasho_prevblkno > VAR_27->hashm_maxbucket)
   {
    VAR_27 = FUNC_23(VAR_18, &VAR_25, 1);
    FUNC_0(VAR_27 != ((void*)0));
   }
  }

  VAR_30 = VAR_31;

  FUNC_25(VAR_18, VAR_24, VAR_30, VAR_29, VAR_14->strategy,
        VAR_27->hashm_maxbucket,
        VAR_27->hashm_highmask,
        VAR_27->hashm_lowmask, &VAR_19,
        &VAR_20, VAR_34,
        VAR_16, VAR_17);

  FUNC_21(VAR_18, VAR_30);


  VAR_24++;
 }

 if (FUNC_3(VAR_25))
  VAR_25 = FUNC_22(VAR_18, VAR_2, VAR_3, VAR_7);


 FUNC_8(VAR_25, VAR_0);
 VAR_26 = FUNC_7(FUNC_2(VAR_25));

 if (VAR_23 != VAR_26->hashm_maxbucket)
 {

  FUNC_8(VAR_25, VAR_1);
  VAR_27 = FUNC_23(VAR_18, &VAR_25, 1);
  FUNC_0(VAR_27 != ((void*)0));
  VAR_23 = VAR_27->hashm_maxbucket;
  goto loop_top;
 }


 FUNC_15();

 if (VAR_22 == VAR_26->hashm_maxbucket &&
  VAR_21 == VAR_26->hashm_ntuples)
 {




  VAR_26->hashm_ntuples = VAR_20;
 }
 else
 {






  if (VAR_26->hashm_ntuples > VAR_19)
   VAR_26->hashm_ntuples -= VAR_19;
  else
   VAR_26->hashm_ntuples = 0;
  VAR_20 = VAR_26->hashm_ntuples;
 }

 FUNC_10(VAR_25);


 if (FUNC_14(VAR_18))
 {
  xl_hash_update_meta_page VAR_35;
  XLogRecPtr VAR_36;

  VAR_35.ntuples = VAR_26->hashm_ntuples;

  FUNC_16();
  FUNC_19((char *) &VAR_35, VAR_12);

  FUNC_18(0, VAR_25, VAR_10);

  VAR_36 = FUNC_17(VAR_11, VAR_13);
  FUNC_12(FUNC_2(VAR_25), VAR_36);
 }

 FUNC_4();

 FUNC_24(VAR_18, VAR_25);


 if (VAR_15 == ((void*)0))
  VAR_15 = (IndexBulkDeleteResult *) FUNC_26(sizeof(IndexBulkDeleteResult));
 VAR_15->estimated_count = 0;
 VAR_15->num_index_tuples = VAR_20;
 VAR_15->tuples_removed += VAR_19;


 return VAR_15;
}
