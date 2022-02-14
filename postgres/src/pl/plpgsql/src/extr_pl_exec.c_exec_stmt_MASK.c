
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;


struct TYPE_40__ {int (* stmt_end ) (TYPE_2__*,TYPE_1__*) ;int (* stmt_beg ) (TYPE_2__*,TYPE_1__*) ;} ;
struct TYPE_39__ {TYPE_1__* err_stmt; } ;
struct TYPE_38__ {int cmd_type; } ;
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
typedef TYPE_2__ PLpgSQL_execstate ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_2__*,int *) ;
 int FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 (TYPE_2__*,int *) ;
 int FUNC_13 (TYPE_2__*,int *) ;
 int FUNC_14 (TYPE_2__*,int *) ;
 int FUNC_15 (TYPE_2__*,int *) ;
 int FUNC_16 (TYPE_2__*,int *) ;
 int FUNC_17 (TYPE_2__*,int *) ;
 int FUNC_18 (TYPE_2__*,int *) ;
 int FUNC_19 (TYPE_2__*,int *) ;
 int FUNC_20 (TYPE_2__*,int *) ;
 int FUNC_21 (TYPE_2__*,int *) ;
 int FUNC_22 (TYPE_2__*,int *) ;
 int FUNC_23 (TYPE_2__*,int *) ;
 int FUNC_24 (TYPE_2__*,int *) ;
 int FUNC_25 (TYPE_2__*,int *) ;
 int FUNC_26 (TYPE_2__*,int *) ;
 int FUNC_27 (TYPE_2__*,int *) ;
 int FUNC_28 (TYPE_2__*,int *) ;
 int FUNC_29 (TYPE_2__*,int *) ;
 TYPE_7__** VAR_1 ;
 int FUNC_30 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_31 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_32(PLpgSQL_execstate *VAR_2, PLpgSQL_stmt *VAR_3)
{
 PLpgSQL_stmt *VAR_4;
 int VAR_5 = -1;

 VAR_4 = VAR_2->err_stmt;
 VAR_2->err_stmt = VAR_3;


 if (*VAR_1 && (*VAR_1)->stmt_beg)
  ((*VAR_1)->stmt_beg) (VAR_2, VAR_3);

 FUNC_0();

 switch (VAR_3->cmd_type)
 {
  case 153:
   VAR_5 = FUNC_4(VAR_2, (PLpgSQL_stmt_block *) VAR_3);
   break;

  case 154:
   VAR_5 = FUNC_3(VAR_2, (PLpgSQL_stmt_assign *) VAR_3);
   break;

  case 135:
   VAR_5 = FUNC_22(VAR_2, (PLpgSQL_stmt_perform *) VAR_3);
   break;

  case 152:
   VAR_5 = FUNC_5(VAR_2, (PLpgSQL_stmt_call *) VAR_3);
   break;

  case 139:
   VAR_5 = FUNC_18(VAR_2, (PLpgSQL_stmt_getdiag *) VAR_3);
   break;

  case 138:
   VAR_5 = FUNC_19(VAR_2, (PLpgSQL_stmt_if *) VAR_3);
   break;

  case 151:
   VAR_5 = FUNC_6(VAR_2, (PLpgSQL_stmt_case *) VAR_3);
   break;

  case 137:
   VAR_5 = FUNC_20(VAR_2, (PLpgSQL_stmt_loop *) VAR_3);
   break;

  case 128:
   VAR_5 = FUNC_29(VAR_2, (PLpgSQL_stmt_while *) VAR_3);
   break;

  case 141:
   VAR_5 = FUNC_16(VAR_2, (PLpgSQL_stmt_fori *) VAR_3);
   break;

  case 140:
   VAR_5 = FUNC_17(VAR_2, (PLpgSQL_stmt_fors *) VAR_3);
   break;

  case 143:
   VAR_5 = FUNC_14(VAR_2, (PLpgSQL_stmt_forc *) VAR_3);
   break;

  case 142:
   VAR_5 = FUNC_15(VAR_2, (PLpgSQL_stmt_foreach_a *) VAR_3);
   break;

  case 145:
   VAR_5 = FUNC_12(VAR_2, (PLpgSQL_stmt_exit *) VAR_3);
   break;

  case 133:
   VAR_5 = FUNC_24(VAR_2, (PLpgSQL_stmt_return *) VAR_3);
   break;

  case 132:
   VAR_5 = FUNC_25(VAR_2, (PLpgSQL_stmt_return_next *) VAR_3);
   break;

  case 131:
   VAR_5 = FUNC_26(VAR_2, (PLpgSQL_stmt_return_query *) VAR_3);
   break;

  case 134:
   VAR_5 = FUNC_23(VAR_2, (PLpgSQL_stmt_raise *) VAR_3);
   break;

  case 155:
   VAR_5 = FUNC_2(VAR_2, (PLpgSQL_stmt_assert *) VAR_3);
   break;

  case 146:
   VAR_5 = FUNC_11(VAR_2, (PLpgSQL_stmt_execsql *) VAR_3);
   break;

  case 148:
   VAR_5 = FUNC_9(VAR_2, (PLpgSQL_stmt_dynexecute *) VAR_3);
   break;

  case 147:
   VAR_5 = FUNC_10(VAR_2, (PLpgSQL_stmt_dynfors *) VAR_3);
   break;

  case 136:
   VAR_5 = FUNC_21(VAR_2, (PLpgSQL_stmt_open *) VAR_3);
   break;

  case 144:
   VAR_5 = FUNC_13(VAR_2, (PLpgSQL_stmt_fetch *) VAR_3);
   break;

  case 150:
   VAR_5 = FUNC_7(VAR_2, (PLpgSQL_stmt_close *) VAR_3);
   break;

  case 149:
   VAR_5 = FUNC_8(VAR_2, (PLpgSQL_stmt_commit *) VAR_3);
   break;

  case 130:
   VAR_5 = FUNC_27(VAR_2, (PLpgSQL_stmt_rollback *) VAR_3);
   break;

  case 129:
   VAR_5 = FUNC_28(VAR_2, (PLpgSQL_stmt_set *) VAR_3);
   break;

  default:
   VAR_2->err_stmt = VAR_4;
   FUNC_1(VAR_0, "unrecognized cmd_type: %d", VAR_3->cmd_type);
 }


 if (*VAR_1 && (*VAR_1)->stmt_end)
  ((*VAR_1)->stmt_end) (VAR_2, VAR_3);

 VAR_2->err_stmt = VAR_4;

 return VAR_5;
}
