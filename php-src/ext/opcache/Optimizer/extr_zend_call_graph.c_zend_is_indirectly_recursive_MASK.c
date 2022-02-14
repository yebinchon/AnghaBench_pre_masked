
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_op_array ;
struct TYPE_4__ {TYPE_2__* caller_info; int num; } ;
typedef TYPE_1__ zend_func_info ;
struct TYPE_5__ {int recursive; struct TYPE_5__* next_caller; int * caller_op_array; } ;
typedef TYPE_2__ zend_call_info ;
typedef int zend_bitset ;


 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(zend_op_array *VAR_0, zend_op_array *VAR_1, zend_bitset VAR_2)
{
 zend_func_info *VAR_3;
 zend_call_info *VAR_4;
 int VAR_5 = 0;

 if (VAR_1 == VAR_0) {
  return 1;
 }

 VAR_3 = FUNC_0(VAR_1);
 if (FUNC_1(VAR_2, VAR_3->num)) {
  return 0;
 }
 FUNC_2(VAR_2, VAR_3->num);
 VAR_4 = VAR_3->caller_info;
 while (VAR_4) {
  if (FUNC_3(VAR_0, VAR_4->caller_op_array, VAR_2)) {
   VAR_4->recursive = 1;
   VAR_5 = 1;
  }
  VAR_4 = VAR_4->next_caller;
 }
 return VAR_5;
}
