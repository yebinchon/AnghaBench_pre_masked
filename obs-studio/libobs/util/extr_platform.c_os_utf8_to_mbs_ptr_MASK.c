
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (char const*,size_t,int **) ;
 size_t FUNC_2 (int *,size_t,char**) ;

size_t FUNC_3(const char *VAR_0, size_t VAR_1, char **VAR_2)
{
 char *VAR_3 = ((void*)0);
 size_t VAR_4 = 0;

 if (VAR_0) {
  wchar_t *VAR_5 = ((void*)0);
  size_t VAR_6 = FUNC_1(VAR_0, VAR_1, &VAR_5);
  VAR_4 = FUNC_2(VAR_5, VAR_6, &VAR_3);
  FUNC_0(VAR_5);
 }
 *VAR_2 = VAR_3;

 return VAR_4;
}
