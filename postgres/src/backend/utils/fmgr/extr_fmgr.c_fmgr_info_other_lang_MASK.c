
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int fn_addr; } ;
struct TYPE_7__ {int lanplcallfoid; } ;
struct TYPE_6__ {int prolang; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_proc ;
typedef TYPE_2__* Form_pg_language ;
typedef TYPE_3__ FmgrInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,TYPE_3__*,int ,int) ;

__attribute__((used)) static void
FUNC_7(Oid VAR_3, FmgrInfo *VAR_4, HeapTuple VAR_5)
{
 Form_pg_proc VAR_6 = (Form_pg_proc) FUNC_0(VAR_5);
 Oid VAR_7 = VAR_6->prolang;
 HeapTuple VAR_8;
 Form_pg_language VAR_9;
 FmgrInfo VAR_10;

 VAR_8 = FUNC_4(VAR_2, FUNC_2(VAR_7));
 if (!FUNC_1(VAR_8))
  FUNC_5(VAR_1, "cache lookup failed for language %u", VAR_7);
 VAR_9 = (Form_pg_language) FUNC_0(VAR_8);






 FUNC_6(VAR_9->lanplcallfoid, &VAR_10,
         VAR_0, 1);
 VAR_4->fn_addr = VAR_10.fn_addr;

 FUNC_3(VAR_8);
}
