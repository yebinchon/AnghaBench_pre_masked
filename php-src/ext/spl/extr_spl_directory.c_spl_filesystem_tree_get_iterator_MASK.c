
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
struct TYPE_5__ {int * funcs; int data; } ;
typedef TYPE_1__ zend_object_iterator ;
typedef int zend_class_entry ;
typedef int spl_filesystem_object ;
struct TYPE_6__ {TYPE_1__ intern; } ;
typedef TYPE_2__ spl_filesystem_iterator ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int ,char*,int ) ;

zend_object_iterator *FUNC_6(zend_class_entry *VAR_2, zval *VAR_3, int VAR_4)
{
 spl_filesystem_iterator *VAR_5;
 spl_filesystem_object *VAR_6;

 if (VAR_4) {
  FUNC_5(VAR_0, "An iterator cannot be used with foreach by reference", 0);
  return ((void*)0);
 }
 VAR_6 = FUNC_3(VAR_3);
 VAR_5 = FUNC_4(VAR_6);

 FUNC_1(VAR_3);
 FUNC_0(&VAR_5->intern.data, FUNC_2(VAR_3));
 VAR_5->intern.funcs = &VAR_1;

 return &VAR_5->intern;
}
