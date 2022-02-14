
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zend_long ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char**,int) ;

__attribute__((used)) inline static int
FUNC_2(char **VAR_1, size_t *VAR_2)
{
 char *VAR_3;
 register zend_long VAR_4 = FUNC_1(*VAR_1, &VAR_3, 10);
 register size_t VAR_5;

 if (VAR_3 != ((void*)0)) {
  VAR_5 = (VAR_3 - *VAR_1);
  *VAR_2 -= VAR_5;
  *VAR_1 = VAR_3;
 }
 FUNC_0(("sprintf_getnumber: number was %d bytes long\n", VAR_5));

 if (VAR_4 >= VAR_0 || VAR_4 < 0) {
  return -1;
 } else {
  return (int) VAR_4;
 }
}
