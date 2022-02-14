
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
typedef TYPE_1__ zend_object_iterator ;
struct php_com_iterator {int zdata; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(zend_object_iterator *VAR_3)
{
 struct php_com_iterator *VAR_4 = (struct php_com_iterator*)FUNC_0(VAR_3->data);

 if (FUNC_1(VAR_4->zdata) != VAR_1) {
  return VAR_2;
 }

 return VAR_0;
}
