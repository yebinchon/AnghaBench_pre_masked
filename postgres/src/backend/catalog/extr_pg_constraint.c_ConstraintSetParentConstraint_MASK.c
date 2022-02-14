
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ coninhcount; scalar_t__ conparentid; int conislocal; } ;
struct TYPE_10__ {int t_self; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int ObjectAddress ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_constraint ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_7 ;
 TYPE_1__* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,scalar_t__,int ,int ) ;
 int FUNC_10 (int ,char*,scalar_t__) ;
 TYPE_1__* FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *,int *,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;

void
FUNC_15(Oid VAR_8,
         Oid VAR_9,
         Oid VAR_10)
{
 Relation VAR_11;
 Form_pg_constraint VAR_12;
 HeapTuple VAR_13,
    VAR_14;
 ObjectAddress VAR_15;
 ObjectAddress VAR_16;

 VAR_11 = FUNC_14(VAR_1, VAR_7);
 VAR_13 = FUNC_8(VAR_0, FUNC_5(VAR_8));
 if (!FUNC_3(VAR_13))
  FUNC_10(VAR_4, "cache lookup failed for constraint %u", VAR_8);
 VAR_14 = FUNC_11(VAR_13);
 VAR_12 = (Form_pg_constraint) FUNC_2(VAR_14);
 if (FUNC_6(VAR_9))
 {

  FUNC_0(VAR_12->coninhcount == 0);
  if (VAR_12->conparentid != VAR_5)
   FUNC_10(VAR_4, "constraint %u already has a parent constraint",
     VAR_8);

  VAR_12->conislocal = 0;
  VAR_12->coninhcount++;
  VAR_12->conparentid = VAR_9;

  FUNC_1(VAR_11, &VAR_13->t_self, VAR_14);

  FUNC_4(VAR_15, VAR_1, VAR_8);

  FUNC_4(VAR_16, VAR_1, VAR_9);
  FUNC_12(&VAR_15, &VAR_16, VAR_2);

  FUNC_4(VAR_16, VAR_6, VAR_10);
  FUNC_12(&VAR_15, &VAR_16, VAR_3);
 }
 else
 {
  VAR_12->coninhcount--;
  VAR_12->conislocal = 1;
  VAR_12->conparentid = VAR_5;


  FUNC_0(VAR_12->coninhcount == 0);

  FUNC_1(VAR_11, &VAR_13->t_self, VAR_14);

  FUNC_9(VAR_1, VAR_8,
          VAR_1,
          VAR_2);
  FUNC_9(VAR_1, VAR_8,
          VAR_6,
          VAR_3);
 }

 FUNC_7(VAR_13);
 FUNC_13(VAR_11, VAR_7);
}
