
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(uint32_t VAR_1, zend_string *VAR_2, zend_string *VAR_3, zend_string *VAR_4)
{
 if (FUNC_3(VAR_2, VAR_4)) {
  return;
 }

 FUNC_1(VAR_0, "Cannot use%s %s as %s because the name "
  "is already in use", FUNC_2(VAR_1), FUNC_0(VAR_2), FUNC_0(VAR_3));
}
