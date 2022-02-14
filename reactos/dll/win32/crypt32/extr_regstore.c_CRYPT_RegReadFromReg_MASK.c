
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LONG ;
typedef int HKEY ;
typedef int HCERTSTORE ;
typedef size_t DWORD ;


 size_t FUNC_0 (int const* const*) ;




 int FUNC_1 (int ,size_t const,int ) ;


 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int const* const,int ,int *,int ,int ,int *,int *,int *) ;

__attribute__((used)) static void FUNC_4(HKEY VAR_1, HCERTSTORE VAR_2)
{
    static const WCHAR * const VAR_3[] = { 128, 130, 129 };
    static const DWORD VAR_4[] = { 133,
     132, 131 };
    DWORD VAR_5;

    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++)
    {
        HKEY VAR_6;
        LONG VAR_7;

        VAR_7 = FUNC_3(VAR_1, VAR_3[VAR_5], 0, ((void*)0), 0, VAR_0, ((void*)0),
         &VAR_6, ((void*)0));
        if (!VAR_7)
        {
            FUNC_1(VAR_6, VAR_4[VAR_5], VAR_2);
            FUNC_2(VAR_6);
        }
    }
}
