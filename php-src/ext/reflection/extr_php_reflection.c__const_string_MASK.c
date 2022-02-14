
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
typedef int smart_str ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*,char const*,char*,...) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int * FUNC_6 (int *,int **) ;

__attribute__((used)) static void FUNC_7(smart_str *VAR_2, char *VAR_3, zval *VAR_4, char *VAR_5)
{
 const char *VAR_6 = FUNC_5(VAR_4);

 if (FUNC_2(VAR_4) == VAR_0) {
  FUNC_3(VAR_2, "%s    Constant [ %s %s ] { Array }\n",
      VAR_5, VAR_6, VAR_3);
 } else if (FUNC_2(VAR_4) == VAR_1) {
  FUNC_3(VAR_2, "%s    Constant [ %s %s ] { %s }\n",
      VAR_5, VAR_6, VAR_3, FUNC_1(VAR_4));
 } else {
  zend_string *VAR_7;
  zend_string *VAR_8 = FUNC_6(VAR_4, &VAR_7);
  FUNC_3(VAR_2, "%s    Constant [ %s %s ] { %s }\n",
      VAR_5, VAR_6, VAR_3, FUNC_0(VAR_8));
  FUNC_4(VAR_7);
 }
}
