
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oprright; int oprleft; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_operator ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,int ) ;

void
FUNC_6(Oid VAR_2, Oid *VAR_3, Oid *VAR_4)
{
 HeapTuple VAR_5;
 Form_pg_operator VAR_6;

 VAR_5 = FUNC_4(VAR_1, FUNC_2(VAR_2));
 if (!FUNC_1(VAR_5))
  FUNC_5(VAR_0, "cache lookup failed for operator %u", VAR_2);
 VAR_6 = (Form_pg_operator) FUNC_0(VAR_5);
 *VAR_3 = VAR_6->oprleft;
 *VAR_4 = VAR_6->oprright;
 FUNC_3(VAR_5);
}
