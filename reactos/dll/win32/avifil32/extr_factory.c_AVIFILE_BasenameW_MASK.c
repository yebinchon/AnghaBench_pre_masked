
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCWSTR ;


 int FUNC_0 (char) ;
 int FUNC_1 (char*) ;

LPCWSTR FUNC_2(LPCWSTR VAR_0)
{


  LPCWSTR VAR_1;

  for (VAR_1 = VAR_0 + FUNC_1(VAR_0);
       VAR_1 > VAR_0 && !((*VAR_1) == '/' || (*VAR_1) == '\\') && *VAR_1 != ':';)
    VAR_1--;

  if (VAR_1 == VAR_0)
    return VAR_1;
  else
    return VAR_1 + 1;


}
