
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int Value ;
struct TYPE_16__ {int objectType; scalar_t__ object; int newowner; } ;
struct TYPE_15__ {int objectId; int classId; } ;
typedef int * Relation ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef TYPE_2__ AlterOwnerStmt ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int ,int ) ;
 TYPE_1__ FUNC_1 (int ,int ) ;
 TYPE_1__ FUNC_2 (int ,int ) ;
 TYPE_1__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 TYPE_1__ FUNC_5 (int ,int ) ;
 TYPE_1__ FUNC_6 (int ,int ) ;
 TYPE_1__ FUNC_7 (int ,int ) ;
 TYPE_1__ FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ,char*,int) ;
 TYPE_1__ FUNC_12 (int,scalar_t__,int **,int ,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ) ;
 int * FUNC_16 (int ,int ) ;

ObjectAddress
FUNC_17(AlterOwnerStmt *VAR_7)
{
 Oid VAR_8 = FUNC_13(VAR_7->newowner, 0);

 switch (VAR_7->objectType)
 {
  case 148:
   return FUNC_0(FUNC_14((Value *) VAR_7->object), VAR_8);

  case 134:
   return FUNC_6(FUNC_14((Value *) VAR_7->object), VAR_8);

  case 128:
  case 147:
   return FUNC_8(FUNC_10(VAR_5, VAR_7->object), VAR_8, VAR_7->objectType);
   break;

  case 145:
   return FUNC_2(FUNC_14((Value *) VAR_7->object),
            VAR_8);

  case 144:
   return FUNC_3(FUNC_14((Value *) VAR_7->object),
             VAR_8);

  case 146:
   return FUNC_1(FUNC_14((Value *) VAR_7->object),
            VAR_8);

  case 136:
   return FUNC_5(FUNC_14((Value *) VAR_7->object),
           VAR_8);

  case 132:
   return FUNC_7(FUNC_14((Value *) VAR_7->object),
            VAR_8);


  case 151:
  case 150:
  case 149:
  case 143:
  case 142:
  case 141:
  case 139:
  case 140:
  case 138:
  case 137:
  case 135:
  case 133:
  case 131:
  case 129:
  case 130:
   {
    Relation VAR_9;
    Relation VAR_10;
    Oid VAR_11;
    ObjectAddress VAR_12;

    VAR_12 = FUNC_12(VAR_7->objectType,
            VAR_7->object,
            &VAR_10,
            VAR_0,
            0);
    FUNC_9(VAR_10 == ((void*)0));
    VAR_11 = VAR_12.classId;






    if (VAR_11 == VAR_4)
     VAR_11 = VAR_3;

    VAR_9 = FUNC_16(VAR_11, VAR_6);

    FUNC_4(VAR_9, VAR_12.objectId, VAR_8);
    FUNC_15(VAR_9, VAR_6);

    return VAR_12;
   }
   break;

  default:
   FUNC_11(VAR_1, "unrecognized AlterOwnerStmt type: %d",
     (int) VAR_7->objectType);
   return VAR_2;
 }
}
