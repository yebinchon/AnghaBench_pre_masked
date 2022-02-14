
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int SxactGlobalXmin; } ;
struct TYPE_6__ {int dbNode; } ;
struct TYPE_7__ {int rd_id; TYPE_1__ rd_node; } ;
typedef TYPE_2__* Relation ;
typedef int PREDICATELOCKTARGETTAG ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 TYPE_5__* VAR_1 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int) ;

void
FUNC_9(Relation VAR_3, BlockNumber VAR_4,
        BlockNumber VAR_5)
{
 PREDICATELOCKTARGETTAG VAR_6;
 PREDICATELOCKTARGETTAG VAR_7;
 bool VAR_8;
 if (!FUNC_7(VAR_1->SxactGlobalXmin))
  return;

 if (!FUNC_5(VAR_3))
  return;

 FUNC_0(VAR_4 != VAR_5);
 FUNC_0(FUNC_1(VAR_4));
 FUNC_0(FUNC_1(VAR_5));

 FUNC_6(VAR_6,
         VAR_3->rd_node.dbNode,
         VAR_3->rd_id,
         VAR_4);
 FUNC_6(VAR_7,
         VAR_3->rd_node.dbNode,
         VAR_3->rd_id,
         VAR_5);

 FUNC_3(VAR_2, VAR_0);





 VAR_8 = FUNC_8(VAR_6,
            VAR_7,
            0);

 if (!VAR_8)
 {






  VAR_8 = FUNC_2(&VAR_6,
           &VAR_7);
  FUNC_0(VAR_8);
  VAR_8 = FUNC_8(VAR_6,
             VAR_7,
             1);
  FUNC_0(VAR_8);
 }

 FUNC_4(VAR_2);
}
