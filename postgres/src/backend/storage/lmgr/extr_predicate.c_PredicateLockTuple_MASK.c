
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int t_self; int t_data; } ;
struct TYPE_7__ {int dbNode; } ;
struct TYPE_8__ {int rd_id; TYPE_1__ rd_node; int * rd_index; } ;
typedef int Snapshot ;
typedef TYPE_2__* Relation ;
typedef int PREDICATELOCKTARGETTAG ;
typedef int * ItemPointer ;
typedef TYPE_3__* HeapTuple ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_8 (int ) ;

void
FUNC_9(Relation VAR_0, HeapTuple VAR_1, Snapshot VAR_2)
{
 PREDICATELOCKTARGETTAG VAR_3;
 ItemPointer VAR_4;

 if (!FUNC_7(VAR_0, VAR_2))
  return;




 if (VAR_0->rd_index == ((void*)0))
 {

  if (FUNC_8(FUNC_0(VAR_1->t_data)))
   return;
 }







 FUNC_5(VAR_3,
          VAR_0->rd_node.dbNode,
          VAR_0->rd_id);
 if (FUNC_4(&VAR_3))
  return;

 VAR_4 = &(VAR_1->t_self);
 FUNC_6(VAR_3,
          VAR_0->rd_node.dbNode,
          VAR_0->rd_id,
          FUNC_1(VAR_4),
          FUNC_2(VAR_4));
 FUNC_3(&VAR_3);
}
