
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,scalar_t__) ;
 int * FUNC_3 (int ,int ,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_4(BYTE **VAR_0, DWORD *VAR_1, DWORD VAR_2)
{
    if (VAR_2 > *VAR_1) {
        *VAR_1 = VAR_2;
        if (!*VAR_0)
            *VAR_0 = FUNC_2(FUNC_1(), 0, *VAR_1);
        else
            *VAR_0 = FUNC_3(FUNC_1(), 0, *VAR_0, *VAR_1);
        FUNC_0(*VAR_0);
    }
}
