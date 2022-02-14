
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_op_array ;
struct TYPE_9__ {scalar_t__ opcode; scalar_t__ op2_type; int op2; } ;
typedef TYPE_2__ zend_op ;
struct TYPE_10__ {int name; } ;
typedef TYPE_3__ zend_internal_arg_info ;
struct TYPE_8__ {int fn_flags; int scope; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_1__ common; } ;
typedef TYPE_4__ zend_function ;
typedef int zend_bool ;
typedef int uint32_t ;
struct _zend_arg_info {int * name; int type; } ;
typedef int smart_str ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct _zend_arg_info*) ;
 scalar_t__ FUNC_4 (struct _zend_arg_info*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 TYPE_2__* FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,char*,...) ;
 int FUNC_14 (int *,char) ;
 int FUNC_15 (int *,int ,int ) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int * FUNC_19 (int ) ;
 int * FUNC_20 (int *,int **) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int *,int ) ;

__attribute__((used)) static void FUNC_23(smart_str *VAR_11, zend_function *VAR_12, struct _zend_arg_info *VAR_13, uint32_t VAR_14, zend_bool VAR_15, char* VAR_16)
{
 FUNC_13(VAR_11, "Parameter #%d [ ", VAR_14);
 if (!VAR_15) {
  FUNC_13(VAR_11, "<optional> ");
 } else {
  FUNC_13(VAR_11, "<required> ");
 }
 if (FUNC_5(VAR_13->type)) {
  zend_string *VAR_17 = FUNC_19(VAR_13->type);
  FUNC_13(VAR_11, "%s ", FUNC_6(VAR_17));
  FUNC_17(VAR_17);
 }
 if (FUNC_4(VAR_13)) {
  FUNC_14(VAR_11, '&');
 }
 if (FUNC_3(VAR_13)) {
  FUNC_16(VAR_11, "...");
 }
 if (VAR_13->name) {
  FUNC_13(VAR_11, "$%s",
   (VAR_12->type == VAR_8 &&
    !(VAR_12->common.fn_flags & VAR_7)) ?
   ((zend_internal_arg_info*)VAR_13)->name :
   FUNC_6(VAR_13->name));
 } else {
  FUNC_13(VAR_11, "$param%d", VAR_14);
 }
 if (VAR_12->type == VAR_10 && !VAR_15) {
  zend_op *VAR_18 = FUNC_11((zend_op_array*)VAR_12, VAR_14);
  if (VAR_18 && VAR_18->opcode == VAR_9 && VAR_18->op2_type != VAR_6) {
   zval VAR_19;

   FUNC_16(VAR_11, " = ");
   FUNC_7(&VAR_19, FUNC_1(VAR_18, VAR_18->op2));
   if (FUNC_2(FUNC_22(&VAR_19, VAR_12->common.scope) == VAR_0)) {
    FUNC_21(&VAR_19);
    return;
   }
   if (FUNC_10(VAR_19) == VAR_5) {
    FUNC_16(VAR_11, "true");
   } else if (FUNC_10(VAR_19) == VAR_2) {
    FUNC_16(VAR_11, "false");
   } else if (FUNC_10(VAR_19) == VAR_3) {
    FUNC_16(VAR_11, "NULL");
   } else if (FUNC_10(VAR_19) == VAR_4) {
    FUNC_14(VAR_11, '\'');
    FUNC_15(VAR_11, FUNC_9(VAR_19), FUNC_0(FUNC_8(VAR_19), 15));
    if (FUNC_8(VAR_19) > 15) {
     FUNC_16(VAR_11, "...");
    }
    FUNC_14(VAR_11, '\'');
   } else if (FUNC_10(VAR_19) == VAR_1) {
    FUNC_16(VAR_11, "Array");
   } else {
    zend_string *VAR_20;
    zend_string *VAR_21 = FUNC_20(&VAR_19, &VAR_20);
    FUNC_12(VAR_11, VAR_21);
    FUNC_18(VAR_20);
   }
   FUNC_21(&VAR_19);
  }
 }
 FUNC_16(VAR_11, " ]");
}
