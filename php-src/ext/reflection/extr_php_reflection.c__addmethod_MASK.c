
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
struct TYPE_5__ {int fn_flags; } ;
struct TYPE_6__ {TYPE_1__ common; } ;
typedef TYPE_2__ zend_function ;
typedef int zend_class_entry ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,TYPE_2__*,int *,int *) ;

__attribute__((used)) static void FUNC_2(zend_function *VAR_0, zend_class_entry *VAR_1, zval *VAR_2, zend_long VAR_3)
{
 if (VAR_0->common.fn_flags & VAR_3) {
  zval VAR_4;
  FUNC_1(VAR_1, VAR_0, ((void*)0), &VAR_4);
  FUNC_0(VAR_2, &VAR_4);
 }
}
