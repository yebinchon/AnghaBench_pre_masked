
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ typtype; } ;
struct TYPE_7__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_type ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_7 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

void
FUNC_11(Oid VAR_6)
{
 Relation VAR_7;
 HeapTuple VAR_8;

 VAR_7 = FUNC_10(VAR_5, VAR_1);

 VAR_8 = FUNC_7(VAR_2, FUNC_4(VAR_6));
 if (!FUNC_3(VAR_8))
  FUNC_8(VAR_0, "cache lookup failed for type %u", VAR_6);

 FUNC_0(VAR_7, &VAR_8->t_self);






 if (((Form_pg_type) FUNC_2(VAR_8))->typtype == VAR_3)
  FUNC_1(VAR_6);






 if (((Form_pg_type) FUNC_2(VAR_8))->typtype == VAR_4)
  FUNC_5(VAR_6);

 FUNC_6(VAR_8);

 FUNC_9(VAR_7, VAR_1);
}
