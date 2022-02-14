
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int attr; } ;
typedef TYPE_1__ zend_ffi_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_4(zend_ffi_type *VAR_5, zend_ffi_type *VAR_6)
{
 if (VAR_5 == VAR_6) {
  FUNC_1("struct/union can't contain an instance of itself at line %d", FUNC_0(VAR_4));
  return VAR_0;
 } else if (FUNC_3(VAR_5, 1) != VAR_1) {
  return VAR_0;
 } else if (VAR_6->attr & VAR_3) {
  if (VAR_5->attr & VAR_2) {
   FUNC_1("flexible array member in union at line %d", FUNC_0(VAR_4));
   return VAR_0;
  }
 }
 return FUNC_2(VAR_6);
}
