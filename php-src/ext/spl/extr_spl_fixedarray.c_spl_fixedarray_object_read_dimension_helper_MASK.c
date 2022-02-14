
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
 int VAR_1 ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static inline zval *FUNC_5(spl_fixedarray_object *VAR_2, zval *VAR_3)
{
 zend_long VAR_4;



 if (!VAR_3) {
  FUNC_4(VAR_1, "Index invalid or out of range", 0);
  return ((void*)0);
 }

 if (FUNC_2(VAR_3) != VAR_0) {
  VAR_4 = FUNC_3(VAR_3);
 } else {
  VAR_4 = FUNC_1(VAR_3);
 }

 if (VAR_4 < 0 || VAR_4 >= VAR_2->array.size) {
  FUNC_4(VAR_1, "Index invalid or out of range", 0);
  return ((void*)0);
 } else if (FUNC_0(VAR_2->array.elements[VAR_4])) {
  return ((void*)0);
 } else {
  return &VAR_2->array.elements[VAR_4];
 }
}
