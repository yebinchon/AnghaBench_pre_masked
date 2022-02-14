
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_long ;
struct TYPE_3__ {scalar_t__ size; int * elements; } ;
typedef TYPE_1__ spl_fixedarray ;


 int * FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(spl_fixedarray *VAR_0, zend_long VAR_1)
{
 if (VAR_1 > 0) {
  VAR_0->size = 0;
  VAR_0->elements = FUNC_0(VAR_1, sizeof(zval));
  VAR_0->size = VAR_1;
 } else {
  VAR_0->elements = ((void*)0);
  VAR_0->size = 0;
 }
}
