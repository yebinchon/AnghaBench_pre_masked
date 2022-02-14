
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPWSTR ;
typedef scalar_t__ LPCWSTR ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static inline int FUNC_3(LPCWSTR VAR_1, LPCWSTR VAR_2, BOOL VAR_3)
{
    if (!VAR_1) return VAR_2 ? -1 : 0;
    if (!VAR_2) return 1;
    if (VAR_1 == VAR_0)
 return VAR_2 == VAR_0 ? 1 : -1;
    if (VAR_2 != VAR_0)
    {
 LPWSTR VAR_4 = FUNC_1(VAR_2, VAR_3);
 int VAR_5 = VAR_4 ? FUNC_0(VAR_1, VAR_4) : 1;
 FUNC_2(VAR_4, VAR_3);
 return VAR_5;
    }

    return 1;
}
