
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PSAFE_READ ;
typedef int INT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ) ;

INT FUNC_1(PSAFE_READ VAR_0)
{
    INT VAR_1 = 0, VAR_2;

    for (VAR_2 = 0; VAR_2 < 32; VAR_2 += 6)
    {
        INT VAR_3 = (INT)(DWORD)FUNC_0(VAR_0);
        VAR_1 |= ((VAR_3 & 0x3f) << VAR_2);
        if (VAR_3 & 0x80)
        {
            if (VAR_3 & 0x40)
                VAR_1 *= -1;
            break;
        }
    }

    return VAR_1;
}
