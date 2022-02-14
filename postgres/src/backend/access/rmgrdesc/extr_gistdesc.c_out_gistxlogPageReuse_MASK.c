
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int relNode; int dbNode; int spcNode; } ;
struct TYPE_5__ {int latestRemovedFullXid; int block; TYPE_1__ node; } ;
typedef TYPE_2__ gistxlogPageReuse ;
typedef int StringInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(StringInfo VAR_0, gistxlogPageReuse *VAR_1)
{
 FUNC_2(VAR_0, "rel %u/%u/%u; blk %u; latestRemovedXid %u:%u",
      VAR_1->node.spcNode, VAR_1->node.dbNode,
      VAR_1->node.relNode, VAR_1->block,
      FUNC_0(VAR_1->latestRemovedFullXid),
      FUNC_1(VAR_1->latestRemovedFullXid));
}
