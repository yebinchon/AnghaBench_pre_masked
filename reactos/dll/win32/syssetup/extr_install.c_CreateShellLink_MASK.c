
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef int LPCWSTR ;
typedef int IShellLinkW ;
typedef int IPersistFile ;
typedef int INT ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_4 ;

__attribute__((used)) static HRESULT
FUNC_11(
    LPCWSTR VAR_5,
    LPCWSTR VAR_6,
    LPCWSTR VAR_7,
    LPCWSTR VAR_8,
    LPCWSTR VAR_9,
    INT VAR_10,
    LPCWSTR VAR_11)
{
    IShellLinkW *VAR_12;
    IPersistFile *VAR_13;

    HRESULT VAR_14 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_3, (LPVOID*)&VAR_12);

    if (FUNC_10(VAR_14))
    {
        VAR_14 = FUNC_8(VAR_12, VAR_6);

        if (VAR_7)
            VAR_14 = FUNC_5(VAR_12, VAR_7);

        if (VAR_8)
            VAR_14 = FUNC_9(VAR_12, VAR_8);

        if (VAR_9)
            VAR_14 = FUNC_7(VAR_12, VAR_9, VAR_10);

        if (VAR_11)
            VAR_14 = FUNC_6(VAR_12, VAR_11);

        VAR_14 = FUNC_3(VAR_12, &VAR_2, (LPVOID*)&VAR_13);

        if (FUNC_10(VAR_14))
        {
            VAR_14 = FUNC_2(VAR_13, VAR_5, VAR_4);
            FUNC_1(VAR_13);
        }

        FUNC_4(VAR_12);
    }

    return VAR_14;
}
