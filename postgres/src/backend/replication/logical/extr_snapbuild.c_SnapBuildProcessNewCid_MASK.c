
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cmin; scalar_t__ cmax; int combocid; int target_tid; int target_node; int top_xid; } ;
typedef TYPE_1__ xl_heap_new_cid ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_6__ {int reorder; } ;
typedef TYPE_2__ SnapBuild ;
typedef scalar_t__ CommandId ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*) ;

void
FUNC_5(SnapBuild *VAR_2, TransactionId VAR_3,
        XLogRecPtr VAR_4, xl_heap_new_cid *VAR_5)
{
 CommandId VAR_6;





 FUNC_3(VAR_2->reorder, VAR_3, VAR_4);

 FUNC_2(VAR_2->reorder, VAR_5->top_xid, VAR_4,
         VAR_5->target_node, VAR_5->target_tid,
         VAR_5->cmin, VAR_5->cmax,
         VAR_5->combocid);


 if (VAR_5->cmin != VAR_1 &&
  VAR_5->cmax != VAR_1)
  VAR_6 = FUNC_0(VAR_5->cmin, VAR_5->cmax);
 else if (VAR_5->cmax != VAR_1)
  VAR_6 = VAR_5->cmax;
 else if (VAR_5->cmin != VAR_1)
  VAR_6 = VAR_5->cmin;
 else
 {
  VAR_6 = VAR_1;
  FUNC_4(VAR_0, "xl_heap_new_cid record without a valid CommandId");
 }

 FUNC_1(VAR_2->reorder, VAR_3, VAR_4, VAR_6 + 1);
}
