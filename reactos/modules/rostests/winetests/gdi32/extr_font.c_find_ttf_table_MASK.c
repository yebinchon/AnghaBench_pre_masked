
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WORD ;
typedef scalar_t__ DWORD ;
typedef void BYTE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void *FUNC_2( void *VAR_0, DWORD VAR_1, DWORD VAR_2 )
{
    WORD VAR_3, VAR_4 = FUNC_1(*((WORD *)VAR_0 + 2));
    DWORD *VAR_5 = (DWORD *)VAR_0 + 3;

    for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
    {
        if (VAR_5[0] == VAR_2)
            return (BYTE *)VAR_0 + FUNC_0(VAR_5[2]);
        VAR_5 += 4;
    }
    return ((void*)0);
}
