
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const zend_string ;
typedef int zend_bool ;


 size_t FUNC_0 (int const*) ;
 int* FUNC_1 (int const*) ;
 int const* FUNC_2 (int*,int,int*,int,int) ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static zend_bool FUNC_4(const zend_string *VAR_0, const zend_string *VAR_1) {
 size_t VAR_2;
 int VAR_3 = 0;
 zend_string *VAR_4 = FUNC_2(FUNC_1(VAR_0), (int)FUNC_0(VAR_0), FUNC_1(VAR_1), (int)FUNC_0(VAR_1), 1);

 if (!VAR_4) {
  return 0;
 }

 if (FUNC_0(VAR_4) != FUNC_0(VAR_1) || FUNC_0(VAR_1) < 13) {
  FUNC_3(VAR_4);
  return 0;
 }





 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
  VAR_3 |= (FUNC_1(VAR_4)[VAR_2] ^ FUNC_1(VAR_1)[VAR_2]);
 }

 FUNC_3(VAR_4);
 return VAR_3 == 0;
}
