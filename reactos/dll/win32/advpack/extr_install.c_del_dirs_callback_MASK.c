
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int PCWSTR ;
typedef int INFCONTEXT ;
typedef scalar_t__ HRESULT ;
typedef int HINF ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int *,int *,int *,int,int *) ;

__attribute__((used)) static HRESULT FUNC_4(HINF VAR_4, PCWSTR VAR_5, const void *VAR_6)
{
    INFCONTEXT VAR_7;
    HRESULT VAR_8 = VAR_3;
    DWORD VAR_9;

    BOOL VAR_10 = FUNC_1(VAR_4, VAR_5, ((void*)0), &VAR_7);

    for (; VAR_10; VAR_10 = FUNC_2(&VAR_7, &VAR_7))
    {
        WCHAR VAR_11[VAR_2];

        if (!FUNC_3(&VAR_7, ((void*)0), ((void*)0), ((void*)0), VAR_11,
                               VAR_2, &VAR_9))
            continue;

        if (FUNC_0(VAR_11, VAR_0) != VAR_3)
            VAR_8 = VAR_1;
    }

    return VAR_8;
}
