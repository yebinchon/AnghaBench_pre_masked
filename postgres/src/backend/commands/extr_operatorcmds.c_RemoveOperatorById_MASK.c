
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ oprcom; scalar_t__ oprnegate; } ;
struct TYPE_7__ {int t_self; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_operator ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

void
FUNC_11(Oid VAR_4)
{
 Relation VAR_5;
 HeapTuple VAR_6;
 Form_pg_operator VAR_7;

 VAR_5 = FUNC_10(VAR_2, VAR_3);

 VAR_6 = FUNC_7(VAR_1, FUNC_3(VAR_4));
 if (!FUNC_2(VAR_6))
  FUNC_8(VAR_0, "cache lookup failed for operator %u", VAR_4);
 VAR_7 = (Form_pg_operator) FUNC_1(VAR_6);







 if (FUNC_4(VAR_7->oprcom) || FUNC_4(VAR_7->oprnegate))
 {
  FUNC_5(VAR_4, VAR_7->oprcom, VAR_7->oprnegate, 1);
  if (VAR_4 == VAR_7->oprcom || VAR_4 == VAR_7->oprnegate)
  {
   FUNC_6(VAR_6);
   VAR_6 = FUNC_7(VAR_1, FUNC_3(VAR_4));
   if (!FUNC_2(VAR_6))
    FUNC_8(VAR_0, "cache lookup failed for operator %u", VAR_4);
  }
 }

 FUNC_0(VAR_5, &VAR_6->t_self);

 FUNC_6(VAR_6);

 FUNC_9(VAR_5, VAR_3);
}
