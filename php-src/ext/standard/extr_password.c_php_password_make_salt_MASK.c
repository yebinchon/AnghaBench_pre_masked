
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,size_t,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__*,int ) ;
 int * FUNC_5 (size_t,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static zend_string* FUNC_7(size_t VAR_3)
{
 zend_string *VAR_4, *VAR_5;

 if (VAR_3 > (VAR_2 / 3)) {
  FUNC_2(((void*)0), VAR_0, "Length is too large to safely generate");
  return ((void*)0);
 }

 VAR_5 = FUNC_5(VAR_3 * 3 / 4 + 1, 0);
 if (VAR_1 == FUNC_4(FUNC_1(VAR_5), FUNC_0(VAR_5))) {
  FUNC_2(((void*)0), VAR_0, "Unable to generate salt");
  FUNC_6(VAR_5, 0);
  return ((void*)0);
 }

 VAR_4 = FUNC_5(VAR_3, 0);
 if (FUNC_3(FUNC_1(VAR_5), FUNC_0(VAR_5), VAR_3, FUNC_1(VAR_4)) == VAR_1) {
  FUNC_2(((void*)0), VAR_0, "Generated salt too short");
  FUNC_6(VAR_5, 0);
  FUNC_6(VAR_4, 0);
  return ((void*)0);
 }
 FUNC_6(VAR_5, 0);
 FUNC_1(VAR_4)[VAR_3] = 0;
 return VAR_4;
}
