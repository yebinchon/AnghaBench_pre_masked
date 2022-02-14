
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {scalar_t__ type; } ;
typedef TYPE_1__ zend_class_entry ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(zval *VAR_3)
{
 zend_class_entry *VAR_4 = FUNC_0(VAR_3);
 return (VAR_4->type == VAR_2) ? VAR_0 : VAR_1;
}
