
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int cmd_type; } ;
struct TYPE_10__ {int is_call; } ;
struct TYPE_9__ {int is_exit; } ;
struct TYPE_8__ {int is_move; } ;
struct TYPE_7__ {int is_stacked; } ;
typedef TYPE_1__ PLpgSQL_stmt_getdiag ;
typedef TYPE_2__ PLpgSQL_stmt_fetch ;
typedef TYPE_3__ PLpgSQL_stmt_exit ;
typedef TYPE_4__ PLpgSQL_stmt_call ;
typedef TYPE_5__ PLpgSQL_stmt ;
 char const* FUNC_0 (char*) ;

const char *
FUNC_1(PLpgSQL_stmt *VAR_0)
{
 switch (VAR_0->cmd_type)
 {
  case 153:
   return FUNC_0("statement block");
  case 154:
   return FUNC_0("assignment");
  case 138:
   return "IF";
  case 151:
   return "CASE";
  case 137:
   return "LOOP";
  case 128:
   return "WHILE";
  case 141:
   return FUNC_0("FOR with integer loop variable");
  case 140:
   return FUNC_0("FOR over SELECT rows");
  case 143:
   return FUNC_0("FOR over cursor");
  case 142:
   return FUNC_0("FOREACH over array");
  case 145:
   return ((PLpgSQL_stmt_exit *) VAR_0)->is_exit ? "EXIT" : "CONTINUE";
  case 133:
   return "RETURN";
  case 132:
   return "RETURN NEXT";
  case 131:
   return "RETURN QUERY";
  case 134:
   return "RAISE";
  case 155:
   return "ASSERT";
  case 146:
   return FUNC_0("SQL statement");
  case 148:
   return "EXECUTE";
  case 147:
   return FUNC_0("FOR over EXECUTE statement");
  case 139:
   return ((PLpgSQL_stmt_getdiag *) VAR_0)->is_stacked ?
    "GET STACKED DIAGNOSTICS" : "GET DIAGNOSTICS";
  case 136:
   return "OPEN";
  case 144:
   return ((PLpgSQL_stmt_fetch *) VAR_0)->is_move ? "MOVE" : "FETCH";
  case 150:
   return "CLOSE";
  case 135:
   return "PERFORM";
  case 152:
   return ((PLpgSQL_stmt_call *) VAR_0)->is_call ? "CALL" : "DO";
  case 149:
   return "COMMIT";
  case 130:
   return "ROLLBACK";
  case 129:
   return "SET";
 }

 return "unknown";
}
