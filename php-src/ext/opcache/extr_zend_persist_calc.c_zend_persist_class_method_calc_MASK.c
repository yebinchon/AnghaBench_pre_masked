
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
struct TYPE_8__ {scalar_t__ type; int fn_flags; } ;
typedef TYPE_1__ zend_op_array ;
typedef int zend_internal_function ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(zval *VAR_4)
{
 zend_op_array *VAR_5 = FUNC_4(VAR_4);
 zend_op_array *VAR_6;

 if (VAR_5->type != VAR_2) {
  FUNC_3(VAR_5->type == VAR_1);
  if (VAR_5->fn_flags & VAR_0) {
   VAR_6 = FUNC_6(VAR_5);
   if (!VAR_6) {
    FUNC_1(sizeof(zend_internal_function));
    FUNC_7(VAR_5, FUNC_4(VAR_4));
   }
  }
  return;
 }

 VAR_6 = FUNC_6(VAR_5);
 if (!VAR_6) {
  FUNC_1(sizeof(zend_op_array));
  FUNC_5(FUNC_4(VAR_4));
  FUNC_7(VAR_5, FUNC_4(VAR_4));
  if (!FUNC_2(VAR_3)) {
   FUNC_0(sizeof(void*));
  }
 }
}
