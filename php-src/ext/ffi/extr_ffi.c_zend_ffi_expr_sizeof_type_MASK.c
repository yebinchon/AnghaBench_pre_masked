
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int u64; int kind; } ;
typedef TYPE_1__ zend_ffi_val ;
struct TYPE_9__ {int size; } ;
typedef TYPE_2__ zend_ffi_type ;
struct TYPE_10__ {int type; } ;
typedef TYPE_3__ zend_ffi_dcl ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(zend_ffi_val *VAR_2, zend_ffi_dcl *VAR_3)
{
 zend_ffi_type *VAR_4;

 FUNC_1(VAR_3);
 VAR_4 = FUNC_0(VAR_3->type);
 VAR_2->kind = (VAR_4->size > 0xffffffff) ? VAR_1 : VAR_0;
 VAR_2->u64 = VAR_4->size;
 FUNC_2(VAR_3->type);
}
