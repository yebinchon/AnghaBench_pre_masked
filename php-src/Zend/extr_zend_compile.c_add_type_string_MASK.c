
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;
 int * FUNC_3 (int,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static zend_string *FUNC_6(zend_string *VAR_0, zend_string *VAR_1) {
 zend_string *VAR_2;
 if (VAR_0 == ((void*)0)) {
  return FUNC_4(VAR_1);
 }


 VAR_2 = FUNC_3(FUNC_0(VAR_0) + FUNC_0(VAR_1) + 1, 0);
 FUNC_2(FUNC_1(VAR_2), FUNC_1(VAR_0), FUNC_0(VAR_0));
 FUNC_1(VAR_2)[FUNC_0(VAR_0)] = '|';
 FUNC_2(FUNC_1(VAR_2) + FUNC_0(VAR_0) + 1, FUNC_1(VAR_1), FUNC_0(VAR_1));
 FUNC_1(VAR_2)[FUNC_0(VAR_0) + FUNC_0(VAR_1) + 1] = '\0';
 FUNC_5(VAR_0);
 return VAR_2;
}
