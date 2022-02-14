
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {int ce_flags; int refcount; } ;
typedef TYPE_1__ zend_class_entry ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;

void FUNC_1(zval *VAR_1)
{
 zend_class_entry *VAR_2 = FUNC_0(VAR_1);

 if (!(VAR_2->ce_flags & VAR_0)) {
  VAR_2->refcount++;
 }
}
