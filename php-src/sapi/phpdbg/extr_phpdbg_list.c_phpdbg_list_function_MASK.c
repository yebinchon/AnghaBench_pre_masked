
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ line_start; scalar_t__ line_end; int filename; } ;
typedef TYPE_2__ zend_op_array ;
struct TYPE_5__ {int function_name; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ common; } ;
typedef TYPE_3__ zend_function ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char*,int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int ) ;

void FUNC_3(const zend_function *VAR_1)
{
 const zend_op_array *VAR_2;

 if (VAR_1->type != VAR_0) {
  FUNC_1("list", "type=\"internalfunction\" function=\"%s\"", "The function requested (%s) is not user defined", FUNC_0(VAR_1->common.function_name));
  return;
 }

 VAR_2 = (zend_op_array *) VAR_1;

 FUNC_2(VAR_2->filename, VAR_2->line_end - VAR_2->line_start + 1, VAR_2->line_start, 0);
}
