
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int Value ;
struct TYPE_14__ {int objectType; int newschema; scalar_t__ object; } ;
struct TYPE_13__ {int objectId; int classId; } ;
typedef int * Relation ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef TYPE_2__ AlterObjectSchemaStmt ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_1__ FUNC_2 (TYPE_2__*,int *) ;
 TYPE_1__ FUNC_3 (int ,int ,int,int *) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__,int ,int ) ;
 int VAR_5 ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,char*,int) ;
 TYPE_1__ FUNC_9 (int,scalar_t__,int **,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int * FUNC_12 (int ,int ) ;

ObjectAddress
FUNC_13(AlterObjectSchemaStmt *VAR_6,
        ObjectAddress *VAR_7)
{
 ObjectAddress VAR_8;
 Oid VAR_9;

 switch (VAR_6->objectType)
 {
  case 145:
   VAR_8 = FUNC_0(FUNC_10((Value *) VAR_6->object), VAR_6->newschema,
             VAR_7 ? &VAR_9 : ((void*)0));
   break;

  case 144:
  case 136:
  case 134:
  case 128:
  case 142:
   VAR_8 = FUNC_2(VAR_6,
            VAR_7 ? &VAR_9 : ((void*)0));
   break;

  case 146:
  case 129:
   VAR_8 = FUNC_3(FUNC_7(VAR_3, VAR_6->object), VAR_6->newschema,
           VAR_6->objectType,
           VAR_7 ? &VAR_9 : ((void*)0));
   break;


  case 149:
  case 148:
  case 147:
  case 143:
  case 140:
  case 141:
  case 139:
  case 138:
  case 137:
  case 135:
  case 133:
  case 132:
  case 131:
  case 130:
   {
    Relation VAR_10;
    Relation VAR_11;
    Oid VAR_12;
    Oid VAR_13;

    VAR_8 = FUNC_9(VAR_6->objectType,
            VAR_6->object,
            &VAR_11,
            VAR_0,
            0);
    FUNC_4(VAR_11 == ((void*)0));
    VAR_12 = VAR_8.classId;
    VAR_10 = FUNC_12(VAR_12, VAR_5);
    VAR_13 = FUNC_5(VAR_6->newschema);

    VAR_9 = FUNC_1(VAR_10, VAR_8.objectId,
                VAR_13);
    FUNC_11(VAR_10, VAR_5);
   }
   break;

  default:
   FUNC_8(VAR_1, "unrecognized AlterObjectSchemaStmt type: %d",
     (int) VAR_6->objectType);
   return VAR_2;
 }

 if (VAR_7)
  FUNC_6(*VAR_7, VAR_4, VAR_9);

 return VAR_8;
}
