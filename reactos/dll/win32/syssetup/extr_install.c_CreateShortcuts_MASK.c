
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPCWSTR ;
typedef int INT ;
typedef int INFCONTEXT ;
typedef int HINF ;
typedef int HANDLE ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int,int ,int ,int *,int *) ;
 int FUNC_6 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,int*) ;
 int FUNC_10 (int *,int,int *,int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_11(HINF VAR_5, LPCWSTR VAR_6)
{
    INFCONTEXT VAR_7;
    WCHAR VAR_8[VAR_2];
    WCHAR VAR_9[VAR_2];
    WCHAR VAR_10[VAR_2];
    INT VAR_11;

    FUNC_1(((void*)0));

    if (!FUNC_6(VAR_5, VAR_6, ((void*)0), &VAR_7))
        return VAR_1;

    do
    {
        if (FUNC_8(&VAR_7) < 2)
            continue;

        if (!FUNC_10(&VAR_7, 0, VAR_10, FUNC_0(VAR_10), ((void*)0)))
            continue;

        if (!FUNC_9(&VAR_7, 1, &VAR_11))
            continue;

        if (!FUNC_10(&VAR_7, 2, VAR_9, FUNC_0(VAR_9), ((void*)0)))
            continue;

        if (FUNC_4(FUNC_5(((void*)0), VAR_11|VAR_0, (HANDLE)-1, VAR_3, VAR_9, VAR_8)))
            continue;

        FUNC_3(VAR_5, VAR_10, VAR_8);

    } while (FUNC_7(&VAR_7, &VAR_7));

    FUNC_2();

    return VAR_4;
}
