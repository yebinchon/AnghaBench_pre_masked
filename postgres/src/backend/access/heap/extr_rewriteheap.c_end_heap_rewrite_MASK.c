
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_2__* UnresolvedTup ;
struct TYPE_16__ {int rd_smgr; int rd_node; } ;
struct TYPE_15__ {TYPE_1__* t_data; } ;
struct TYPE_14__ {int rs_cxt; TYPE_7__* rs_new_rel; scalar_t__ rs_buffer; int rs_blockno; scalar_t__ rs_use_wal; scalar_t__ rs_buffer_valid; int rs_unresolved_tups; } ;
struct TYPE_13__ {TYPE_5__* tuple; } ;
struct TYPE_12__ {int t_ctid; } ;
typedef TYPE_3__* RewriteState ;
typedef int HASH_SEQ_STATUS ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (int *,int ) ;
 TYPE_2__* FUNC_6 (int *) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (int *,int ,int ,scalar_t__,int) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_11 (int ,int ,int ,char*,int) ;

void
FUNC_12(RewriteState VAR_1)
{
 HASH_SEQ_STATUS VAR_2;
 UnresolvedTup VAR_3;





 FUNC_5(&VAR_2, VAR_1->rs_unresolved_tups);

 while ((VAR_3 = FUNC_6(&VAR_2)) != ((void*)0))
 {
  FUNC_0(&VAR_3->tuple->t_data->t_ctid);
  FUNC_10(VAR_1, VAR_3->tuple);
 }


 if (VAR_1->rs_buffer_valid)
 {
  if (VAR_1->rs_use_wal)
   FUNC_8(&VAR_1->rs_new_rel->rd_node,
      VAR_0,
      VAR_1->rs_blockno,
      VAR_1->rs_buffer,
      1);
  FUNC_4(VAR_1->rs_new_rel);

  FUNC_2(VAR_1->rs_buffer, VAR_1->rs_blockno);

  FUNC_11(VAR_1->rs_new_rel->rd_smgr, VAR_0, VAR_1->rs_blockno,
       (char *) VAR_1->rs_buffer, 1);
 }
 if (FUNC_3(VAR_1->rs_new_rel))
  FUNC_7(VAR_1->rs_new_rel);

 FUNC_9(VAR_1);


 FUNC_1(VAR_1->rs_cxt);
}
