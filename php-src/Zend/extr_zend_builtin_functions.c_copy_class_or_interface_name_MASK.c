
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_3__ {int refcount; int ce_flags; int * name; } ;
typedef TYPE_1__ zend_class_entry ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(zval *VAR_1, zend_string *VAR_2, zend_class_entry *VAR_3)
{
 if ((VAR_3->refcount == 1 && !(VAR_3->ce_flags & VAR_0)) ||
  FUNC_1(VAR_2, VAR_3->name)) {
  VAR_2 = VAR_3->name;
 }
 FUNC_0(VAR_1, FUNC_2(VAR_2));
}
