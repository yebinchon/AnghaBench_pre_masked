
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; int attr; } ;
typedef TYPE_1__ zend_ffi_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3(zend_ffi_type *VAR_5)
{
 if (VAR_5->kind == VAR_3) {
  FUNC_1("array of functions is not allowed at line %d", FUNC_0(VAR_4));
  return VAR_0;
 } else if (VAR_5->kind == VAR_2 && (VAR_5->attr & VAR_1)) {
  FUNC_1("only the leftmost array can be undimensioned at line %d", FUNC_0(VAR_4));
  return VAR_0;
 }
 return FUNC_2(VAR_5, 0, 1);
}
