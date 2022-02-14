
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPWSTR ;
typedef int LPCWSTR ;
typedef int IUri ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int **) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int *,int *,int ) ;
 int FUNC_5 (int ,int *,int **) ;

__attribute__((used)) static HRESULT FUNC_6(LPCWSTR VAR_3, BYTE *VAR_4, DWORD *VAR_5)
{
    HRESULT VAR_6;
    DWORD VAR_7 = VAR_1;
    LPWSTR VAR_8 = ((void*)0);
    IUri *VAR_9;

    VAR_6 = FUNC_5(VAR_3, &VAR_7, &VAR_8);
    if(FUNC_2(VAR_6))
        return VAR_6 == 0x80041001 ? VAR_0 : VAR_6;

    VAR_6 = FUNC_1(VAR_8, VAR_2, 0, &VAR_9);
    FUNC_0(VAR_8);
    if(FUNC_2(VAR_6))
        return VAR_6;

    VAR_6 = FUNC_4(VAR_9, VAR_4, VAR_5, VAR_7);
    FUNC_3(VAR_9);

    return VAR_6;
}
