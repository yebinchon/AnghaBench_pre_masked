
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TypeName ;
struct TYPE_3__ {int skipIfNewValExists; int newValIsAfter; int newValNeighbor; int newVal; int oldVal; int typeName; } ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_1__ AlterEnumStmt ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int ) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *,int *) ;

ObjectAddress
FUNC_12(AlterEnumStmt *VAR_3)
{
 Oid VAR_4;
 TypeName *VAR_5;
 HeapTuple VAR_6;
 ObjectAddress VAR_7;


 VAR_5 = FUNC_10(VAR_3->typeName);
 VAR_4 = FUNC_11(((void*)0), VAR_5);

 VAR_6 = FUNC_7(VAR_1, FUNC_4(VAR_4));
 if (!FUNC_1(VAR_6))
  FUNC_9(VAR_0, "cache lookup failed for type %u", VAR_4);


 FUNC_8(VAR_6);

 FUNC_5(VAR_6);

 if (VAR_3->oldVal)
 {

  FUNC_6(VAR_4, VAR_3->oldVal, VAR_3->newVal);
 }
 else
 {

  FUNC_0(VAR_4, VAR_3->newVal,
      VAR_3->newValNeighbor, VAR_3->newValIsAfter,
      VAR_3->skipIfNewValExists);
 }

 FUNC_2(VAR_2, VAR_4, 0);

 FUNC_3(VAR_7, VAR_2, VAR_4);

 return VAR_7;
}
