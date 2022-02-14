
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_2__ {scalar_t__ tags; scalar_t__ symbols; int * lib; scalar_t__ persistent; } ;
typedef TYPE_1__ zend_ffi ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(zend_object *VAR_0)
{
 zend_ffi *VAR_1 = (zend_ffi*)VAR_0;

 if (VAR_1->persistent) {
  return;
 }

 if (VAR_1->lib) {
  FUNC_0(VAR_1->lib);
  VAR_1->lib = ((void*)0);
 }

 if (VAR_1->symbols) {
  FUNC_2(VAR_1->symbols);
  FUNC_1(VAR_1->symbols);
 }

 if (VAR_1->tags) {
  FUNC_2(VAR_1->tags);
  FUNC_1(VAR_1->tags);
 }
}
