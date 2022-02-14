
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int oldNode; int excludeOpNames; int indexParams; int accessMethod; } ;
struct TYPE_9__ {int relNode; } ;
struct TYPE_10__ {TYPE_2__ rd_node; TYPE_1__* rd_rel; } ;
struct TYPE_8__ {scalar_t__ relkind; } ;
typedef TYPE_3__* Relation ;
typedef int Oid ;
typedef TYPE_4__ IndexStmt ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(Oid VAR_2, IndexStmt *VAR_3)
{
 if (FUNC_0(VAR_2,
        VAR_3->accessMethod,
        VAR_3->indexParams,
        VAR_3->excludeOpNames))
 {
  Relation VAR_4 = FUNC_2(VAR_2, VAR_0);


  if (VAR_4->rd_rel->relkind != VAR_1)
   VAR_3->oldNode = VAR_4->rd_node.relNode;
  FUNC_1(VAR_4, VAR_0);
 }
}
