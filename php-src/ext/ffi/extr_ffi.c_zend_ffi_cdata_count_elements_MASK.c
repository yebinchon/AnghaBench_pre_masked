
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_object ;
typedef int zend_long ;
struct TYPE_5__ {int length; } ;
struct TYPE_6__ {scalar_t__ kind; TYPE_1__ array; } ;
typedef TYPE_2__ zend_ffi_type ;
struct TYPE_7__ {int type; } ;
typedef TYPE_3__ zend_ffi_cdata ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(zend_object *VAR_4, zend_long *VAR_5)
{
 zend_ffi_cdata *VAR_6 = (zend_ffi_cdata*)VAR_4;
 zend_ffi_type *VAR_7 = FUNC_0(VAR_6->type);

 if (VAR_7->kind != VAR_2) {
  FUNC_1(VAR_3, "Attempt to count() on non C array");
  return VAR_0;
 } else {
  *VAR_5 = VAR_7->array.length;
  return VAR_1;
 }
}
