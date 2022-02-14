
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {void* combocid; void* cmax; void* cmin; int target_tid; int target_node; int top_xid; } ;
typedef TYPE_1__ xl_heap_new_cid ;
typedef int XLogRecPtr ;
struct TYPE_14__ {scalar_t__ t_tableOid; int t_self; TYPE_3__* t_data; } ;
struct TYPE_13__ {int t_infomask; } ;
struct TYPE_12__ {int rd_node; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__* HeapTupleHeader ;
typedef TYPE_4__* HeapTuple ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (TYPE_3__*) ;
 void* FUNC_4 (TYPE_3__*) ;
 void* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,int ) ;

__attribute__((used)) static XLogRecPtr
FUNC_11(Relation VAR_7, HeapTuple VAR_8)
{
 xl_heap_new_cid VAR_9;

 XLogRecPtr VAR_10;
 HeapTupleHeader VAR_11 = VAR_8->t_data;

 FUNC_0(FUNC_7(&VAR_8->t_self));
 FUNC_0(VAR_8->t_tableOid != VAR_3);

 VAR_9.top_xid = FUNC_1();
 VAR_9.target_node = VAR_7->rd_node;
 VAR_9.target_tid = VAR_8->t_self;





 if (VAR_11->t_infomask & VAR_0)
 {
  FUNC_0(!(VAR_11->t_infomask & VAR_1));
  FUNC_0(!FUNC_6(VAR_11));
  VAR_9.cmin = FUNC_4(VAR_11);
  VAR_9.cmax = FUNC_3(VAR_11);
  VAR_9.combocid = FUNC_5(VAR_11);
 }

 else
 {
  if (VAR_11->t_infomask & VAR_1 ||
   FUNC_2(VAR_11->t_infomask))
  {
   VAR_9.cmin = FUNC_5(VAR_11);
   VAR_9.cmax = VAR_2;
  }

  else
  {
   VAR_9.cmin = VAR_2;
   VAR_9.cmax = FUNC_5(VAR_11);

  }
  VAR_9.combocid = VAR_2;
 }






 FUNC_8();
 FUNC_10((char *) &VAR_9, VAR_5);



 VAR_10 = FUNC_9(VAR_4, VAR_6);

 return VAR_10;
}
