
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int TransactionId ;
struct TYPE_17__ {TYPE_10__* t_data; void* t_self; } ;
struct TYPE_16__ {void* new_tid; int new_node; void* old_tid; int old_node; } ;
struct TYPE_15__ {TYPE_2__* rs_new_rel; TYPE_1__* rs_old_rel; int rs_logical_rewrite; int rs_logical_xmin; } ;
struct TYPE_14__ {int rd_node; } ;
struct TYPE_13__ {int rd_node; } ;
struct TYPE_12__ {int t_infomask; } ;
typedef TYPE_3__* RewriteState ;
typedef TYPE_4__ LogicalRewriteMappingData ;
typedef void* ItemPointerData ;
typedef TYPE_5__* HeapTuple ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_3__*,int ,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_7(RewriteState VAR_0, ItemPointerData VAR_1,
         HeapTuple VAR_2)
{
 ItemPointerData VAR_3 = VAR_2->t_self;
 TransactionId VAR_4 = VAR_0->rs_logical_xmin;
 TransactionId VAR_5;
 TransactionId VAR_6;
 bool VAR_7 = 0;
 bool VAR_8 = 0;
 LogicalRewriteMappingData VAR_9;


 if (!VAR_0->rs_logical_rewrite)
  return;

 VAR_5 = FUNC_2(VAR_2->t_data);

 VAR_6 = FUNC_1(VAR_2->t_data);




 if (FUNC_4(VAR_5) && !FUNC_5(VAR_5, VAR_4))
  VAR_7 = 1;

 if (!FUNC_4(VAR_6))
 {




 }
 else if (FUNC_0(VAR_2->t_data->t_infomask))
 {

 }
 else if (!FUNC_5(VAR_6, VAR_4))
 {

  VAR_8 = 1;
 }


 if (!VAR_7 && !VAR_8)
  return;


 VAR_9.old_node = VAR_0->rs_old_rel->rd_node;
 VAR_9.old_tid = VAR_1;
 VAR_9.new_node = VAR_0->rs_new_rel->rd_node;
 VAR_9.new_tid = VAR_3;
 if (VAR_7)
  FUNC_6(VAR_0, VAR_5, &VAR_9);

 if (VAR_8 && !FUNC_3(VAR_5, VAR_6))
  FUNC_6(VAR_0, VAR_6, &VAR_9);
}
