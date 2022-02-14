
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fdw_state; } ;
struct TYPE_4__ {int * conn; int cursor_number; scalar_t__ cursor_exists; } ;
typedef TYPE_1__ PgFdwScanState ;
typedef TYPE_2__ ForeignScanState ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(ForeignScanState *VAR_0)
{
 PgFdwScanState *VAR_1 = (PgFdwScanState *) VAR_0->fdw_state;


 if (VAR_1 == ((void*)0))
  return;


 if (VAR_1->cursor_exists)
  FUNC_1(VAR_1->conn, VAR_1->cursor_number);


 FUNC_0(VAR_1->conn);
 VAR_1->conn = ((void*)0);


}
