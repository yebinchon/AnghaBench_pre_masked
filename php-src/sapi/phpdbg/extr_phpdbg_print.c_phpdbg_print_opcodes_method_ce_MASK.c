
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_function ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__* name; int function_table; } ;
typedef TYPE_2__ zend_class_entry ;
struct TYPE_4__ {int val; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*) ;
 int * FUNC_3 (int *,char const*,int ) ;

__attribute__((used)) static void FUNC_4(zend_class_entry *VAR_1, const char *VAR_2) {
 zend_function *VAR_3;

 if (VAR_1->type != VAR_0) {
  FUNC_0("function name: %s::%s (internal)\n", VAR_1->name->val, VAR_2);
  return;
 }

 if (!(VAR_3 = FUNC_3(&VAR_1->function_table, VAR_2, FUNC_2(VAR_2)))) {
  return;
 }

 FUNC_0("function name: %s::%s\n", VAR_1->name->val, VAR_2);
 FUNC_1(VAR_3);
}
