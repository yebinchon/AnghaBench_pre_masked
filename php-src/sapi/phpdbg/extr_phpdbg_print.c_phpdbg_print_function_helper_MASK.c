
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int last; int filename; int line_end; int line_start; TYPE_4__* opcodes; } ;
typedef TYPE_3__ zend_op_array ;
struct TYPE_12__ {int lineno; } ;
typedef TYPE_4__ zend_op ;
struct TYPE_10__ {int function_name; TYPE_1__* scope; } ;
struct TYPE_13__ {int type; TYPE_2__ common; TYPE_3__ op_array; } ;
typedef TYPE_5__ zend_function ;
typedef int uint32_t ;
struct TYPE_9__ {int name; } ;



 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_3 (char*,char*,char*,char*,...) ;

__attribute__((used)) static inline void FUNC_4(zend_function *VAR_0)
{
 switch (VAR_0->type) {
  case 128: {
   zend_op_array* VAR_1 = &(VAR_0->op_array);

   if (VAR_1) {
    zend_op *VAR_2 = &(VAR_1->opcodes[0]);
    uint32_t VAR_3 = 0,
    VAR_4 = VAR_1->last-1;

    if (VAR_0->common.scope) {
     FUNC_3("printoplineinfo", "type=\"User\" startline=\"%d\" endline=\"%d\" method=\"%s::%s\" file=\"%s\" opline=\"%p\"", "L%d-%d %s::%s() %s - %p + %d ops",
      VAR_1->line_start,
      VAR_1->line_end,
      FUNC_0(VAR_0->common.scope->name),
      FUNC_0(VAR_0->common.function_name),
      VAR_1->filename ? FUNC_0(VAR_1->filename) : "unknown",
      VAR_2,
      VAR_1->last);
    } else {
     FUNC_3("printoplineinfo", "type=\"User\" startline=\"%d\" endline=\"%d\" function=\"%s\" file=\"%s\" opline=\"%p\"", "L%d-%d %s() %s - %p + %d ops",
      VAR_1->line_start,
      VAR_1->line_end,
      VAR_0->common.function_name ? FUNC_0(VAR_0->common.function_name) : "{main}",
      VAR_1->filename ? FUNC_0(VAR_1->filename) : "unknown",
      VAR_2,
      VAR_1->last);
    }

    do {
     char *VAR_5 = FUNC_2(VAR_1, VAR_2);
     FUNC_3("print", "line=\"%u\" opnum=\"%u\" op=\"%s\"", " L%-4u #%-5u %s",
      VAR_2->lineno,
      VAR_3,
      VAR_5);
     FUNC_1(VAR_5);
     VAR_2++;
    } while (VAR_3++ < VAR_4);
   }
  } break;

  default: {
   if (VAR_0->common.scope) {
    FUNC_3("printoplineinfo", "type=\"Internal\" method=\"%s::%s\"", "\tInternal %s::%s()", FUNC_0(VAR_0->common.scope->name), FUNC_0(VAR_0->common.function_name));
   } else {
    FUNC_3("printoplineinfo", "type=\"Internal\" function=\"%s\"", "\tInternal %s()", FUNC_0(VAR_0->common.function_name));
   }
  }
 }
}
