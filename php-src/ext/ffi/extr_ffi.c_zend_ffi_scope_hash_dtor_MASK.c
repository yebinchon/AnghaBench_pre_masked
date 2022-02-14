
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
struct TYPE_5__ {struct TYPE_5__* tags; struct TYPE_5__* symbols; } ;
typedef TYPE_1__ zend_ffi_scope ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(zval *VAR_0)
{
 zend_ffi_scope *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->symbols) {
  FUNC_2(VAR_1->symbols);
  FUNC_1(VAR_1->symbols);
 }
 if (VAR_1->tags) {
  FUNC_2(VAR_1->tags);
  FUNC_1(VAR_1->tags);
 }
 FUNC_1(VAR_1);
}
