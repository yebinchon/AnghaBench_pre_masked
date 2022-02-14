
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (int,int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__,void*,int ,int *,int *) ;

__attribute__((used)) static BOOL FUNC_6(LPCWSTR VAR_6, LPWSTR VAR_7)
{
    WCHAR VAR_8[VAR_5];
    HANDLE VAR_9;
    void *VAR_10;
    DWORD VAR_11;
    BOOL VAR_12;

    VAR_10 = FUNC_2(VAR_6, &VAR_11);
    if (!VAR_10) return VAR_1;

    FUNC_4(VAR_5, VAR_8);
    FUNC_3(VAR_8, L"ttf", 0, VAR_7);

    VAR_9 = FUNC_1(VAR_7, VAR_3, 0, ((void*)0), VAR_0, VAR_2, 0);
    if (VAR_9 == VAR_4) return VAR_1;

    VAR_12 = FUNC_5(VAR_9, VAR_10, VAR_11, &VAR_11, ((void*)0));

    FUNC_0(VAR_9);
    return VAR_12;
}
