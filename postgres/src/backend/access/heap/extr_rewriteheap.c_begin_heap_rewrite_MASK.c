
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hash_ctl ;
typedef int UnresolvedTupData ;
typedef void* TransactionId ;
typedef int TidHashKey ;
struct TYPE_9__ {int keysize; int entrysize; int hcxt; } ;
struct TYPE_8__ {int rs_buffer_valid; int rs_use_wal; void* rs_old_new_tid_map; void* rs_unresolved_tups; int rs_cxt; int rs_cutoff_multi; void* rs_freeze_xid; void* rs_oldest_xmin; int rs_blockno; scalar_t__ rs_buffer; void* rs_new_rel; void* rs_old_rel; } ;
typedef int RewriteStateData ;
typedef TYPE_1__* RewriteState ;
typedef void* Relation ;
typedef scalar_t__ Page ;
typedef int OldToNewMappingData ;
typedef int MultiXactId ;
typedef int MemoryContext ;
typedef TYPE_2__ HASHCTL ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (char*,int,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int) ;

RewriteState
FUNC_8(Relation VAR_6, Relation VAR_7, TransactionId VAR_8,
       TransactionId VAR_9, MultiXactId VAR_10,
       bool VAR_11)
{
 RewriteState VAR_12;
 MemoryContext VAR_13;
 MemoryContext VAR_14;
 HASHCTL VAR_15;





 VAR_13 = FUNC_0(VAR_2,
           "Table rewrite",
           VAR_0);
 VAR_14 = FUNC_1(VAR_13);


 VAR_12 = FUNC_7(sizeof(RewriteStateData));

 VAR_12->rs_old_rel = VAR_6;
 VAR_12->rs_new_rel = VAR_7;
 VAR_12->rs_buffer = (Page) FUNC_6(VAR_1);

 VAR_12->rs_blockno = FUNC_2(VAR_7);
 VAR_12->rs_buffer_valid = 0;
 VAR_12->rs_use_wal = VAR_11;
 VAR_12->rs_oldest_xmin = VAR_8;
 VAR_12->rs_freeze_xid = VAR_9;
 VAR_12->rs_cutoff_multi = VAR_10;
 VAR_12->rs_cxt = VAR_13;


 FUNC_5(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.keysize = sizeof(TidHashKey);
 VAR_15.entrysize = sizeof(UnresolvedTupData);
 VAR_15.hcxt = VAR_12->rs_cxt;

 VAR_12->rs_unresolved_tups =
  FUNC_3("Rewrite / Unresolved ctids",
     128,
     &VAR_15,
     VAR_5 | VAR_3 | VAR_4);

 VAR_15.entrysize = sizeof(OldToNewMappingData);

 VAR_12->rs_old_new_tid_map =
  FUNC_3("Rewrite / Old to new tid map",
     128,
     &VAR_15,
     VAR_5 | VAR_3 | VAR_4);

 FUNC_1(VAR_14);

 FUNC_4(VAR_12);

 return VAR_12;
}
