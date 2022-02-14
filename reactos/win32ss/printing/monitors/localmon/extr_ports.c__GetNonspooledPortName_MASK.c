
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * PWSTR ;
typedef int PCWSTR ;
typedef int DWORD ;


 int FUNC_0 (int *,int ,int) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;

__attribute__((used)) static __inline DWORD
FUNC_5(PCWSTR VAR_4, PWSTR* VAR_5)
{
    DWORD VAR_6;

    VAR_6 = FUNC_4(VAR_4);

    *VAR_5 = FUNC_1((VAR_2 + VAR_6 + 1) * sizeof(WCHAR));
    if (!*VAR_5)
    {
        FUNC_2("DllAllocSplMem failed with error %lu!\n", FUNC_3());
        return VAR_0;
    }

    FUNC_0(*VAR_5, VAR_3, VAR_2 * sizeof(WCHAR));
    FUNC_0(&(*VAR_5)[VAR_2], VAR_4, (VAR_6 + 1) * sizeof(WCHAR));

    return VAR_1;
}
