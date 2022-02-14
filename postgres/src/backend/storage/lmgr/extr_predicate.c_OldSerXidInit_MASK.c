
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int do_fsync; int PagePrecedes; } ;
struct TYPE_5__ {int headPage; void* tailXid; void* headXid; } ;
typedef int OldSerXidControlData ;
typedef TYPE_1__* OldSerXidControl ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 scalar_t__ FUNC_1 (char*,int,int*) ;
 int FUNC_2 (TYPE_3__*,char*,int ,int ,int ,char*,int ) ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static void
FUNC_3(void)
{
 bool VAR_8;




 VAR_6->PagePrecedes = VAR_5;
 FUNC_2(VAR_6, "oldserxid",
      VAR_3, 0, VAR_4, "pg_serial",
      VAR_2);

 VAR_6->do_fsync = 0;




 VAR_7 = (OldSerXidControl)
  FUNC_1("OldSerXidControlData", sizeof(OldSerXidControlData), &VAR_8);

 FUNC_0(VAR_8 == VAR_1);
 if (!VAR_8)
 {



  VAR_7->headPage = -1;
  VAR_7->headXid = VAR_0;
  VAR_7->tailXid = VAR_0;
 }
}
