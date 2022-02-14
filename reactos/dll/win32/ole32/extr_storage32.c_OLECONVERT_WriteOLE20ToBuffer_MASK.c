
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


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char const*,int ,char*) ;
 int FUNC_6 (int,char*) ;
 int * FUNC_7 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int ,int ,int *,int *,int *) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (scalar_t__,int *,int ,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_11 (char*,int,int ,int **) ;

__attribute__((used)) static DWORD FUNC_12(LPSTORAGE VAR_9, BYTE **VAR_10)
{
    HANDLE VAR_11;
    HRESULT VAR_12;
    DWORD VAR_13 = 0;
    IStorage *VAR_14;
    WCHAR VAR_15[VAR_3], VAR_16[VAR_3];
    static const WCHAR VAR_17[] = {'s', 'i', 's', 0};

    *VAR_10 = ((void*)0);


    FUNC_6(VAR_3, VAR_15);
    FUNC_5(VAR_15, VAR_17, 0, VAR_16);
    VAR_12 = FUNC_11(VAR_16, VAR_5 | VAR_6 | VAR_7, 0, &VAR_14);

    if(VAR_12 == VAR_8)
    {

        FUNC_8(VAR_9, 0, ((void*)0), ((void*)0), VAR_14);
        FUNC_9(VAR_14);


        VAR_11 = FUNC_1(VAR_16, VAR_1, 0, ((void*)0), VAR_4, VAR_0, 0);
        if(VAR_11 != VAR_2)
        {
            VAR_13 = FUNC_3(VAR_11, ((void*)0));
            *VAR_10 = FUNC_7(FUNC_4(),0,VAR_13);
            FUNC_10(VAR_11, *VAR_10, VAR_13, &VAR_13, 0);
            FUNC_0(VAR_11);
        }
        FUNC_2(VAR_16);
    }
    return VAR_13;
}
