
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ attrelid; } ;
struct TYPE_7__ {scalar_t__ oid; scalar_t__ relisshared; } ;
struct TYPE_6__ {scalar_t__ contype; scalar_t__ conrelid; } ;
struct TYPE_5__ {scalar_t__ indexrelid; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_index ;
typedef TYPE_2__* Form_pg_constraint ;
typedef TYPE_3__* Form_pg_class ;
typedef TYPE_4__* Form_pg_attribute ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ VAR_7 ;

void
FUNC_12(Relation VAR_8,
       HeapTuple VAR_9,
       HeapTuple VAR_10)
{
 Oid VAR_11;
 Oid VAR_12;
 Oid VAR_13;


 if (FUNC_1())
  return;






 if (!FUNC_2(VAR_8))
  return;





 if (FUNC_4(VAR_8))
  return;





 FUNC_6();




 VAR_11 = FUNC_10(VAR_8);
 if (FUNC_11(VAR_11))
 {
  VAR_12 = FUNC_3(VAR_11) ? VAR_4 : VAR_5;
  FUNC_9(VAR_12, VAR_11);
 }
 else
  FUNC_7(VAR_8, VAR_9, VAR_10,
           VAR_6);
 if (VAR_11 == VAR_7)
 {
  Form_pg_class VAR_14 = (Form_pg_class) FUNC_0(VAR_9);

  VAR_13 = VAR_14->oid;
  if (VAR_14->relisshared)
   VAR_12 = VAR_4;
  else
   VAR_12 = VAR_5;
 }
 else if (VAR_11 == VAR_0)
 {
  Form_pg_attribute VAR_15 = (Form_pg_attribute) FUNC_0(VAR_9);

  VAR_13 = VAR_15->attrelid;
  VAR_12 = VAR_5;
 }
 else if (VAR_11 == VAR_3)
 {
  Form_pg_index VAR_16 = (Form_pg_index) FUNC_0(VAR_9);







  VAR_13 = VAR_16->indexrelid;
  VAR_12 = VAR_5;
 }
 else if (VAR_11 == VAR_2)
 {
  Form_pg_constraint VAR_17 = (Form_pg_constraint) FUNC_0(VAR_9);





  if (VAR_17->contype == VAR_1 &&
   FUNC_5(VAR_17->conrelid))
  {
   VAR_13 = VAR_17->conrelid;
   VAR_12 = VAR_5;
  }
  else
   return;
 }
 else
  return;




 FUNC_8(VAR_12, VAR_13);
}
