
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; int type; } ;
typedef TYPE_1__ zend_ffi_tag ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(zend_ffi_tag *VAR_0, zend_ffi_tag *VAR_1)
{
 if (VAR_0->kind != VAR_1->kind) {
  return 0;
 }

 return FUNC_1(FUNC_0(VAR_0->type), FUNC_0(VAR_1->type));
}
