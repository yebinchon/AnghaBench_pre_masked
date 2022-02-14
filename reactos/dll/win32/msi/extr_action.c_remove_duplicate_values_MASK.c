
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef unsigned int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static DWORD FUNC_2( WCHAR **VAR_0, DWORD VAR_1,
                                      WCHAR **VAR_2, DWORD VAR_3 )
{
    DWORD VAR_4 = VAR_1;
    unsigned int VAR_5, VAR_6, VAR_7;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
    {
        for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
        {
            if (VAR_0[VAR_6] && !FUNC_1( VAR_2[VAR_5], VAR_0[VAR_6] ))
            {
                FUNC_0( VAR_0[VAR_6] );
                for (VAR_7 = VAR_6; VAR_7 < VAR_1 - 1; VAR_7++) { VAR_0[VAR_7] = VAR_0[VAR_7 + 1]; }
                VAR_0[VAR_7] = ((void*)0);
                VAR_4--;
            }
        }
    }
    return VAR_4;
}
