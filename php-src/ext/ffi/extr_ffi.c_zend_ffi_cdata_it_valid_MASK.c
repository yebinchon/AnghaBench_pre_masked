
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zend_object_iterator ;
struct TYPE_8__ {scalar_t__ length; } ;
struct TYPE_9__ {TYPE_2__ array; } ;
typedef TYPE_3__ zend_ffi_type ;
struct TYPE_7__ {int data; } ;
struct TYPE_10__ {scalar_t__ key; TYPE_1__ it; } ;
typedef TYPE_4__ zend_ffi_cdata_iterator ;
struct TYPE_11__ {int type; } ;
typedef TYPE_5__ zend_ffi_cdata ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(zend_object_iterator *VAR_2)
{
 zend_ffi_cdata_iterator *VAR_3 = (zend_ffi_cdata_iterator*)VAR_2;
 zend_ffi_cdata *VAR_4 = (zend_ffi_cdata*)FUNC_1(VAR_3->it.data);
 zend_ffi_type *VAR_5 = FUNC_0(VAR_4->type);

 return (VAR_3->key >= 0 && VAR_3->key < VAR_5->array.length) ? VAR_1 : VAR_0;
}
