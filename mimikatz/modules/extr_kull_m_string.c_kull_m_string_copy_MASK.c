
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPWSTR ;
typedef scalar_t__ LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,size_t) ;
 size_t FUNC_1 (scalar_t__) ;

BOOL FUNC_2(LPWSTR *VAR_1, LPCWSTR VAR_2)
{
 BOOL VAR_3 = VAR_0;
 size_t VAR_4;
 if(VAR_2 && VAR_1 && (VAR_4 = FUNC_1(VAR_2)))
  VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_4);
 return VAR_3;
}
