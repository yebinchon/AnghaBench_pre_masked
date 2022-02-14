
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
typedef int zend_constant ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char*,int) ;
 size_t FUNC_2 (char const*) ;
 int VAR_1 ;
 char* FUNC_3 () ;
 int * FUNC_4 (int ,int *) ;
 int * FUNC_5 (char const*,int,char const*,size_t,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static zend_constant *FUNC_7(const char *VAR_2, size_t VAR_3)
{
 zend_constant *VAR_4;
 static const char VAR_5[] = "__COMPILER_HALT_OFFSET__";

 if (!FUNC_0(VAR_0)) {
  return ((void*)0);
 } else if (VAR_3 == sizeof("__COMPILER_HALT_OFFSET__")-1 &&
           !FUNC_1(VAR_2, "__COMPILER_HALT_OFFSET__", sizeof("__COMPILER_HALT_OFFSET__")-1)) {
  const char *VAR_6;
  zend_string *VAR_7;
  size_t VAR_8;

  VAR_6 = FUNC_3();
  VAR_8 = FUNC_2(VAR_6);

  VAR_7 = FUNC_5(VAR_5,
   sizeof("__COMPILER_HALT_OFFSET__") - 1, VAR_6, VAR_8, 0);
  VAR_4 = FUNC_4(FUNC_0(VAR_1), VAR_7);
  FUNC_6(VAR_7);
  return VAR_4;
 } else {
  return ((void*)0);
 }
}
