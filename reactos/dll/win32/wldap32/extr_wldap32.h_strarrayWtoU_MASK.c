
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPWSTR ;
typedef int DWORD ;


 char** FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*) ;

__attribute__((used)) static inline char **FUNC_3( LPWSTR *VAR_0 )
{
    char **VAR_1 = ((void*)0);
    DWORD VAR_2;

    if (VAR_0)
    {
        VAR_2 = sizeof(char*) * (FUNC_2( VAR_0 ) + 1);
        if ((VAR_1 = FUNC_0( VAR_2 )))
        {
            LPWSTR *VAR_3 = VAR_0;
            char **VAR_4 = VAR_1;

            while (*VAR_3) *VAR_4++ = FUNC_1( *VAR_3++ );
            *VAR_4 = ((void*)0);
        }
    }
    return VAR_1;
}
