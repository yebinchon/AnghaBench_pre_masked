
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ relchecks; } ;
struct TYPE_12__ {scalar_t__ contype; int contypid; int conrelid; } ;
struct TYPE_11__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_constraint ;
typedef TYPE_3__* Form_pg_class ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_8 ;
 TYPE_1__* FUNC_8 (int ,int ) ;
 TYPE_1__* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;

void
FUNC_14(Oid VAR_9)
{
 Relation VAR_10;
 HeapTuple VAR_11;
 Form_pg_constraint VAR_12;

 VAR_10 = FUNC_13(VAR_3, VAR_8);

 VAR_11 = FUNC_8(VAR_2, FUNC_4(VAR_9));
 if (!FUNC_3(VAR_11))
  FUNC_10(VAR_4, "cache lookup failed for constraint %u", VAR_9);
 VAR_12 = (Form_pg_constraint) FUNC_2(VAR_11);




 if (FUNC_5(VAR_12->conrelid))
 {
  Relation VAR_13;





  VAR_13 = FUNC_13(VAR_12->conrelid, VAR_0);






  if (VAR_12->contype == VAR_1)
  {
   Relation VAR_14;
   HeapTuple VAR_15;
   Form_pg_class VAR_16;

   VAR_14 = FUNC_13(VAR_7, VAR_8);
   VAR_15 = FUNC_9(VAR_6,
           FUNC_4(VAR_12->conrelid));
   if (!FUNC_3(VAR_15))
    FUNC_10(VAR_4, "cache lookup failed for relation %u",
      VAR_12->conrelid);
   VAR_16 = (Form_pg_class) FUNC_2(VAR_15);

   if (VAR_16->relchecks == 0)
    FUNC_10(VAR_4, "relation \"%s\" has relchecks = 0",
      FUNC_6(VAR_13));
   VAR_16->relchecks--;

   FUNC_1(VAR_14, &VAR_15->t_self, VAR_15);

   FUNC_11(VAR_15);

   FUNC_12(VAR_14, VAR_8);
  }


  FUNC_12(VAR_13, VAR_5);
 }
 else if (FUNC_5(VAR_12->contypid))
 {






 }
 else
  FUNC_10(VAR_4, "constraint %u is not of a known type", VAR_9);


 FUNC_0(VAR_10, &VAR_11->t_self);


 FUNC_7(VAR_11);
 FUNC_12(VAR_10, VAR_8);
}
