
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPDWORD ;
typedef int LPCSTR ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*,int *,int) ;

__attribute__((used)) static void FUNC_3(LPCSTR VAR_0, LPDWORD VAR_1, LPCSTR VAR_2)
{
    const char* VAR_3;
    VAR_3 = FUNC_1(VAR_0, VAR_2);
    if (VAR_3 != ((void*)0))
    {
        *VAR_1 = FUNC_2(VAR_3 + FUNC_0(VAR_2), ((void*)0), 16);
    }
}
