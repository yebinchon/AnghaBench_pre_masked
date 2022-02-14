
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 (char*,scalar_t__,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void FUNC_5(zval *VAR_0) {
 if (FUNC_2(VAR_0)[0] == '\\') {
  zend_string *VAR_1 = FUNC_3(FUNC_2(VAR_0) + 1, FUNC_1(VAR_0) - 1, 0);
  FUNC_4(VAR_0);
  FUNC_0(VAR_0, VAR_1);
 }
}
