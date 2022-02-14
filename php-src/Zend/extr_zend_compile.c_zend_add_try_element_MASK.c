
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t try_op; scalar_t__ finally_end; scalar_t__ finally_op; scalar_t__ catch_op; } ;
typedef TYPE_1__ zend_try_catch_element ;
struct TYPE_7__ {TYPE_1__* try_catch_array; int last_try_catch; } ;
typedef TYPE_2__ zend_op_array ;
typedef size_t uint32_t ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int,int ,int ) ;

__attribute__((used)) static uint32_t FUNC_2(uint32_t VAR_1)
{
 zend_op_array *VAR_2 = FUNC_0(VAR_0);
 uint32_t VAR_3 = VAR_2->last_try_catch++;
 zend_try_catch_element *VAR_4;

 VAR_2->try_catch_array = FUNC_1(
  VAR_2->try_catch_array, sizeof(zend_try_catch_element), VAR_2->last_try_catch, 0);

 VAR_4 = &VAR_2->try_catch_array[VAR_3];
 VAR_4->try_op = VAR_1;
 VAR_4->catch_op = 0;
 VAR_4->finally_op = 0;
 VAR_4->finally_end = 0;

 return VAR_3;
}
