
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
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_1 ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void FUNC_7(spl_fixedarray_object *VAR_2, zval *VAR_3, zval *VAR_4)
{
 zend_long VAR_5;

 if (!VAR_3) {

  FUNC_5(VAR_1, "Index invalid or out of range", 0);
  return;
 }

 if (FUNC_3(VAR_3) != VAR_0) {
  VAR_5 = FUNC_4(VAR_3);
 } else {
  VAR_5 = FUNC_2(VAR_3);
 }

 if (VAR_5 < 0 || VAR_5 >= VAR_2->array.size) {
  FUNC_5(VAR_1, "Index invalid or out of range", 0);
  return;
 } else {
  if (!FUNC_1(VAR_2->array.elements[VAR_5])) {
   FUNC_6(&(VAR_2->array.elements[VAR_5]));
  }
  FUNC_0(&VAR_2->array.elements[VAR_5], VAR_4);
 }
}
