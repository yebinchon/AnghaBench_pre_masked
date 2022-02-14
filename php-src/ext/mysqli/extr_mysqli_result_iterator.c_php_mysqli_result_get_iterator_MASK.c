
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {int * funcs; int data; } ;
typedef TYPE_1__ zend_object_iterator ;
typedef int zend_class_entry ;
struct TYPE_7__ {int row_num; TYPE_1__ intern; int result; } ;
typedef TYPE_2__ php_mysqli_result_iterator ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int,int) ;
 int VAR_1 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_1__*) ;

zend_object_iterator *FUNC_7(zend_class_entry *VAR_2, zval *VAR_3, int VAR_4)
{
 php_mysqli_result_iterator *VAR_5;

 if (VAR_4) {
  FUNC_5(VAR_0, "An iterator cannot be used with foreach by reference");
 }
 VAR_5 = FUNC_4(1, sizeof(php_mysqli_result_iterator));
 FUNC_6(&VAR_5->intern);

 FUNC_1(VAR_3);
 FUNC_0(&VAR_5->intern.data, FUNC_3(VAR_3));
 VAR_5->intern.funcs = &VAR_1;
 VAR_5->result = FUNC_2(VAR_3);
 VAR_5->row_num = -1;

 return &VAR_5->intern;
}
