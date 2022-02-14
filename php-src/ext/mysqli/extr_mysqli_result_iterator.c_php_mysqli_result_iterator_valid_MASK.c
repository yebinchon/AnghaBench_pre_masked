
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zend_object_iterator ;
struct TYPE_2__ {int current_row; } ;
typedef TYPE_1__ php_mysqli_result_iterator ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(zend_object_iterator *VAR_3)
{
 php_mysqli_result_iterator *VAR_4 = (php_mysqli_result_iterator*) VAR_3;

 return FUNC_0(VAR_4->current_row) == VAR_1 ? VAR_2 : VAR_0;
}
