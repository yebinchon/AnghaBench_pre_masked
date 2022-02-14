
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ oprright; scalar_t__ oprleft; int oprname; int oprnamespace; } ;
typedef int Oid ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_operator ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int *,int ) ;
 int * FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;

void
FUNC_12(Oid VAR_3, List **VAR_4, List **VAR_5)
{
 HeapTuple VAR_6;
 Form_pg_operator VAR_7;

 VAR_6 = FUNC_5(VAR_2, FUNC_3(VAR_3));
 if (!FUNC_1(VAR_6))
  FUNC_6(VAR_0, "cache lookup failed for operator with OID %u",
    VAR_3);

 VAR_7 = (Form_pg_operator) FUNC_0(VAR_6);
 *VAR_4 = FUNC_10(FUNC_8(VAR_7->oprnamespace),
         FUNC_11(FUNC_2(VAR_7->oprname)));
 *VAR_5 = VAR_1;
 if (VAR_7->oprleft)
  *VAR_5 = FUNC_9(*VAR_5,
         FUNC_7(VAR_7->oprleft));
 if (VAR_7->oprright)
  *VAR_5 = FUNC_9(*VAR_5,
         FUNC_7(VAR_7->oprright));

 FUNC_4(VAR_6);
}
