
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_object_iterator ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {int current_row; TYPE_1__ intern; } ;
typedef TYPE_2__ php_mysqli_result_iterator ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(zend_object_iterator *VAR_0)
{
 php_mysqli_result_iterator *VAR_1 = (php_mysqli_result_iterator*)VAR_0;


 FUNC_0(&VAR_1->intern.data);
 FUNC_0(&VAR_1->current_row);
}
