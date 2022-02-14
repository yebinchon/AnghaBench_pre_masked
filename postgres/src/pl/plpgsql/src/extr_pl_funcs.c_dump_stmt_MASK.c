
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lineno; int cmd_type; } ;
typedef int PLpgSQL_stmt_while ;
typedef int PLpgSQL_stmt_set ;
typedef int PLpgSQL_stmt_rollback ;
typedef int PLpgSQL_stmt_return_query ;
typedef int PLpgSQL_stmt_return_next ;
typedef int PLpgSQL_stmt_return ;
typedef int PLpgSQL_stmt_raise ;
typedef int PLpgSQL_stmt_perform ;
typedef int PLpgSQL_stmt_open ;
typedef int PLpgSQL_stmt_loop ;
typedef int PLpgSQL_stmt_if ;
typedef int PLpgSQL_stmt_getdiag ;
typedef int PLpgSQL_stmt_fors ;
typedef int PLpgSQL_stmt_fori ;
typedef int PLpgSQL_stmt_foreach_a ;
typedef int PLpgSQL_stmt_forc ;
typedef int PLpgSQL_stmt_fetch ;
typedef int PLpgSQL_stmt_exit ;
typedef int PLpgSQL_stmt_execsql ;
typedef int PLpgSQL_stmt_dynfors ;
typedef int PLpgSQL_stmt_dynexecute ;
typedef int PLpgSQL_stmt_commit ;
typedef int PLpgSQL_stmt_close ;
typedef int PLpgSQL_stmt_case ;
typedef int PLpgSQL_stmt_call ;
typedef int PLpgSQL_stmt_block ;
typedef int PLpgSQL_stmt_assign ;
typedef int PLpgSQL_stmt_assert ;
typedef TYPE_1__ PLpgSQL_stmt ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int ,char*,int) ;
 int FUNC_29 (char*,int) ;

__attribute__((used)) static void
FUNC_30(PLpgSQL_stmt *VAR_1)
{
 FUNC_29("%3d:", VAR_1->lineno);
 switch (VAR_1->cmd_type)
 {
  case 153:
   FUNC_2((PLpgSQL_stmt_block *) VAR_1);
   break;
  case 154:
   FUNC_1((PLpgSQL_stmt_assign *) VAR_1);
   break;
  case 138:
   FUNC_17((PLpgSQL_stmt_if *) VAR_1);
   break;
  case 151:
   FUNC_4((PLpgSQL_stmt_case *) VAR_1);
   break;
  case 137:
   FUNC_18((PLpgSQL_stmt_loop *) VAR_1);
   break;
  case 128:
   FUNC_27((PLpgSQL_stmt_while *) VAR_1);
   break;
  case 141:
   FUNC_14((PLpgSQL_stmt_fori *) VAR_1);
   break;
  case 140:
   FUNC_15((PLpgSQL_stmt_fors *) VAR_1);
   break;
  case 143:
   FUNC_12((PLpgSQL_stmt_forc *) VAR_1);
   break;
  case 142:
   FUNC_13((PLpgSQL_stmt_foreach_a *) VAR_1);
   break;
  case 145:
   FUNC_10((PLpgSQL_stmt_exit *) VAR_1);
   break;
  case 133:
   FUNC_22((PLpgSQL_stmt_return *) VAR_1);
   break;
  case 132:
   FUNC_23((PLpgSQL_stmt_return_next *) VAR_1);
   break;
  case 131:
   FUNC_24((PLpgSQL_stmt_return_query *) VAR_1);
   break;
  case 134:
   FUNC_21((PLpgSQL_stmt_raise *) VAR_1);
   break;
  case 155:
   FUNC_0((PLpgSQL_stmt_assert *) VAR_1);
   break;
  case 146:
   FUNC_9((PLpgSQL_stmt_execsql *) VAR_1);
   break;
  case 148:
   FUNC_7((PLpgSQL_stmt_dynexecute *) VAR_1);
   break;
  case 147:
   FUNC_8((PLpgSQL_stmt_dynfors *) VAR_1);
   break;
  case 139:
   FUNC_16((PLpgSQL_stmt_getdiag *) VAR_1);
   break;
  case 136:
   FUNC_19((PLpgSQL_stmt_open *) VAR_1);
   break;
  case 144:
   FUNC_11((PLpgSQL_stmt_fetch *) VAR_1);
   break;
  case 150:
   FUNC_5((PLpgSQL_stmt_close *) VAR_1);
   break;
  case 135:
   FUNC_20((PLpgSQL_stmt_perform *) VAR_1);
   break;
  case 152:
   FUNC_3((PLpgSQL_stmt_call *) VAR_1);
   break;
  case 149:
   FUNC_6((PLpgSQL_stmt_commit *) VAR_1);
   break;
  case 130:
   FUNC_25((PLpgSQL_stmt_rollback *) VAR_1);
   break;
  case 129:
   FUNC_26((PLpgSQL_stmt_set *) VAR_1);
   break;
  default:
   FUNC_28(VAR_0, "unrecognized cmd_type: %d", VAR_1->cmd_type);
   break;
 }
}
