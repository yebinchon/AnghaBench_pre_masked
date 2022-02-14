
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zend_ulong ;
struct TYPE_13__ {char const* function_name; scalar_t__ opcodes; TYPE_2__* scope; } ;
typedef TYPE_4__ zend_op_array ;
struct TYPE_14__ {int type; } ;
typedef TYPE_5__ zend_function ;
struct TYPE_15__ {scalar_t__ opline; TYPE_5__* func; } ;
typedef TYPE_6__ zend_execute_data ;
typedef int zend_bool ;
struct TYPE_12__ {char const* class; char const* name; } ;
struct TYPE_10__ {char const* name; int line; } ;
struct TYPE_16__ {int type; size_t len; char const* str; int addr; scalar_t__ num; TYPE_3__ method; TYPE_1__ file; } ;
typedef TYPE_7__ phpdbg_param_t ;
typedef int phpdbg_opline_ptr_t ;
struct TYPE_11__ {char const* name; } ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char const*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;
 char* FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static inline zend_bool FUNC_6(phpdbg_param_t *VAR_2, zend_execute_data *VAR_3)
{
 zend_function *VAR_4 = VAR_3->func;

 switch (VAR_2->type) {
  case 130:
  case 128: {


   if (VAR_4->type != VAR_1) {
    return 0;
   }

   {
    const char *VAR_5 = ((void*)0);
    size_t VAR_6 = 0L;
    zend_op_array *VAR_7 = (zend_op_array*)VAR_4;
    VAR_5 = VAR_7->function_name ? FUNC_1(VAR_7->function_name) : "main";
    VAR_6 = VAR_7->function_name ? FUNC_0(VAR_7->function_name) : FUNC_3(VAR_5);

    if (VAR_6 == VAR_2->len && FUNC_2(VAR_2->str, VAR_5, VAR_6) == VAR_0) {
     return VAR_2->type == 128 || VAR_3->opline - VAR_7->opcodes == VAR_2->num;
    }
   }
  } break;

  case 132: {
   if (VAR_2->file.line == FUNC_5()) {
    const char *VAR_8 = FUNC_4();
    size_t VAR_9[2] = {FUNC_3(VAR_2->file.name), FUNC_3(VAR_8)};

    if (VAR_9[0] == VAR_9[1]) {
     return (FUNC_2(
      VAR_2->file.name, VAR_8, VAR_9[0]) == VAR_0);
    }
   }
  } break;

  case 129:
  case 131: {
   if (VAR_4->type != VAR_1) {
    return 0;
   }

   {
    zend_op_array *VAR_10 = (zend_op_array*) VAR_4;

    if (VAR_10->scope) {
     size_t VAR_11[2] = { FUNC_3(VAR_2->method.class), FUNC_0(VAR_10->scope->name) };
     if (VAR_11[0] == VAR_11[1] && FUNC_2(VAR_2->method.class, VAR_10->scope->name, VAR_11[0]) == VAR_0) {
      VAR_11[0] = FUNC_3(VAR_2->method.name);
      VAR_11[1] = FUNC_0(VAR_10->function_name);

      if (VAR_11[0] == VAR_11[1] && FUNC_2(VAR_2->method.name, VAR_10->function_name, VAR_11[0]) == VAR_0) {
       return VAR_2->type == 131 || (VAR_3->opline - VAR_10->opcodes) == VAR_2->num;
      }
     }
    }
   }
  } break;

  case 133: {
   return ((zend_ulong)(phpdbg_opline_ptr_t)VAR_3->opline == VAR_2->addr);
  } break;

  default: {

  } break;
 }
 return 0;
}
