
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dwDataLength ;
typedef int WCHAR ;
typedef int LPSTORAGE ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int const DWORD ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int ,int const*,int,int ,int ,int **) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int const*,int const,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_3(LPSTORAGE VAR_4, const BYTE *VAR_5, DWORD VAR_6)
{
    HRESULT VAR_7;
    IStream *VAR_8;
    static const WCHAR VAR_9[] = {1, 'O', 'l', 'e', '1', '0', 'N', 'a', 't', 'i', 'v', 'e', 0};


    VAR_7 = FUNC_0(VAR_4, VAR_9,
        VAR_0 | VAR_2 | VAR_1, 0, 0, &VAR_8 );

    if(VAR_7 == VAR_3)
    {

        VAR_7 = FUNC_2(VAR_8, &VAR_6, sizeof(VAR_6), ((void*)0));
        VAR_7 = FUNC_2(VAR_8, VAR_5, VAR_6, ((void*)0));
        FUNC_1(VAR_8);
    }

}
