
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dbNode; } ;
struct TYPE_6__ {int rd_id; TYPE_1__ rd_node; } ;
typedef int Snapshot ;
typedef TYPE_2__* Relation ;
typedef int PREDICATELOCKTARGETTAG ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;

void
FUNC_3(Relation VAR_0, Snapshot VAR_1)
{
 PREDICATELOCKTARGETTAG VAR_2;

 if (!FUNC_2(VAR_0, VAR_1))
  return;

 FUNC_1(VAR_2,
          VAR_0->rd_node.dbNode,
          VAR_0->rd_id);
 FUNC_0(&VAR_2);
}
