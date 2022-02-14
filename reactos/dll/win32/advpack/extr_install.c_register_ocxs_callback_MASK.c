
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int PCWSTR ;
typedef int INFCONTEXT ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HMODULE ;
typedef int HINF ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int,int *,int ,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_8(HINF VAR_5, PCWSTR VAR_6, const void *VAR_7)
{
    HMODULE VAR_8;
    INFCONTEXT VAR_9;
    HRESULT VAR_10 = VAR_3;

    BOOL VAR_11 = FUNC_4(VAR_5, VAR_6, ((void*)0), &VAR_9);

    for (; VAR_11; VAR_11 = FUNC_5(&VAR_9, &VAR_9))
    {
        WCHAR VAR_12[VAR_2];


        if (!FUNC_6(&VAR_9, 1, VAR_12, FUNC_0(VAR_12), ((void*)0)))
            continue;

        VAR_8 = FUNC_3(VAR_12, ((void*)0), VAR_1);
        if (VAR_8)
        {
            if (FUNC_7(VAR_8, VAR_4, ((void*)0), ((void*)0)) != VAR_3)
                VAR_10 = VAR_0;

            FUNC_2(VAR_8);
        }
        else
            VAR_10 = VAR_0;

        if (FUNC_1(VAR_10))
        {

            break;
        }
    }

    return VAR_10;
}
