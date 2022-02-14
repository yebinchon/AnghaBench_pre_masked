
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_3__ {int new_prune_xid; } ;
typedef TYPE_1__ PruneState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(PruneState *VAR_0, TransactionId VAR_1)
{




 FUNC_0(FUNC_1(VAR_1));
 if (!FUNC_2(VAR_0->new_prune_xid) ||
  FUNC_3(VAR_1, VAR_0->new_prune_xid))
  VAR_0->new_prune_xid = VAR_1;
}
