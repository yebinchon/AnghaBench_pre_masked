
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 int FUNC_0 (char*,char*,size_t) ;
 size_t FUNC_1 (char*) ;

wchar_t *FUNC_2(wchar_t *VAR_0)
{
 wchar_t *VAR_1;
 size_t VAR_2;

 if (!VAR_0)
  return VAR_0;
 if (!*VAR_0)
  return VAR_0;

 VAR_1 = VAR_0;


 while (*VAR_1 == ' ' || *VAR_1 == '\t')
  ++VAR_1;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_1 != VAR_0)
  FUNC_0(VAR_0, VAR_1, (VAR_2 + 1) * sizeof(wchar_t));

 if (VAR_2) {
  VAR_1 = VAR_0 + (VAR_2 - 1);
  while (*VAR_1 == ' ' || *VAR_1 == '\t')
   *(VAR_1--) = 0;
 }

 return VAR_0;
}
