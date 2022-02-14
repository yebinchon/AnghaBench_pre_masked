
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef scalar_t__ LPCWSTR ;
typedef int LPCSTR ;
typedef int INT ;
typedef int BOOL ;


 int * FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int ,int,int *,int) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static inline LPWSTR FUNC_5(LPCWSTR VAR_2, BOOL VAR_3)
{
    LPWSTR VAR_4 = (LPWSTR)VAR_2;

    if (!VAR_3 && FUNC_4(VAR_2))
    {
 INT VAR_5 = FUNC_1(VAR_0, 0, (LPCSTR)VAR_2, -1, ((void*)0), 0);
 VAR_4 = FUNC_0(VAR_5 * sizeof(WCHAR));
 if (VAR_4) FUNC_1(VAR_0, 0, (LPCSTR)VAR_2, -1, VAR_4, VAR_5);
    }
    FUNC_2("   wstr=%s\n", VAR_2 == VAR_1 ? "(callback)" : FUNC_3(VAR_4));
    return VAR_4;
}
