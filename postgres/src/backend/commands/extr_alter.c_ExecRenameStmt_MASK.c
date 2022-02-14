
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_25__ {int objectId; int classId; } ;
struct TYPE_24__ {int renameType; int newname; int object; int subname; int relation; } ;
typedef TYPE_1__ RenameStmt ;
typedef int * Relation ;
typedef TYPE_2__ ObjectAddress ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_2__ FUNC_2 (TYPE_1__*) ;
 TYPE_2__ FUNC_3 (int ,int ) ;
 TYPE_2__ FUNC_4 (TYPE_1__*) ;
 TYPE_2__ FUNC_5 (int ,int ,int ) ;
 TYPE_2__ FUNC_6 (int ,int ) ;
 TYPE_2__ FUNC_7 (int ,int ) ;
 TYPE_2__ FUNC_8 (int ,int ) ;
 TYPE_2__ FUNC_9 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_10 (int ,char*,int) ;
 TYPE_2__ FUNC_11 (int,int ,int **,int ,int) ;
 TYPE_2__ FUNC_12 (TYPE_1__*) ;
 TYPE_2__ FUNC_13 (TYPE_1__*) ;
 TYPE_2__ FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int *,int ) ;
 int * FUNC_16 (int ,int ) ;

ObjectAddress
FUNC_17(RenameStmt *VAR_4)
{
 switch (VAR_4->renameType)
 {
  case 137:
  case 158:
   return FUNC_2(VAR_4);

  case 160:
   return FUNC_3(VAR_4->subname, VAR_4->newname);

  case 144:
   return FUNC_6(VAR_4->subname, VAR_4->newname);

  case 141:
   return FUNC_7(VAR_4->subname, VAR_4->newname);

  case 135:
   return FUNC_8(VAR_4->subname, VAR_4->newname);

  case 136:
  case 140:
  case 128:
  case 150:
  case 152:
  case 154:
   return FUNC_4(VAR_4);

  case 162:
  case 164:
   return FUNC_13(VAR_4);

  case 142:
   return FUNC_5(VAR_4->relation, VAR_4->subname,
          VAR_4->newname);

  case 134:
   return FUNC_14(VAR_4);

  case 147:
   return FUNC_12(VAR_4);

  case 159:
  case 129:
   return FUNC_9(VAR_4);

  case 165:
  case 163:
  case 161:
  case 157:
  case 156:
  case 155:
  case 153:
  case 149:
  case 148:
  case 151:
  case 146:
  case 143:
  case 139:
  case 133:
  case 132:
  case 131:
  case 130:
  case 145:
  case 138:
   {
    ObjectAddress VAR_5;
    Relation VAR_6;
    Relation VAR_7;

    VAR_5 = FUNC_11(VAR_4->renameType,
            VAR_4->object,
            &VAR_7,
            VAR_0, 0);
    FUNC_1(VAR_7 == ((void*)0));

    VAR_6 = FUNC_16(VAR_5.classId, VAR_3);
    FUNC_0(VAR_6,
             VAR_5.objectId,
             VAR_4->newname);
    FUNC_15(VAR_6, VAR_3);

    return VAR_5;
   }

  default:
   FUNC_10(VAR_1, "unrecognized rename stmt type: %d",
     (int) VAR_4->renameType);
   return VAR_2;
 }
}
