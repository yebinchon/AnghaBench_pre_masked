
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_function ;
typedef int zend_class_entry ;
typedef scalar_t__ inheritance_status ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int const*,int const*) ;
 int FUNC_4 (int const*,int const*,scalar_t__) ;
 scalar_t__ FUNC_5 (int const*,int const*) ;

__attribute__((used)) static void FUNC_6(
  zend_class_entry *VAR_3, const zend_function *VAR_4,
  const zend_function *VAR_5)
{
 inheritance_status VAR_6 = FUNC_5(VAR_4, VAR_5);
 if (FUNC_1(VAR_6 != VAR_1)) {
  if (FUNC_0(VAR_6 == VAR_2)) {
   FUNC_3(VAR_3, VAR_4, VAR_5);
  } else {
   FUNC_2(VAR_6 == VAR_0);
   FUNC_4(VAR_4, VAR_5, VAR_6);
  }
 }
}
