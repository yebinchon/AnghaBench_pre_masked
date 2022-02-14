
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ version; int last_cleanup_num_heap_tuples; int oldest_btpo_xact; int fastlevel; int fastroot; int level; int root; } ;
typedef TYPE_1__ xl_btree_metadata ;
typedef int uint8 ;
typedef int XLogRecPtr ;
struct TYPE_11__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_14__ {scalar_t__ btm_version; int btm_last_cleanup_num_heap_tuples; int btm_oldest_btpo_xact; int btm_fastlevel; int btm_fastroot; int btm_level; int btm_root; int btm_magic; } ;
struct TYPE_13__ {int btpo_flags; } ;
struct TYPE_12__ {int pd_lower; } ;
typedef int Size ;
typedef TYPE_3__* PageHeader ;
typedef scalar_t__ Page ;
typedef int Buffer ;
typedef TYPE_4__* BTPageOpaque ;
typedef TYPE_5__ BTMetaPageData ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_5__* FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 char* FUNC_10 (TYPE_2__*,int ,int*) ;
 int FUNC_11 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_12(XLogReaderState *VAR_4, uint8 VAR_5)
{
 XLogRecPtr VAR_6 = VAR_4->EndRecPtr;
 Buffer VAR_7;
 Page VAR_8;
 BTMetaPageData *VAR_9;
 BTPageOpaque VAR_10;
 xl_btree_metadata *VAR_11;
 char *VAR_12;
 Size VAR_13;

 VAR_7 = FUNC_9(VAR_4, VAR_5);
 VAR_12 = FUNC_10(VAR_4, VAR_5, &VAR_13);

 FUNC_0(VAR_13 == sizeof(xl_btree_metadata));
 FUNC_0(FUNC_2(VAR_7) == VAR_2);
 VAR_11 = (xl_btree_metadata *) VAR_12;
 VAR_8 = FUNC_3(VAR_7);

 FUNC_11(VAR_8, FUNC_4(VAR_7));

 VAR_9 = FUNC_1(VAR_8);
 VAR_9->btm_magic = VAR_1;
 VAR_9->btm_version = VAR_11->version;
 VAR_9->btm_root = VAR_11->root;
 VAR_9->btm_level = VAR_11->level;
 VAR_9->btm_fastroot = VAR_11->fastroot;
 VAR_9->btm_fastlevel = VAR_11->fastlevel;

 FUNC_0(VAR_9->btm_version >= VAR_3);
 VAR_9->btm_oldest_btpo_xact = VAR_11->oldest_btpo_xact;
 VAR_9->btm_last_cleanup_num_heap_tuples = VAR_11->last_cleanup_num_heap_tuples;

 VAR_10 = (BTPageOpaque) FUNC_6(VAR_8);
 VAR_10->btpo_flags = VAR_0;






 ((PageHeader) VAR_8)->pd_lower =
  ((char *) VAR_9 + sizeof(BTMetaPageData)) - (char *) VAR_8;

 FUNC_7(VAR_8, VAR_6);
 FUNC_5(VAR_7);
 FUNC_8(VAR_7);
}
