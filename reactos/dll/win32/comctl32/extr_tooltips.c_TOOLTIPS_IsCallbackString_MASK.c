
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPCWSTR ;
typedef scalar_t__ LPCSTR ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline BOOL FUNC_0(LPCWSTR VAR_2, BOOL VAR_3)
{
    if (VAR_3)
      return VAR_2 == VAR_1;
    else
      return (LPCSTR)VAR_2 == VAR_0;
}
