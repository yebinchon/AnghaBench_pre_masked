
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; int align; } ;
typedef TYPE_1__ zend_ffi_dcl ;
struct TYPE_7__ {int align; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_5__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(zend_ffi_dcl *VAR_0, zend_ffi_dcl *VAR_1)
{
 FUNC_2(VAR_1);
 VAR_0->align = FUNC_0(VAR_1->align, FUNC_1(VAR_1->type)->align);
}
