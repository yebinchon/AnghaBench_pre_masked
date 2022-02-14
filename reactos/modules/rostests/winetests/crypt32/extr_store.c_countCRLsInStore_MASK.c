
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PCCRL_CONTEXT ;
typedef int HCERTSTORE ;
typedef scalar_t__ DWORD ;


 int * FUNC_0 (int ,int *) ;

__attribute__((used)) static DWORD FUNC_1(HCERTSTORE VAR_0)
{
    PCCRL_CONTEXT VAR_1 = ((void*)0);
    DWORD VAR_2 = 0;

    do {
        VAR_1 = FUNC_0(VAR_0, VAR_1);
        if (VAR_1)
            VAR_2++;
    } while (VAR_1);
    return VAR_2;
}
