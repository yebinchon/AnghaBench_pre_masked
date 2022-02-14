
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;


 size_t FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;

__attribute__((used)) static size_t FUNC_2(zend_string *VAR_0) {
 size_t VAR_1, VAR_2 = FUNC_0(VAR_0);
 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
  switch (FUNC_1(VAR_0)[VAR_1]) {
   case '*':
   case '.':
   case '\\':
   case '(':
   case ')':
   case '~':
   case '+':
    VAR_2++;
    break;
  }
 }

 return VAR_2 + sizeof("~^$~")-1;
}
