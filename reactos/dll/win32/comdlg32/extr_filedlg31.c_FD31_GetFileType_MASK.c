
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef scalar_t__ LPCWSTR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static LPCWSTR FUNC_1(LPCWSTR VAR_1, LPCWSTR VAR_2, const WORD VAR_3)
{
  int VAR_4, VAR_5;
  VAR_5 = 0;
  if (VAR_1)
    for ( ;(VAR_4 = FUNC_0(VAR_1)) != 0; VAR_5++)
      {
 VAR_1 += VAR_4 + 1;
 if (VAR_5 == VAR_3)
   return VAR_1;
 VAR_1 += FUNC_0(VAR_1) + 1;
      }
  if (VAR_2)
    for ( ;(VAR_4 = FUNC_0(VAR_2)) != 0; VAR_5++)
      {
 VAR_2 += VAR_4 + 1;
 if (VAR_5 == VAR_3)
   return VAR_2;
 VAR_2 += FUNC_0(VAR_2) + 1;
    }
  return VAR_0;
}
