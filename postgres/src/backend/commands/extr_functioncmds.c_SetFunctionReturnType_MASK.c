
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ prorettype; } ;
struct TYPE_7__ {int t_self; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int ObjectAddress ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_proc ;


 int FUNC_0 (int ,int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int VAR_6 ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

void
FUNC_10(Oid VAR_7, Oid VAR_8)
{
 Relation VAR_9;
 HeapTuple VAR_10;
 Form_pg_proc VAR_11;
 ObjectAddress VAR_12;
 ObjectAddress VAR_13;

 VAR_9 = FUNC_9(VAR_4, VAR_5);

 VAR_10 = FUNC_5(VAR_3, FUNC_4(VAR_7));
 if (!FUNC_2(VAR_10))
  FUNC_6(VAR_1, "cache lookup failed for function %u", VAR_7);
 VAR_11 = (Form_pg_proc) FUNC_1(VAR_10);

 if (VAR_11->prorettype != VAR_2)
  FUNC_6(VAR_1, "function %u doesn't return OPAQUE", VAR_7);


 VAR_11->prorettype = VAR_8;


 FUNC_0(VAR_9, &VAR_10->t_self, VAR_10);

 FUNC_8(VAR_9, VAR_5);





 FUNC_3(VAR_13, VAR_6, VAR_8);
 FUNC_3(VAR_12, VAR_4, VAR_7);
 FUNC_7(&VAR_12, &VAR_13, VAR_0);
}
