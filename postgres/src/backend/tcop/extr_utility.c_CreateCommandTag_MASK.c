
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_50__ TYPE_9__ ;
typedef struct TYPE_49__ TYPE_8__ ;
typedef struct TYPE_48__ TYPE_7__ ;
typedef struct TYPE_47__ TYPE_6__ ;
typedef struct TYPE_46__ TYPE_5__ ;
typedef struct TYPE_45__ TYPE_4__ ;
typedef struct TYPE_44__ TYPE_3__ ;
typedef struct TYPE_43__ TYPE_2__ ;
typedef struct TYPE_42__ TYPE_25__ ;
typedef struct TYPE_41__ TYPE_24__ ;
typedef struct TYPE_40__ TYPE_23__ ;
typedef struct TYPE_39__ TYPE_22__ ;
typedef struct TYPE_38__ TYPE_21__ ;
typedef struct TYPE_37__ TYPE_20__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_19__ ;
typedef struct TYPE_34__ TYPE_18__ ;
typedef struct TYPE_33__ TYPE_17__ ;
typedef struct TYPE_32__ TYPE_16__ ;
typedef struct TYPE_31__ TYPE_15__ ;
typedef struct TYPE_30__ TYPE_14__ ;
typedef struct TYPE_29__ TYPE_13__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


struct TYPE_36__ {int kind; } ;
typedef TYPE_1__ VariableSetStmt ;
struct TYPE_43__ {int is_vacuumcmd; } ;
typedef TYPE_2__ VacuumStmt ;
struct TYPE_44__ {int kind; } ;
typedef TYPE_3__ TransactionStmt ;
struct TYPE_50__ {int strength; } ;
struct TYPE_49__ {scalar_t__ commandType; int * utilityStmt; int rowMarks; } ;
struct TYPE_48__ {scalar_t__ commandType; int * utilityStmt; int rowMarks; } ;
struct TYPE_47__ {int * stmt; } ;
struct TYPE_46__ {int renameType; int relationType; } ;
struct TYPE_45__ {int strength; } ;
struct TYPE_42__ {int objtype; } ;
struct TYPE_41__ {int objectType; } ;
struct TYPE_40__ {int objectType; } ;
struct TYPE_39__ {int objectType; } ;
struct TYPE_38__ {int objtype; } ;
struct TYPE_37__ {int relkind; } ;
struct TYPE_35__ {int * portalname; } ;
struct TYPE_34__ {int is_procedure; } ;
struct TYPE_33__ {int is_select_into; int relkind; } ;
struct TYPE_32__ {int * name; } ;
struct TYPE_31__ {int kind; } ;
struct TYPE_30__ {int target; } ;
struct TYPE_29__ {int removeType; } ;
struct TYPE_28__ {int ismove; } ;
struct TYPE_27__ {int is_grant; } ;
struct TYPE_26__ {int is_grant; } ;
typedef TYPE_4__ RowMarkClause ;
typedef TYPE_5__ RenameStmt ;
typedef TYPE_6__ RawStmt ;
typedef TYPE_7__ Query ;
typedef TYPE_8__ PlannedStmt ;
typedef TYPE_9__ PlanRowMark ;
typedef int Node ;
typedef TYPE_10__ GrantStmt ;
typedef TYPE_11__ GrantRoleStmt ;
typedef TYPE_12__ FetchStmt ;
typedef TYPE_13__ DropStmt ;
typedef TYPE_14__ DiscardStmt ;
typedef TYPE_15__ DefineStmt ;
typedef TYPE_16__ DeallocateStmt ;
typedef TYPE_17__ CreateTableAsStmt ;
typedef TYPE_18__ CreateFunctionStmt ;
typedef TYPE_19__ ClosePortalStmt ;
typedef TYPE_20__ AlterTableStmt ;
typedef TYPE_21__ AlterTableMoveAllStmt ;
typedef TYPE_22__ AlterOwnerStmt ;
typedef TYPE_23__ AlterObjectSchemaStmt ;
typedef TYPE_24__ AlterObjectDependsStmt ;
typedef TYPE_25__ AlterFunctionStmt ;


 char* FUNC_0 (int ) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

