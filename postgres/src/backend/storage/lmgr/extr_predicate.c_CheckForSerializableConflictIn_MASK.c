
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int t_self; } ;
struct TYPE_7__ {int dbNode; } ;
struct TYPE_8__ {int rd_id; TYPE_1__ rd_node; } ;
typedef TYPE_2__* Relation ;
typedef int PREDICATELOCKTARGETTAG ;
typedef TYPE_3__* HeapTuple ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;

void
FUNC_15(Relation VAR_4, HeapTuple VAR_5,
          Buffer VAR_6)
{
 PREDICATELOCKTARGETTAG VAR_7;

 if (!FUNC_8(VAR_4))
  return;


 if (FUNC_9(VAR_2))
  FUNC_10(VAR_1,
    (FUNC_11(VAR_0),
     FUNC_14("could not serialize access due to read/write dependencies among transactions"),
     FUNC_12("Reason code: Canceled on identification as a pivot, during conflict in checking."),
     FUNC_13("The transaction might succeed if retried.")));





 VAR_3 = 1;
 if (VAR_5 != ((void*)0))
 {
  FUNC_7(VAR_7,
           VAR_4->rd_node.dbNode,
           VAR_4->rd_id,
           FUNC_3(&(VAR_5->t_self)),
           FUNC_4(&(VAR_5->t_self)));
  FUNC_2(&VAR_7);
 }

 if (FUNC_1(VAR_6))
 {
  FUNC_5(VAR_7,
          VAR_4->rd_node.dbNode,
          VAR_4->rd_id,
          FUNC_0(VAR_6));
  FUNC_2(&VAR_7);
 }

 FUNC_6(VAR_7,
          VAR_4->rd_node.dbNode,
          VAR_4->rd_id);
 FUNC_2(&VAR_7);
}
