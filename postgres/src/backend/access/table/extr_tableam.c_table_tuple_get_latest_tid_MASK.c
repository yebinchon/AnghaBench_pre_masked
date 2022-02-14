
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* TableScanDesc ;
struct TYPE_9__ {int (* tuple_get_latest_tid ) (TYPE_1__*,int ) ;int (* tuple_tid_valid ) (TYPE_1__*,int ) ;} ;
typedef TYPE_2__ TableAmRoutine ;
struct TYPE_10__ {TYPE_2__* rd_tableam; } ;
struct TYPE_8__ {TYPE_3__* rs_rd; } ;
typedef TYPE_3__* Relation ;
typedef int ItemPointer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;

void
FUNC_8(TableScanDesc VAR_2, ItemPointer VAR_3)
{
 Relation VAR_4 = VAR_2->rs_rd;
 const TableAmRoutine *VAR_5 = VAR_4->rd_tableam;





 if (!VAR_5->tuple_tid_valid(VAR_2, VAR_3))
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("tid (%u, %u) is not valid for relation \"%s\"",
      FUNC_0(VAR_3),
      FUNC_1(VAR_3),
      FUNC_2(VAR_4))));

 VAR_5->tuple_get_latest_tid(VAR_2, VAR_3);
}
