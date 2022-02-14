
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef size_t zend_long ;
struct TYPE_4__ {size_t size; int * elements; } ;
struct TYPE_5__ {TYPE_1__ array; } ;
typedef TYPE_2__ spl_fixedarray_object ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static inline int FUNC_5(spl_fixedarray_object *VAR_1, zval *VAR_2, int VAR_3)
{
 zend_long VAR_4;
 int VAR_5;

 if (FUNC_2(VAR_2) != VAR_0) {
  VAR_4 = FUNC_3(VAR_2);
 } else {
  VAR_4 = FUNC_1(VAR_2);
 }

 if (VAR_4 < 0 || VAR_4 >= VAR_1->array.size) {
  VAR_5 = 0;
 } else {
  if (FUNC_0(VAR_1->array.elements[VAR_4])) {
   VAR_5 = 0;
  } else if (VAR_3) {
   if (FUNC_4(&VAR_1->array.elements[VAR_4])) {
    VAR_5 = 1;
   } else {
    VAR_5 = 0;
   }
  } else {
   VAR_5 = 1;
  }
 }

 return VAR_5;
}
