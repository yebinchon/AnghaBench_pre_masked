
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
typedef int uint8_t ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 size_t FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static uint8_t FUNC_4(zend_string *VAR_1) {
 size_t VAR_2;
 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_1); VAR_2++) {
  if (FUNC_3(FUNC_2(VAR_1)[VAR_2])) {
   break;
  }
 }
 return (uint8_t)FUNC_0(VAR_2, VAR_0);
}
