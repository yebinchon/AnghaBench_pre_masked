
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int znode ;
typedef int zend_string ;
struct TYPE_11__ {int fn_flags; int * function_name; } ;
typedef TYPE_1__ zend_op_array ;
struct TYPE_12__ {int op1; void* op1_type; int opcode; int extended_value; } ;
typedef TYPE_2__ zend_op ;
typedef scalar_t__ zend_bool ;
struct TYPE_13__ {int lex_pos; int * name; } ;
typedef TYPE_3__ zend_ast_decl ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 void* VAR_1 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*,int) ;
 int VAR_6 ;
 TYPE_2__* FUNC_7 () ;
 int VAR_7 ;
 int FUNC_8 (int **) ;
 int FUNC_9 () ;
 int * FUNC_10 (int *,int ) ;
 TYPE_2__* FUNC_11 (int *,int ,int *,int *) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ,char*,...) ;
 int * FUNC_14 (int ,int *,TYPE_1__*) ;
 int * FUNC_15 (scalar_t__,int ,int ) ;
 int FUNC_16 (int ,int *,TYPE_1__*) ;
 int * FUNC_17 (int *) ;
 int FUNC_18 (int *,int ) ;
 int * FUNC_19 (int *) ;
 int FUNC_20 (int *,int *) ;
 scalar_t__ FUNC_21 (int *,char*) ;
 scalar_t__ FUNC_22 (int *,char*) ;
 int FUNC_23 (int *,int ) ;
 int * FUNC_24 (int *) ;

__attribute__((used)) static void FUNC_25(znode *VAR_8, zend_op_array *VAR_9, zend_ast_decl *VAR_10, zend_bool VAR_11)
{
 zend_string *VAR_12, *VAR_13, *VAR_14, *VAR_15;
 zend_op *VAR_16;

 VAR_12 = VAR_10->name;
 VAR_9->function_name = VAR_13 = FUNC_17(VAR_12);
 VAR_14 = FUNC_24(VAR_13);

 if (FUNC_1(VAR_7)) {
  zend_string *VAR_17 = FUNC_15(
   FUNC_1(VAR_7), FUNC_5(VAR_12), FUNC_4(VAR_12));
  if (VAR_17 && !FUNC_20(VAR_14, VAR_17)) {
   FUNC_13(VAR_0, "Cannot declare function %s "
    "because the name is already in use", FUNC_5(VAR_13));
  }
 }

 if (FUNC_21(VAR_14, "__autoload")) {
  FUNC_13(VAR_0,
   "__autoload() is no longer supported, use spl_autoload_register() instead");
 }

 if (FUNC_22(VAR_12, "assert")) {
  FUNC_12(VAR_0,
   "Defining a custom assert() function is not allowed, "
   "as the function has special semantics");
 }

 FUNC_18(VAR_14, VAR_5);
 if (VAR_11) {
  if (FUNC_3(FUNC_14(FUNC_0(VAR_6), VAR_14, VAR_9) == ((void*)0))) {
   FUNC_6(VAR_14, VAR_9, 1);
  }
  FUNC_23(VAR_14, 0);
  return;
 }

 VAR_15 = FUNC_10(VAR_14, VAR_10->lex_pos);
 FUNC_16(FUNC_0(VAR_6), VAR_15, VAR_9);

 if (VAR_9->fn_flags & VAR_2) {
  VAR_16 = FUNC_11(VAR_8, VAR_4, ((void*)0), ((void*)0));
  VAR_16->extended_value = FUNC_9();
  VAR_16->op1_type = VAR_1;
  FUNC_2(VAR_16->op1, VAR_15);
 } else {
  VAR_16 = FUNC_7();
  VAR_16->opcode = VAR_3;
  VAR_16->op1_type = VAR_1;
  FUNC_2(VAR_16->op1, FUNC_19(VAR_14));

  FUNC_8(&VAR_15);
 }
 FUNC_23(VAR_14, 0);
}
