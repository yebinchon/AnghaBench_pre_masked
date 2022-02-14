
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fdw_state; } ;
struct TYPE_4__ {int * conn; scalar_t__ result; } ;
typedef TYPE_1__ PgFdwDirectModifyState ;
typedef TYPE_2__ ForeignScanState ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(ForeignScanState *VAR_0)
{
 PgFdwDirectModifyState *VAR_1 = (PgFdwDirectModifyState *) VAR_0->fdw_state;


 if (VAR_1 == ((void*)0))
  return;


 if (VAR_1->result)
  FUNC_0(VAR_1->result);


 FUNC_1(VAR_1->conn);
 VAR_1->conn = ((void*)0);


}
