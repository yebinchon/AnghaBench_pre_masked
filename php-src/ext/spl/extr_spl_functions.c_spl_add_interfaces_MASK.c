
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {size_t num_interfaces; int ce_flags; int * interfaces; } ;
typedef TYPE_1__ zend_class_entry ;
typedef size_t uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int,int) ;

void FUNC_2(zval *VAR_1, zend_class_entry * VAR_2, int VAR_3, int VAR_4)
{
 uint32_t VAR_5;

 if (VAR_2->num_interfaces) {
  FUNC_0(VAR_2->ce_flags & VAR_0);
  for (VAR_5 = 0; VAR_5 < VAR_2->num_interfaces; VAR_5++) {
   FUNC_1(VAR_1, VAR_2->interfaces[VAR_5], VAR_3, VAR_4);
  }
 }
}
