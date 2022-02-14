
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int attr; } ;
typedef TYPE_1__ zend_ffi_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(zend_ffi_type *VAR_5)
{
 if (!FUNC_0(VAR_3) && (VAR_5->attr & VAR_2)) {
  FUNC_1("'[*]' not allowed in other than function prototype scope at line %d", FUNC_0(VAR_4));
  return VAR_0;
 }
 return VAR_1;
}
