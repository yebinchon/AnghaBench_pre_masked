
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fdwname; int fdwhandler; } ;
struct TYPE_3__ {int srvfdw; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_foreign_server ;
typedef TYPE_2__* Form_pg_foreign_data_wrapper ;
typedef int FdwRoutine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;

FdwRoutine *
FUNC_12(Oid VAR_4)
{
 HeapTuple VAR_5;
 Form_pg_foreign_data_wrapper VAR_6;
 Form_pg_foreign_server VAR_7;
 Oid VAR_8;
 Oid VAR_9;


 VAR_5 = FUNC_7(VAR_3, FUNC_4(VAR_4));
 if (!FUNC_2(VAR_5))
  FUNC_8(VAR_1, "cache lookup failed for foreign server %u", VAR_4);
 VAR_7 = (Form_pg_foreign_server) FUNC_0(VAR_5);
 VAR_8 = VAR_7->srvfdw;
 FUNC_6(VAR_5);


 VAR_5 = FUNC_7(VAR_2, FUNC_4(VAR_8));
 if (!FUNC_2(VAR_5))
  FUNC_8(VAR_1, "cache lookup failed for foreign-data wrapper %u", VAR_8);
 VAR_6 = (Form_pg_foreign_data_wrapper) FUNC_0(VAR_5);
 VAR_9 = VAR_6->fdwhandler;


 if (!FUNC_5(VAR_9))
  FUNC_9(VAR_1,
    (FUNC_10(VAR_0),
     FUNC_11("foreign-data wrapper \"%s\" has no handler",
      FUNC_3(VAR_6->fdwname))));

 FUNC_6(VAR_5);


 return FUNC_1(VAR_9);
}
