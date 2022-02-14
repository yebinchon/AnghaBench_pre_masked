
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; } ;
typedef TYPE_1__ zend_ffi_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_3(zend_ffi_type *VAR_4)
{
 if (VAR_4->kind == VAR_2) {
  FUNC_1("function returning function is not allowed at line %d", FUNC_0(VAR_3));
  return VAR_0;
  } else if (VAR_4->kind == VAR_1) {
  FUNC_1("function returning array is not allowed at line %d", FUNC_0(VAR_3));
  return VAR_0;
 }
 return FUNC_2(VAR_4, 1, 0);
}