const char *
FUNC_4(Node *VAR_3)
{
 const char *VAR_4;

 switch (FUNC_3(VAR_3))
 {

  case 149:
   VAR_4 = FUNC_4(((RawStmt *) VAR_3)->stmt);
   break;


  case 157:
   VAR_4 = "INSERT";
   break;

  case 174:
   VAR_4 = "DELETE";
   break;

  case 138:
   VAR_4 = "UPDATE";
   break;

  case 142:
   VAR_4 = "SELECT";
   break;


  case 141:
   {
    TransactionStmt *VAR_5 = (TransactionStmt *) VAR_3;

    switch (VAR_5->kind)
    {
     case 255:
      VAR_4 = "BEGIN";
      break;

     case 246:
      VAR_4 = "START TRANSACTION";
      break;

     case 254:
      VAR_4 = "COMMIT";
      break;

     case 250:
     case 248:
      VAR_4 = "ROLLBACK";
      break;

     case 247:
      VAR_4 = "SAVEPOINT";
      break;

     case 251:
      VAR_4 = "RELEASE";
      break;

     case 252:
      VAR_4 = "PREPARE TRANSACTION";
      break;

     case 253:
      VAR_4 = "COMMIT PREPARED";
      break;

     case 249:
      VAR_4 = "ROLLBACK PREPARED";
      break;

     default:
      VAR_4 = "???";
      break;
    }
   }
   break;

  case 176:
   VAR_4 = "DECLARE CURSOR";
   break;

  case 212:
   {
    ClosePortalStmt *VAR_6 = (ClosePortalStmt *) VAR_3;

    if (VAR_6->portalname == ((void*)0))
     VAR_4 = "CLOSE CURSOR ALL";
    else
     VAR_4 = "CLOSE CURSOR";
   }
   break;

  case 162:
   {
    FetchStmt *VAR_7 = (FetchStmt *) VAR_3;

    VAR_4 = (VAR_7->ismove) ? "MOVE" : "FETCH";
   }
   break;

  case 203:
   VAR_4 = "CREATE DOMAIN";
   break;

  case 188:
   VAR_4 = "CREATE SCHEMA";
   break;

  case 185:
   VAR_4 = "CREATE TABLE";
   break;

  case 182:
   VAR_4 = "CREATE TABLESPACE";
   break;

  case 167:
   VAR_4 = "DROP TABLESPACE";
   break;

  case 217:
   VAR_4 = "ALTER TABLESPACE";
   break;

  case 200:
   VAR_4 = "CREATE EXTENSION";
   break;

  case 237:
   VAR_4 = "ALTER EXTENSION";
   break;

  case 238:
   VAR_4 = "ALTER EXTENSION";
   break;

  case 199:
   VAR_4 = "CREATE FOREIGN DATA WRAPPER";
   break;

  case 236:
   VAR_4 = "ALTER FOREIGN DATA WRAPPER";
   break;

  case 198:
   VAR_4 = "CREATE SERVER";
   break;

  case 235:
   VAR_4 = "ALTER SERVER";
   break;

  case 179:
   VAR_4 = "CREATE USER MAPPING";
   break;

  case 215:
   VAR_4 = "ALTER USER MAPPING";
   break;

  case 166:
   VAR_4 = "DROP USER MAPPING";
   break;

  case 197:
   VAR_4 = "CREATE FOREIGN TABLE";
   break;

  case 159:
   VAR_4 = "IMPORT FOREIGN SCHEMA";
   break;

  case 169:
   switch (((DropStmt *) VAR_3)->removeType)
   {
    case 264:
     VAR_4 = "DROP TABLE";
     break;
    case 266:
     VAR_4 = "DROP SEQUENCE";
     break;
    case 256:
     VAR_4 = "DROP VIEW";
     break;
    case 276:
     VAR_4 = "DROP MATERIALIZED VIEW";
     break;
    case 278:
     VAR_4 = "DROP INDEX";
     break;
    case 257:
     VAR_4 = "DROP TYPE";
     break;
    case 285:
     VAR_4 = "DROP DOMAIN";
     break;
    case 287:
     VAR_4 = "DROP COLLATION";
     break;
    case 286:
     VAR_4 = "DROP CONVERSION";
     break;
    case 267:
     VAR_4 = "DROP SCHEMA";
     break;
    case 259:
     VAR_4 = "DROP TEXT SEARCH PARSER";
     break;
    case 260:
     VAR_4 = "DROP TEXT SEARCH DICTIONARY";
     break;
    case 258:
     VAR_4 = "DROP TEXT SEARCH TEMPLATE";
     break;
    case 261:
     VAR_4 = "DROP TEXT SEARCH CONFIGURATION";
     break;
    case 280:
     VAR_4 = "DROP FOREIGN TABLE";
     break;
    case 283:
     VAR_4 = "DROP EXTENSION";
     break;
    case 279:
     VAR_4 = "DROP FUNCTION";
     break;
    case 271:
     VAR_4 = "DROP PROCEDURE";
     break;
    case 269:
     VAR_4 = "DROP ROUTINE";
     break;
    case 289:
     VAR_4 = "DROP AGGREGATE";
     break;
    case 274:
     VAR_4 = "DROP OPERATOR";
     break;
    case 277:
     VAR_4 = "DROP LANGUAGE";
     break;
    case 288:
     VAR_4 = "DROP CAST";
     break;
    case 262:
     VAR_4 = "DROP TRIGGER";
     break;
    case 284:
     VAR_4 = "DROP EVENT TRIGGER";
     break;
    case 268:
     VAR_4 = "DROP RULE";
     break;
    case 282:
     VAR_4 = "DROP FOREIGN DATA WRAPPER";
     break;
    case 281:
     VAR_4 = "DROP SERVER";
     break;
    case 275:
     VAR_4 = "DROP OPERATOR CLASS";
     break;
    case 273:
     VAR_4 = "DROP OPERATOR FAMILY";
     break;
    case 272:
     VAR_4 = "DROP POLICY";
     break;
    case 263:
     VAR_4 = "DROP TRANSFORM";
     break;
    case 290:
     VAR_4 = "DROP ACCESS METHOD";
     break;
    case 270:
     VAR_4 = "DROP PUBLICATION";
     break;
    case 265:
     VAR_4 = "DROP STATISTICS";
     break;
    default:
     VAR_4 = "???";
   }
   break;

  case 140:
   VAR_4 = "TRUNCATE TABLE";
   break;

  case 210:
   VAR_4 = "COMMENT";
   break;

  case 143:
   VAR_4 = "SECURITY LABEL";
   break;

  case 207:
   VAR_4 = "COPY";
   break;

  case 145:




   VAR_4 = FUNC_0(
    ((RenameStmt *) VAR_3)->renameType == VAR_1 ?
    ((RenameStmt *) VAR_3)->relationType :
    ((RenameStmt *) VAR_3)->renameType);
   break;

  case 233:
   VAR_4 = FUNC_0(((AlterObjectDependsStmt *) VAR_3)->objectType);
   break;

  case 232:
   VAR_4 = FUNC_0(((AlterObjectSchemaStmt *) VAR_3)->objectType);
   break;

  case 229:
   VAR_4 = FUNC_0(((AlterOwnerStmt *) VAR_3)->objectType);
   break;

  case 218:
   VAR_4 = FUNC_0(((AlterTableMoveAllStmt *) VAR_3)->objtype);
   break;

  case 216:
   VAR_4 = FUNC_0(((AlterTableStmt *) VAR_3)->relkind);
   break;

  case 241:
   VAR_4 = "ALTER DOMAIN";
   break;

  case 234:
   switch (((AlterFunctionStmt *) VAR_3)->objtype)
   {
    case 279:
     VAR_4 = "ALTER FUNCTION";
     break;
    case 271:
     VAR_4 = "ALTER PROCEDURE";
     break;
    case 269:
     VAR_4 = "ALTER ROUTINE";
     break;
    default:
     VAR_4 = "???";
   }
   break;

  case 160:
   {
    GrantStmt *VAR_8 = (GrantStmt *) VAR_3;

    VAR_4 = (VAR_8->is_grant) ? "GRANT" : "REVOKE";
   }
   break;

  case 161:
   {
    GrantRoleStmt *VAR_9 = (GrantRoleStmt *) VAR_3;

    VAR_4 = (VAR_9->is_grant) ? "GRANT ROLE" : "REVOKE ROLE";
   }
   break;

  case 242:
   VAR_4 = "ALTER DEFAULT PRIVILEGES";
   break;

  case 175:
   switch (((DefineStmt *) VAR_3)->kind)
   {
    case 289:
     VAR_4 = "CREATE AGGREGATE";
     break;
    case 274:
     VAR_4 = "CREATE OPERATOR";
     break;
    case 257:
     VAR_4 = "CREATE TYPE";
     break;
    case 259:
     VAR_4 = "CREATE TEXT SEARCH PARSER";
     break;
    case 260:
     VAR_4 = "CREATE TEXT SEARCH DICTIONARY";
     break;
    case 258:
     VAR_4 = "CREATE TEXT SEARCH TEMPLATE";
     break;
    case 261:
     VAR_4 = "CREATE TEXT SEARCH CONFIGURATION";
     break;
    case 287:
     VAR_4 = "CREATE COLLATION";
     break;
    case 290:
     VAR_4 = "CREATE ACCESS METHOD";
     break;
    default:
     VAR_4 = "???";
   }
   break;

  case 209:
   VAR_4 = "CREATE TYPE";
   break;

  case 202:
   VAR_4 = "CREATE TYPE";
   break;

  case 190:
   VAR_4 = "CREATE TYPE";
   break;

  case 240:
   VAR_4 = "ALTER TYPE";
   break;

  case 134:
   VAR_4 = "CREATE VIEW";
   break;

  case 196:
   if (((CreateFunctionStmt *) VAR_3)->is_procedure)
    VAR_4 = "CREATE PROCEDURE";
   else
    VAR_4 = "CREATE FUNCTION";
   break;

  case 158:
   VAR_4 = "CREATE INDEX";
   break;

  case 144:
   VAR_4 = "CREATE RULE";
   break;

  case 187:
   VAR_4 = "CREATE SEQUENCE";
   break;

  case 224:
   VAR_4 = "ALTER SEQUENCE";
   break;

  case 172:
   VAR_4 = "DO";
   break;

  case 178:
   VAR_4 = "CREATE DATABASE";
   break;

  case 243:
   VAR_4 = "ALTER DATABASE";
   break;

  case 244:
   VAR_4 = "ALTER DATABASE";
   break;

  case 165:
   VAR_4 = "DROP DATABASE";
   break;

  case 153:
   VAR_4 = "NOTIFY";
   break;

  case 156:
   VAR_4 = "LISTEN";
   break;

  case 139:
   VAR_4 = "UNLISTEN";
   break;

  case 155:
   VAR_4 = "LOAD";
   break;

  case 214:
   VAR_4 = "CALL";
   break;

  case 211:
   VAR_4 = "CLUSTER";
   break;

  case 137:
   if (((VacuumStmt *) VAR_3)->is_vacuumcmd)
    VAR_4 = "VACUUM";
   else
    VAR_4 = "ANALYZE";
   break;

  case 163:
   VAR_4 = "EXPLAIN";
   break;

  case 183:
   switch (((CreateTableAsStmt *) VAR_3)->relkind)
   {
    case 264:
     if (((CreateTableAsStmt *) VAR_3)->is_select_into)
      VAR_4 = "SELECT INTO";
     else
      VAR_4 = "CREATE TABLE AS";
     break;
    case 276:
     VAR_4 = "CREATE MATERIALIZED VIEW";
     break;
    default:
     VAR_4 = "???";
   }
   break;

  case 147:
   VAR_4 = "REFRESH MATERIALIZED VIEW";
   break;

  case 221:
   VAR_4 = "ALTER SYSTEM";
   break;

  case 136:
   switch (((VariableSetStmt *) VAR_3)->kind)
   {
    case 128:
    case 131:
    case 130:
    case 129:
     VAR_4 = "SET";
     break;
    case 133:
    case 132:
     VAR_4 = "RESET";
     break;
    default:
     VAR_4 = "???";
   }
   break;

  case 135:
   VAR_4 = "SHOW";
   break;

  case 173:
   switch (((DiscardStmt *) VAR_3)->target)
   {
    case 298:
     VAR_4 = "DISCARD ALL";
     break;
    case 297:
     VAR_4 = "DISCARD PLANS";
     break;
    case 295:
     VAR_4 = "DISCARD TEMP";
     break;
    case 296:
     VAR_4 = "DISCARD SEQUENCES";
     break;
    default:
     VAR_4 = "???";
   }
   break;

  case 181:
   VAR_4 = "CREATE TRANSFORM";
   break;

  case 180:
   VAR_4 = "CREATE TRIGGER";
   break;

  case 201:
   VAR_4 = "CREATE EVENT TRIGGER";
   break;

  case 239:
   VAR_4 = "ALTER EVENT TRIGGER";
   break;

  case 193:
   VAR_4 = "CREATE LANGUAGE";
   break;

  case 189:
   VAR_4 = "CREATE ROLE";
   break;

  case 225:
   VAR_4 = "ALTER ROLE";
   break;

  case 226:
   VAR_4 = "ALTER ROLE";
   break;

  case 170:
   VAR_4 = "DROP ROLE";
   break;

  case 171:
   VAR_4 = "DROP OWNED";
   break;

  case 148:
   VAR_4 = "REASSIGN OWNED";
   break;

  case 154:
   VAR_4 = "LOCK TABLE";
   break;

  case 208:
   VAR_4 = "SET CONSTRAINTS";
   break;

  case 213:
   VAR_4 = "CHECKPOINT";
   break;

  case 146:
   VAR_4 = "REINDEX";
   break;

  case 204:
   VAR_4 = "CREATE CONVERSION";
   break;

  case 205:
   VAR_4 = "CREATE CAST";
   break;

  case 195:
   VAR_4 = "CREATE OPERATOR CLASS";
   break;

  case 194:
   VAR_4 = "CREATE OPERATOR FAMILY";
   break;

  case 231:
   VAR_4 = "ALTER OPERATOR FAMILY";
   break;

  case 230:
   VAR_4 = "ALTER OPERATOR";
   break;

  case 219:
   VAR_4 = "ALTER TEXT SEARCH DICTIONARY";
   break;

  case 220:
   VAR_4 = "ALTER TEXT SEARCH CONFIGURATION";
   break;

  case 192:
   VAR_4 = "CREATE POLICY";
   break;

  case 228:
   VAR_4 = "ALTER POLICY";
   break;

  case 206:
   VAR_4 = "CREATE ACCESS METHOD";
   break;

  case 191:
   VAR_4 = "CREATE PUBLICATION";
   break;

  case 227:
   VAR_4 = "ALTER PUBLICATION";
   break;

  case 184:
   VAR_4 = "CREATE SUBSCRIPTION";
   break;

  case 222:
   VAR_4 = "ALTER SUBSCRIPTION";
   break;

  case 168:
   VAR_4 = "DROP SUBSCRIPTION";
   break;

  case 245:
   VAR_4 = "ALTER COLLATION";
   break;

  case 151:
   VAR_4 = "PREPARE";
   break;

  case 164:
   VAR_4 = "EXECUTE";
   break;

  case 186:
   VAR_4 = "CREATE STATISTICS";
   break;

  case 223:
   VAR_4 = "ALTER STATISTICS";
   break;

  case 177:
   {
    DeallocateStmt *VAR_10 = (DeallocateStmt *) VAR_3;

    if (VAR_10->name == ((void*)0))
     VAR_4 = "DEALLOCATE ALL";
    else
     VAR_4 = "DEALLOCATE";
   }
   break;


  case 152:
   {
    PlannedStmt *VAR_11 = (PlannedStmt *) VAR_3;

    switch (VAR_11->commandType)
    {
     case 301:






      if (VAR_11->rowMarks != VAR_0)
      {

       switch (((PlanRowMark *) FUNC_2(VAR_11->rowMarks))->strength)
       {
        case 294:
         VAR_4 = "SELECT FOR KEY SHARE";
         break;
        case 292:
         VAR_4 = "SELECT FOR SHARE";
         break;
        case 293:
         VAR_4 = "SELECT FOR NO KEY UPDATE";
         break;
        case 291:
         VAR_4 = "SELECT FOR UPDATE";
         break;
        default:
         VAR_4 = "SELECT";
         break;
       }
      }
      else
       VAR_4 = "SELECT";
      break;
     case 300:
      VAR_4 = "UPDATE";
      break;
     case 302:
      VAR_4 = "INSERT";
      break;
     case 303:
      VAR_4 = "DELETE";
      break;
     case 299:
      VAR_4 = FUNC_4(VAR_11->utilityStmt);
      break;
     default:
      FUNC_1(VAR_2, "unrecognized commandType: %d",
        (int) VAR_11->commandType);
      VAR_4 = "???";
      break;
    }
   }
   break;


  case 150:
   {
    Query *VAR_12 = (Query *) VAR_3;

    switch (VAR_12->commandType)
    {
     case 301:






      if (VAR_12->rowMarks != VAR_0)
      {

       switch (((RowMarkClause *) FUNC_2(VAR_12->rowMarks))->strength)
       {
        case 294:
         VAR_4 = "SELECT FOR KEY SHARE";
         break;
        case 292:
         VAR_4 = "SELECT FOR SHARE";
         break;
        case 293:
         VAR_4 = "SELECT FOR NO KEY UPDATE";
         break;
        case 291:
         VAR_4 = "SELECT FOR UPDATE";
         break;
        default:
         VAR_4 = "???";
         break;
       }
      }
      else
       VAR_4 = "SELECT";
      break;
     case 300:
      VAR_4 = "UPDATE";
      break;
     case 302:
      VAR_4 = "INSERT";
      break;
     case 303:
      VAR_4 = "DELETE";
      break;
     case 299:
      VAR_4 = FUNC_4(VAR_12->utilityStmt);
      break;
     default:
      FUNC_1(VAR_2, "unrecognized commandType: %d",
        (int) VAR_12->commandType);
      VAR_4 = "???";
      break;
    }
   }
   break;

  default:
   FUNC_1(VAR_2, "unrecognized node type: %d",
     (int) FUNC_3(VAR_3));
   VAR_4 = "???";
   break;
 }

 return VAR_4;
}
