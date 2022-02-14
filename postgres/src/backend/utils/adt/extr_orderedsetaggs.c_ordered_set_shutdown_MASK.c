
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* qstate; int * sortstate; } ;
struct TYPE_3__ {scalar_t__ tupslot; } ;
typedef TYPE_2__ OSAPerGroupState ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(Datum VAR_0)
{
 OSAPerGroupState *VAR_1 = (OSAPerGroupState *) FUNC_0(VAR_0);


 if (VAR_1->sortstate)
  FUNC_2(VAR_1->sortstate);
 VAR_1->sortstate = ((void*)0);

 if (VAR_1->qstate->tupslot)
  FUNC_1(VAR_1->qstate->tupslot);
}
