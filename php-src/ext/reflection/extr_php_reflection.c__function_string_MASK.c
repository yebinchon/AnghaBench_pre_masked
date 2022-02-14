
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_12__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef int zend_string ;
struct TYPE_38__ {TYPE_1__* module; } ;
typedef TYPE_9__ zend_internal_function ;
struct TYPE_37__ {int fn_flags; TYPE_7__* arg_info; int * function_name; TYPE_11__* scope; TYPE_5__* prototype; } ;
struct TYPE_35__ {int fn_flags; int line_end; int line_start; int * filename; int * doc_comment; } ;
struct TYPE_27__ {scalar_t__ type; TYPE_8__ common; TYPE_6__ op_array; } ;
typedef TYPE_10__ zend_function ;
struct TYPE_28__ {int * name; TYPE_2__* parent; } ;
typedef TYPE_11__ zend_class_entry ;
struct TYPE_29__ {int * s; int member_0; } ;
typedef TYPE_12__ smart_str ;
struct TYPE_36__ {int type; } ;
struct TYPE_33__ {TYPE_3__* scope; } ;
struct TYPE_34__ {TYPE_4__ common; } ;
struct TYPE_32__ {int * name; } ;
struct TYPE_31__ {int function_table; } ;
struct TYPE_30__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_11 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_12__*,TYPE_10__*,char*) ;
 int FUNC_3 (TYPE_12__*,TYPE_10__*,char*) ;
 int FUNC_4 (TYPE_12__*) ;
 int FUNC_5 (TYPE_12__*,char*,...) ;
 int FUNC_6 (TYPE_12__*,char) ;
 int FUNC_7 (TYPE_12__*,char*,int ) ;
 int FUNC_8 (TYPE_12__*,char*) ;
 int FUNC_9 (TYPE_12__*) ;
 int FUNC_10 (char*) ;
 TYPE_10__* FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int * FUNC_14 (int *) ;
 int * FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(smart_str *VAR_12, zend_function *VAR_13, zend_class_entry *VAR_14, char* VAR_15)
{
 smart_str VAR_16 = {0};
 zend_function *VAR_17;
 zend_string *VAR_18;





 if (VAR_13->type == VAR_11 && VAR_13->op_array.doc_comment) {
  FUNC_5(VAR_12, "%s%s\n", VAR_15, FUNC_1(VAR_13->op_array.doc_comment));
 }

 FUNC_7(VAR_12, VAR_15, FUNC_10(VAR_15));
 FUNC_5(VAR_12, VAR_13->common.fn_flags & VAR_1 ? "Closure [ " : (VAR_13->common.scope ? "Method [ " : "Function [ "));
 FUNC_5(VAR_12, (VAR_13->type == VAR_11) ? "<user" : "<internal");
 if (VAR_13->common.fn_flags & VAR_3) {
  FUNC_8(VAR_12, ", deprecated");
 }
 if (VAR_13->type == VAR_10 && ((zend_internal_function*)VAR_13)->module) {
  FUNC_5(VAR_12, ":%s", ((zend_internal_function*)VAR_13)->module->name);
 }

 if (VAR_14 && VAR_13->common.scope) {
  if (VAR_13->common.scope != VAR_14) {
   FUNC_5(VAR_12, ", inherits %s", FUNC_1(VAR_13->common.scope->name));
  } else if (VAR_13->common.scope->parent) {
   VAR_18 = FUNC_14(VAR_13->common.function_name);
   if ((VAR_17 = FUNC_11(&VAR_13->common.scope->parent->function_table, VAR_18)) != ((void*)0)) {
    if (VAR_13->common.scope != VAR_17->common.scope) {
     FUNC_5(VAR_12, ", overwrites %s", FUNC_1(VAR_17->common.scope->name));
    }
   }
   FUNC_13(VAR_18, 0);
  }
 }
 if (VAR_13->common.prototype && VAR_13->common.prototype->common.scope) {
  FUNC_5(VAR_12, ", prototype %s", FUNC_1(VAR_13->common.prototype->common.scope->name));
 }
 if (VAR_13->common.fn_flags & VAR_2) {
  FUNC_8(VAR_12, ", ctor");
 }
 if (VAR_13->common.fn_flags & VAR_4) {
  FUNC_8(VAR_12, ", dtor");
 }
 FUNC_8(VAR_12, "> ");

 if (VAR_13->common.fn_flags & VAR_0) {
  FUNC_8(VAR_12, "abstract ");
 }
 if (VAR_13->common.fn_flags & VAR_5) {
  FUNC_8(VAR_12, "final ");
 }
 if (VAR_13->common.fn_flags & VAR_9) {
  FUNC_8(VAR_12, "static ");
 }

 if (VAR_13->common.scope) {

  switch (VAR_13->common.fn_flags & VAR_7) {
   case 128:
    FUNC_8(VAR_12, "public ");
    break;
   case 130:
    FUNC_8(VAR_12, "private ");
    break;
   case 129:
    FUNC_8(VAR_12, "protected ");
    break;
   default:
    FUNC_8(VAR_12, "<visibility error> ");
    break;
  }
  FUNC_8(VAR_12, "method ");
 } else {
  FUNC_8(VAR_12, "function ");
 }

 if (VAR_13->op_array.fn_flags & VAR_8) {
  FUNC_6(VAR_12, '&');
 }
 FUNC_5(VAR_12, "%s ] {\n", FUNC_1(VAR_13->common.function_name));

 if (VAR_13->type == VAR_11) {
  FUNC_5(VAR_12, "%s  @@ %s %d - %d\n", VAR_15,
      FUNC_1(VAR_13->op_array.filename),
      VAR_13->op_array.line_start,
      VAR_13->op_array.line_end);
 }
 FUNC_5(&VAR_16, "%s  ", VAR_15);
 FUNC_4(&VAR_16);
 if (VAR_13->common.fn_flags & VAR_1) {
  FUNC_2(VAR_12, VAR_13, FUNC_1(VAR_16.s));
 }
 FUNC_3(VAR_12, VAR_13, FUNC_1(VAR_16.s));
 FUNC_9(&VAR_16);
 if (VAR_13->op_array.fn_flags & VAR_6) {
  FUNC_5(VAR_12, "  %s- Return [ ", VAR_15);
  if (FUNC_0(VAR_13->common.arg_info[-1].type)) {
   zend_string *VAR_19 = FUNC_15(VAR_13->common.arg_info[-1].type);
   FUNC_5(VAR_12, "%s ", FUNC_1(VAR_19));
   FUNC_12(VAR_19);
  }
  FUNC_8(VAR_12, "]\n");
 }
 FUNC_5(VAR_12, "%s}\n", VAR_15);
}
