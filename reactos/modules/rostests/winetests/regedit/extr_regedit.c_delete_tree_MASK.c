
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char const*) ;
 scalar_t__ FUNC_5 (int ,int ,char*,scalar_t__*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_6 (int const,char const*,int ,int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *,int *,int *,int *,scalar_t__*,int *,int *,int *,int *,int *,int *) ;

__attribute__((used)) static LONG FUNC_8(const HKEY VAR_3, const char *VAR_4)
{
    HKEY VAR_5;
    LONG VAR_6;
    char *VAR_7 = ((void*)0);
    DWORD VAR_8, VAR_9;
    static const char VAR_10[1];

    VAR_6 = FUNC_6(VAR_3, VAR_4, 0, VAR_2, &VAR_5);
    if (VAR_6) return VAR_6;

    VAR_6 = FUNC_7(VAR_5, ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_8,
                           ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    if (VAR_6) goto cleanup;

    VAR_8++;

    VAR_7 = FUNC_1(FUNC_0(), 0, VAR_8);
    if (!VAR_7)
    {
        VAR_6 = VAR_0;
        goto cleanup;
    }

    for (;;)
    {
        VAR_9 = VAR_8;
        VAR_6 = FUNC_5(VAR_5, 0, VAR_7, &VAR_9, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        if (VAR_6 == VAR_1) break;
        if (VAR_6) goto cleanup;
        VAR_6 = FUNC_8(VAR_5, VAR_7);
        if (VAR_6) goto cleanup;
    }

    VAR_6 = FUNC_4(VAR_5, VAR_10);

cleanup:
    FUNC_2(FUNC_0(), 0, VAR_7);
    FUNC_3(VAR_5);
    return VAR_6;
}
