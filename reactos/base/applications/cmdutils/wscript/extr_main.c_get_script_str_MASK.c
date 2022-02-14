
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int * BSTR ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int const*,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__,int *) ;
 scalar_t__ VAR_4 ;
 char* FUNC_4 (scalar_t__,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,char const*,int ,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static BSTR FUNC_8(const WCHAR *VAR_7)
{
    const char *VAR_8;
    HANDLE VAR_9, VAR_10;
    DWORD VAR_11, VAR_12;
    BSTR VAR_13;

    VAR_9 = FUNC_2(VAR_7, VAR_3, 0, ((void*)0), VAR_5, VAR_1, ((void*)0));
    if(VAR_9 == VAR_4)
        return ((void*)0);

    VAR_11 = FUNC_3(VAR_9, ((void*)0));
    VAR_10 = FUNC_1(VAR_9, ((void*)0), VAR_6, 0, 0, ((void*)0));
    FUNC_0(VAR_9);
    if(VAR_10 == VAR_4)
        return ((void*)0);

    VAR_8 = FUNC_4(VAR_10, VAR_2, 0, 0, 0);
    FUNC_0(VAR_10);
    if(!VAR_8)
        return ((void*)0);

    VAR_12 = FUNC_5(VAR_0, 0, VAR_8, VAR_11, ((void*)0), 0);
    VAR_13 = FUNC_6(((void*)0), VAR_12);
    FUNC_5(VAR_0, 0, VAR_8, VAR_11, VAR_13, VAR_12);

    FUNC_7(VAR_8);
    return VAR_13;
}
