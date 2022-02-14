
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;
 int * FUNC_3 (int,int ) ;

__attribute__((used)) static zend_string *FUNC_4(zend_string *VAR_0, zend_string *VAR_1) {
 zend_string *VAR_2 = FUNC_3(
  FUNC_0(VAR_0) + FUNC_0(VAR_1) + sizeof("::") - 1, 0);
 char *VAR_3 = FUNC_1(VAR_2);
 FUNC_2(VAR_3, FUNC_1(VAR_0), FUNC_0(VAR_0));
 VAR_3 += FUNC_0(VAR_0);
 FUNC_2(VAR_3, "::", sizeof("::") - 1);
 VAR_3 += sizeof("::") - 1;
 FUNC_2(VAR_3, FUNC_1(VAR_1), FUNC_0(VAR_1) + 1);
 return VAR_2;
}
