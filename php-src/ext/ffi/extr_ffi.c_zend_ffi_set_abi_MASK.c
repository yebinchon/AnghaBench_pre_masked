
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ abi; } ;
typedef TYPE_1__ zend_ffi_dcl ;
typedef scalar_t__ uint16_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;

void FUNC_2(zend_ffi_dcl *VAR_2, uint16_t VAR_3)
{
 if (VAR_2->abi != VAR_0) {
  FUNC_1("multiple calling convention specifiers at line %d", FUNC_0(VAR_1));
 } else {
  VAR_2->abi = VAR_3;
 }
}
