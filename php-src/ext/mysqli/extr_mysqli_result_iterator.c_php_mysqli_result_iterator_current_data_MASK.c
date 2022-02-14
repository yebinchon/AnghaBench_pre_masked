
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object_iterator ;
struct TYPE_2__ {int current_row; } ;
typedef TYPE_1__ php_mysqli_result_iterator ;



__attribute__((used)) static zval *FUNC_0(zend_object_iterator *VAR_0)
{
 php_mysqli_result_iterator *VAR_1 = (php_mysqli_result_iterator*) VAR_0;

 return &VAR_1->current_row;
}
