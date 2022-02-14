
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_6__ {TYPE_1__* ce; } ;
typedef TYPE_2__ zend_object ;
struct TYPE_7__ {int type; } ;
typedef TYPE_3__ zend_ffi_cdata ;
struct TYPE_5__ {int name; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ) ;

__attribute__((used)) static zend_string *FUNC_2(const zend_object *VAR_0)
{
 zend_ffi_cdata *VAR_1 = (zend_ffi_cdata*)VAR_0;

 return FUNC_1(VAR_0->ce->name, FUNC_0(VAR_1->type));
}
