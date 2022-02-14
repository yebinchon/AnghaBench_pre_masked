
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ version; scalar_t__ last_cleanup_num_heap_tuples; scalar_t__ oldest_btpo_xact; int fastlevel; int fastroot; int level; int root; } ;
typedef TYPE_1__ xl_btree_metadata ;
typedef scalar_t__ float8 ;
typedef int XLogRecPtr ;
typedef scalar_t__ TransactionId ;
struct TYPE_5__ {scalar_t__ btm_version; scalar_t__ btm_oldest_btpo_xact; scalar_t__ btm_last_cleanup_num_heap_tuples; int btm_fastlevel; int btm_fastroot; int btm_level; int btm_root; } ;
typedef int Relation ;
typedef int Page ;
typedef int Buffer ;
typedef TYPE_2__ BTMetaPageData ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int VAR_8 ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;

void
FUNC_16(Relation VAR_9, TransactionId VAR_10,
        float8 VAR_11)
{
 Buffer VAR_12;
 Page VAR_13;
 BTMetaPageData *VAR_14;
 bool VAR_15 = 0;
 XLogRecPtr VAR_16;


 VAR_12 = FUNC_13(VAR_9, VAR_0, VAR_2);
 VAR_13 = FUNC_2(VAR_12);
 VAR_14 = FUNC_1(VAR_13);


 if (VAR_14->btm_version < VAR_1)
  VAR_15 = 1;
 else if (VAR_14->btm_oldest_btpo_xact != VAR_10 ||
    VAR_14->btm_last_cleanup_num_heap_tuples != VAR_11)
  VAR_15 = 1;

 if (!VAR_15)
 {
  FUNC_14(VAR_9, VAR_12);
  return;
 }


 FUNC_4(VAR_12, VAR_4);
 FUNC_4(VAR_12, VAR_3);

 FUNC_8();


 if (VAR_14->btm_version < VAR_1)
  FUNC_15(VAR_13);


 VAR_14->btm_oldest_btpo_xact = VAR_10;
 VAR_14->btm_last_cleanup_num_heap_tuples = VAR_11;
 FUNC_5(VAR_12);


 if (FUNC_7(VAR_9))
 {
  xl_btree_metadata VAR_17;

  FUNC_9();
  FUNC_12(0, VAR_12, VAR_6 | VAR_5);

  FUNC_0(VAR_14->btm_version >= VAR_1);
  VAR_17.version = VAR_14->btm_version;
  VAR_17.root = VAR_14->btm_root;
  VAR_17.level = VAR_14->btm_level;
  VAR_17.fastroot = VAR_14->btm_fastroot;
  VAR_17.fastlevel = VAR_14->btm_fastlevel;
  VAR_17.oldest_btpo_xact = VAR_10;
  VAR_17.last_cleanup_num_heap_tuples = VAR_11;

  FUNC_11(0, (char *) &VAR_17, sizeof(xl_btree_metadata));

  VAR_16 = FUNC_10(VAR_7, VAR_8);

  FUNC_6(VAR_13, VAR_16);
 }

 FUNC_3();
 FUNC_14(VAR_9, VAR_12);
}
