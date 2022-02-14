
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const WCHAR ;
typedef int INFCONTEXT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int const* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int const*) ;
 scalar_t__ FUNC_4 (int *,int,int const*,int,int*) ;

__attribute__((used)) static WCHAR *FUNC_5(INFCONTEXT *VAR_1, DWORD VAR_2, WCHAR *VAR_3,
                               const WCHAR *VAR_4, DWORD *VAR_5)
{
    DWORD VAR_6;

    if (FUNC_4(VAR_1, VAR_2, VAR_3, *VAR_5, &VAR_6)) return VAR_3;

    if (FUNC_0() == VAR_0)
    {

        if (VAR_3 != VAR_4) FUNC_3(FUNC_1(), 0, VAR_3);
        if (!(VAR_3 = FUNC_2(FUNC_1(), 0, VAR_6*sizeof(WCHAR)))) return ((void*)0);
        *VAR_5 = VAR_6;
        if (FUNC_4(VAR_1, VAR_2, VAR_3, *VAR_5, &VAR_6)) return VAR_3;
    }

    if (VAR_3 != VAR_4) FUNC_3(FUNC_1(), 0, VAR_3);
    return ((void*)0);
}
