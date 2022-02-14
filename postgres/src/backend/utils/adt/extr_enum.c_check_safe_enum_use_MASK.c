
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_6__ {int enumtypid; int enumlabel; int oid; } ;
struct TYPE_5__ {int t_data; } ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_enum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int ,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(HeapTuple VAR_2)
{
 TransactionId VAR_3;
 Form_pg_enum VAR_4 = (Form_pg_enum) FUNC_1(VAR_2);





 if (FUNC_3(VAR_2->t_data))
  return;





 VAR_3 = FUNC_2(VAR_2->t_data);
 if (!FUNC_6(VAR_3) &&
  FUNC_5(VAR_3))
  return;







 if (!FUNC_0(VAR_4->oid))
  return;





 FUNC_7(VAR_1,
   (FUNC_8(VAR_0),
    FUNC_10("unsafe use of new value \"%s\" of enum type %s",
     FUNC_4(VAR_4->enumlabel),
     FUNC_11(VAR_4->enumtypid)),
    FUNC_9("New enum values must be committed before they can be used.")));
}
