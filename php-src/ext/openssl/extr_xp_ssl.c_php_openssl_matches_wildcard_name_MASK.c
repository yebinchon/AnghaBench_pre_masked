
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_bool ;
typedef int ptrdiff_t ;


 int * FUNC_0 (char const*,char,size_t) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 char* FUNC_2 (char const*,char) ;
 size_t FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*,int) ;

__attribute__((used)) static zend_bool FUNC_5(const char *VAR_0, const char *VAR_1)
{
 char *VAR_2 = ((void*)0);
 ptrdiff_t VAR_3;
 size_t VAR_4, VAR_5;

 if (FUNC_1(VAR_0, VAR_1) == 0) {
  return 1;
 }


 if (!(VAR_2 = FUNC_2(VAR_1, '*')) || FUNC_0(VAR_1, '.', VAR_2 - VAR_1)) {
  return 0;
 }


 VAR_3 = VAR_2 - VAR_1;
 if (VAR_3 && FUNC_4(VAR_0, VAR_1, VAR_3) != 0) {
  return 0;
 }

 VAR_4 = FUNC_3(VAR_2 + 1);
 VAR_5 = FUNC_3(VAR_0);
 if (VAR_4 <= VAR_5) {



  return FUNC_1(VAR_2 + 1, VAR_0 + VAR_5 - VAR_4) == 0 &&
   FUNC_0(VAR_0 + VAR_3, '.', VAR_5 - VAR_4 - VAR_3) == ((void*)0);
 }

 return 0;
}
