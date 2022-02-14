
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int PSAFE_READ ;
typedef int DWORD ;


 int FUNC_0 (int ) ;

DWORD FUNC_1(PSAFE_READ VAR_0)
{
    UINT VAR_1 = 0, VAR_2;

    for (VAR_2 = 0; VAR_2 < 32; VAR_2 += 7)
    {
        DWORD VAR_3 = FUNC_0(VAR_0);
        VAR_1 |= ((VAR_3 & 0x7f) << VAR_2);
        if (VAR_3 & 0x80)
            break;
    }

    return VAR_1;
}
