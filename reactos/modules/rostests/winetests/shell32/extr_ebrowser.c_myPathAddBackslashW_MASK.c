
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPWSTR ;


 size_t VAR_0 ;
 size_t FUNC_0 (char*) ;

__attribute__((used)) static LPWSTR FUNC_1( LPWSTR VAR_1 )
{
  size_t VAR_2;

  if (!VAR_1 || (VAR_2 = FUNC_0(VAR_1)) >= VAR_0)
    return ((void*)0);

  if (VAR_2)
  {
    VAR_1 += VAR_2;
    if (VAR_1[-1] != '\\')
    {
      *VAR_1++ = '\\';
      *VAR_1 = '\0';
    }
  }
  return VAR_1;
}
