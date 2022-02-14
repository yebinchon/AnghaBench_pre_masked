
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int u64; int kind; } ;
typedef TYPE_1__ zend_ffi_val ;
struct TYPE_8__ {int type; } ;
typedef TYPE_2__ zend_ffi_dcl ;
struct TYPE_9__ {int align; } ;


 TYPE_6__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(zend_ffi_val *VAR_1, zend_ffi_dcl *VAR_2)
{
 FUNC_1(VAR_2);
 VAR_1->kind = VAR_0;
 VAR_1->u64 = FUNC_0(VAR_2->type)->align;
 FUNC_2(VAR_2->type);
}
