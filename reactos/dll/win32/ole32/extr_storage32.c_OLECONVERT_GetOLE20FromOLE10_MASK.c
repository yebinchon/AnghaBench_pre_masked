
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LPSTORAGE ;
typedef int IStorage ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,char const*,int ,char*) ;
 int FUNC_4 (int,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (int *,int ,int *,int *,int ) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_7 (char*,int *,int ,int *,int ,int **) ;
 int FUNC_8 (scalar_t__,int const*,int ,int *,int *) ;

__attribute__((used)) static void FUNC_9(LPSTORAGE VAR_7, const BYTE *VAR_8, DWORD VAR_9)
{
    HRESULT VAR_10;
    HANDLE VAR_11;
    IStorage *VAR_12;
    DWORD VAR_13;
    WCHAR VAR_14[VAR_4], VAR_15[VAR_4];
    static const WCHAR VAR_16[] = {'s', 'i', 's', 0};


    FUNC_4(VAR_4, VAR_14);
    FUNC_3(VAR_14, VAR_16, 0, VAR_15);
    VAR_11 = FUNC_1(VAR_15, VAR_2, 0, ((void*)0), VAR_0, VAR_1, 0);

    if(VAR_11 != VAR_3)
    {

        FUNC_8(VAR_11, VAR_8, VAR_9, &VAR_13, ((void*)0));
        FUNC_0(VAR_11);


        VAR_10 = FUNC_7(VAR_15, ((void*)0), VAR_5, ((void*)0), 0, &VAR_12);
        if(VAR_10 == VAR_6)
        {
            VAR_10 = FUNC_5(VAR_12, 0, ((void*)0), ((void*)0), VAR_7);
            FUNC_6(VAR_12);
        }
        FUNC_2(VAR_15);
    }
}
