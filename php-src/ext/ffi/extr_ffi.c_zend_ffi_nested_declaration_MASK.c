
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * type; } ;
typedef TYPE_1__ zend_ffi_dcl ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int VAR_3 ;

void FUNC_5(zend_ffi_dcl *VAR_4, zend_ffi_dcl *VAR_5)
{

 FUNC_3(VAR_4);
 if (!VAR_5->type || VAR_5->type == &VAR_3) {
  VAR_5->type = VAR_4->type;
 } else {
  if (FUNC_4(VAR_4->type, VAR_5->type) != VAR_1) {
   FUNC_2(VAR_5);
   FUNC_1(FUNC_0(VAR_2), VAR_0);
  }
 }
 VAR_4->type = VAR_5->type;
}
