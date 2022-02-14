
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dim1; int values; } ;
struct TYPE_4__ {TYPE_1__ proargtypes; scalar_t__ pronargs; int prorettype; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_proc ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int *,int ,int) ;
 scalar_t__ FUNC_8 (int) ;

Oid
FUNC_9(Oid VAR_2, Oid **VAR_3, int *VAR_4)
{
 HeapTuple VAR_5;
 Form_pg_proc VAR_6;
 Oid VAR_7;

 VAR_5 = FUNC_5(VAR_1, FUNC_3(VAR_2));
 if (!FUNC_2(VAR_5))
  FUNC_6(VAR_0, "cache lookup failed for function %u", VAR_2);

 VAR_6 = (Form_pg_proc) FUNC_1(VAR_5);

 VAR_7 = VAR_6->prorettype;
 *VAR_4 = (int) VAR_6->pronargs;
 FUNC_0(*VAR_4 == VAR_6->proargtypes.dim1);
 *VAR_3 = (Oid *) FUNC_8(*VAR_4 * sizeof(Oid));
 FUNC_7(*VAR_3, VAR_6->proargtypes.values, *VAR_4 * sizeof(Oid));

 FUNC_4(VAR_5);
 return VAR_7;
}
