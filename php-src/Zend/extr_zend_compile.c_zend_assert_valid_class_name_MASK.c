
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int const*) ;

void FUNC_3(const zend_string *VAR_1)
{
 if (FUNC_2(VAR_1)) {
  FUNC_1(VAR_0,
   "Cannot use '%s' as class name as it is reserved", FUNC_0(VAR_1));
 }
}
