
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef size_t zend_long ;
struct TYPE_4__ {size_t size; int * elements; } ;
typedef TYPE_1__ spl_fixedarray ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char,int) ;
 int * FUNC_3 (int *,size_t,int,int ) ;
 int FUNC_4 (TYPE_1__*,size_t) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(spl_fixedarray *VAR_0, zend_long VAR_1)
{
 if (VAR_1 == VAR_0->size) {

  return;
 }


 if (VAR_0->size == 0) {
  FUNC_4(VAR_0, VAR_1);
  return;
 }


 if (VAR_1 == 0) {
  zend_long VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0->size; VAR_2++) {
   FUNC_5(&(VAR_0->elements[VAR_2]));
  }

  if (VAR_0->elements) {
   FUNC_0(VAR_0->elements);
   VAR_0->elements = ((void*)0);
  }
 } else if (VAR_1 > VAR_0->size) {
  VAR_0->elements = FUNC_3(VAR_0->elements, VAR_1, sizeof(zval), 0);
  FUNC_2(VAR_0->elements + VAR_0->size, '\0', sizeof(zval) * (VAR_1 - VAR_0->size));
 } else {
  zend_long VAR_3;

  for (VAR_3 = VAR_1; VAR_3 < VAR_0->size; VAR_3++) {
   FUNC_5(&(VAR_0->elements[VAR_3]));
  }
  VAR_0->elements = FUNC_1(VAR_0->elements, sizeof(zval) * VAR_1);
 }

 VAR_0->size = VAR_1;
}
