
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ typtype; int oid; } ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

void
FUNC_8(HeapTuple VAR_4)
{
 Form_pg_type VAR_5 = (Form_pg_type) FUNC_0(VAR_4);


 if (VAR_5->typtype != VAR_3)
  FUNC_3(VAR_2,
    (FUNC_4(VAR_1),
     FUNC_5("%s is not a domain",
      FUNC_6(VAR_5->oid))));


 if (!FUNC_7(VAR_5->oid, FUNC_1()))
  FUNC_2(VAR_0, VAR_5->oid);
}
