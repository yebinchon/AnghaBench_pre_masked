
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int latestRemovedXid; } ;
struct TYPE_6__ {int rd_node; } ;
typedef TYPE_1__* Relation ;
typedef TYPE_2__ LVRelStats ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(Relation VAR_0, LVRelStats *VAR_1)
{




 if (!FUNC_0(VAR_0) || !FUNC_2())
  return;




 if (FUNC_1(VAR_1->latestRemovedXid))
  (void) FUNC_3(VAR_0->rd_node, VAR_1->latestRemovedXid);
}
