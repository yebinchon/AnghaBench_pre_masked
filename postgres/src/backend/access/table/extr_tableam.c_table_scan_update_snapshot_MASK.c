
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TableScanDesc ;
struct TYPE_3__ {int rs_flags; int rs_snapshot; } ;
typedef int Snapshot ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

void
FUNC_3(TableScanDesc VAR_1, Snapshot VAR_2)
{
 FUNC_0(FUNC_1(VAR_2));

 FUNC_2(VAR_2);
 VAR_1->rs_snapshot = VAR_2;
 VAR_1->rs_flags |= VAR_0;
}
