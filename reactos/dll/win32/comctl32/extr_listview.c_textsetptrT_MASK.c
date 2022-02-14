
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPWSTR ;
typedef scalar_t__ LPCWSTR ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static BOOL FUNC_5(LPWSTR *VAR_2, LPCWSTR VAR_3, BOOL VAR_4)
{
    BOOL VAR_5 = VAR_1;

    if (VAR_3 == VAR_0)
    {
 if (FUNC_2(*VAR_2)) FUNC_0(*VAR_2);
 *VAR_2 = VAR_0;
    }
    else
    {
 LPWSTR VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (*VAR_2 == VAR_0) *VAR_2 = ((void*)0);
 VAR_5 = FUNC_1(VAR_2, VAR_6);
 FUNC_4(VAR_6, VAR_4);
    }
    return VAR_5;
}
