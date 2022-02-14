
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
struct TYPE_4__ {scalar_t__ fptr_cmp; } ;
typedef TYPE_1__ spl_heap_object ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,int *,int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(void *VAR_2, void *VAR_3, zval *VAR_4) {
 zval *VAR_5 = VAR_2, *VAR_6 = VAR_3;

 if (FUNC_0(VAR_1)) {
  return 0;
 }

 if (VAR_4) {
  spl_heap_object *VAR_7 = FUNC_2(VAR_4);
  if (VAR_7->fptr_cmp) {
   zend_long VAR_8 = 0;
   if (FUNC_3(VAR_4, VAR_7, VAR_5, VAR_6, &VAR_8) == VAR_0) {

    return 0;
   }
   return FUNC_1(VAR_8);
  }
 }

 return FUNC_4(VAR_6, VAR_5);
}
