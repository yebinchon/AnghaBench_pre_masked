
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; scalar_t__ is_const; scalar_t__ value; int type; } ;
typedef TYPE_1__ zend_ffi_symbol ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(zend_ffi_symbol *VAR_1, zend_ffi_symbol *VAR_2)
{
 if (VAR_1->kind != VAR_2->kind || VAR_1->is_const != VAR_2->is_const) {
  return 0;
 }

 if (VAR_1->kind == VAR_0) {
  if (VAR_1->value != VAR_2->value) {
   return 0;
  }
 }

 return FUNC_1(FUNC_0(VAR_1->type), FUNC_0(VAR_2->type));
}
