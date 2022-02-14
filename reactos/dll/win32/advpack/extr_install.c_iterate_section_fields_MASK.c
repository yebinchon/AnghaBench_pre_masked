
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* iterate_fields_func ) (int ,int *,void*) ;
typedef int WCHAR ;
typedef int UINT ;
typedef int PCWSTR ;
typedef int INFCONTEXT ;
typedef scalar_t__ HRESULT ;
typedef int HINF ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int,int *,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_7(HINF VAR_2, PCWSTR VAR_3, PCWSTR VAR_4,
                                      iterate_fields_func VAR_5, void *VAR_6)
{
    WCHAR VAR_7[200];
    WCHAR *VAR_8 = VAR_7;
    DWORD VAR_9 = FUNC_0(VAR_7);
    INFCONTEXT VAR_10;
    HRESULT VAR_11 = VAR_0;

    BOOL VAR_12 = FUNC_3(VAR_2, VAR_3, VAR_4, &VAR_10);
    while (VAR_12)
    {
        UINT VAR_13, VAR_14 = FUNC_5(&VAR_10);

        for (VAR_13 = 1; VAR_13 <= VAR_14; VAR_13++)
        {
            if (!(VAR_8 = FUNC_6(&VAR_10, VAR_13, VAR_8, VAR_7, &VAR_9)))
                goto done;

            if ((VAR_11 = VAR_5(VAR_2, VAR_8, VAR_6)) != VAR_1)
                goto done;
        }

        VAR_12 = FUNC_4(&VAR_10, VAR_4, &VAR_10);
    }

    VAR_11 = VAR_1;

 done:
    if (VAR_8 != VAR_7) FUNC_2(FUNC_1(), 0, VAR_8);
    return VAR_11;
}
