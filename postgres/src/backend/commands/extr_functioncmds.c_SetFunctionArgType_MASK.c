
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__* values; } ;
struct TYPE_10__ {int pronargs; TYPE_1__ proargtypes; } ;
struct TYPE_9__ {int t_self; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int ObjectAddress ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_proc ;


 int FUNC_0 (int ,int *,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_5 (int ,int ) ;
 int VAR_6 ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

void
FUNC_10(Oid VAR_7, int VAR_8, Oid VAR_9)
{
 Relation VAR_10;
 HeapTuple VAR_11;
 Form_pg_proc VAR_12;
 ObjectAddress VAR_13;
 ObjectAddress VAR_14;

 VAR_10 = FUNC_9(VAR_4, VAR_5);

 VAR_11 = FUNC_5(VAR_3, FUNC_4(VAR_7));
 if (!FUNC_2(VAR_11))
  FUNC_6(VAR_1, "cache lookup failed for function %u", VAR_7);
 VAR_12 = (Form_pg_proc) FUNC_1(VAR_11);

 if (VAR_8 < 0 || VAR_8 >= VAR_12->pronargs ||
  VAR_12->proargtypes.values[VAR_8] != VAR_2)
  FUNC_6(VAR_1, "function %u doesn't take OPAQUE", VAR_7);


 VAR_12->proargtypes.values[VAR_8] = VAR_9;


 FUNC_0(VAR_10, &VAR_11->t_self, VAR_11);

 FUNC_8(VAR_10, VAR_5);





 FUNC_3(VAR_14, VAR_6, VAR_9);
 FUNC_3(VAR_13, VAR_4, VAR_7);
 FUNC_7(&VAR_13, &VAR_14, VAR_0);
}
