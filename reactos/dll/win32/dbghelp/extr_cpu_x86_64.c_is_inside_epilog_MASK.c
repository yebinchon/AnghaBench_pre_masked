
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cpu_stack_walk {int dummy; } ;
struct TYPE_3__ {scalar_t__ EndAddress; scalar_t__ BeginAddress; } ;
typedef TYPE_1__ RUNTIME_FUNCTION ;
typedef int LONG ;
typedef scalar_t__ DWORD64 ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpu_stack_walk*,scalar_t__,int*,int) ;

__attribute__((used)) static BOOL FUNC_1(struct cpu_stack_walk* VAR_2, DWORD64 VAR_3,
                             DWORD64 VAR_4, const RUNTIME_FUNCTION *VAR_5 )
{
    BYTE VAR_6, VAR_7, VAR_8;
    LONG VAR_9;

    if (!FUNC_0(VAR_2, VAR_3, &VAR_6, 1)) return VAR_0;


    if ((VAR_6 & 0xf8) == 0x48)
    {
        if (!FUNC_0(VAR_2, VAR_3 + 1, &VAR_7, 1)) return VAR_0;
        if (!FUNC_0(VAR_2, VAR_3 + 2, &VAR_8, 1)) return VAR_0;
        switch (VAR_7)
        {
        case 0x81:
            if (VAR_6 == 0x48 && VAR_8 == 0xc4)
            {
                VAR_3 += 7;
                break;
            }
            return VAR_0;
        case 0x83:
            if (VAR_6 == 0x48 && VAR_8 == 0xc4)
            {
                VAR_3 += 4;
                break;
            }
            return VAR_0;
        case 0x8d:
            if (VAR_6 & 0x06) return VAR_0;
            if (((VAR_8 >> 3) & 7) != 4) return VAR_0;
            if ((VAR_8 & 7) == 4) return VAR_0;
            if ((VAR_8 >> 6) == 1)
            {
                VAR_3 += 4;
                break;
            }
            if ((VAR_8 >> 6) == 2)
            {
                VAR_3 += 7;
                break;
            }
            return VAR_0;
        }
    }


    for (;;)
    {
        if (!FUNC_0(VAR_2, VAR_3, &VAR_6, 1)) return VAR_0;
        if ((VAR_6 & 0xf0) == 0x40)
        {
            if (!FUNC_0(VAR_2, ++VAR_3, &VAR_6, 1)) return VAR_0;
        }

        switch (VAR_6)
        {
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5b:
        case 0x5c:
        case 0x5d:
        case 0x5e:
        case 0x5f:
            VAR_3++;
            continue;
        case 0xc2:
        case 0xc3:
            return VAR_1;
        case 0xe9:
            if (!FUNC_0(VAR_2, VAR_3 + 1, &VAR_9, sizeof(LONG))) return VAR_0;
            VAR_3 += 5 + VAR_9;
            if (VAR_3 - VAR_4 >= VAR_5->BeginAddress && VAR_3 - VAR_4 < VAR_5->EndAddress)
                continue;
            break;
        case 0xeb:
            if (!FUNC_0(VAR_2, VAR_3 + 1, &VAR_7, 1)) return VAR_0;
            VAR_3 += 2 + (signed char)VAR_7;
            if (VAR_3 - VAR_4 >= VAR_5->BeginAddress && VAR_3 - VAR_4 < VAR_5->EndAddress)
                continue;
            break;
        case 0xf3:
            if (!FUNC_0(VAR_2, VAR_3 + 1, &VAR_7, 1)) return VAR_0;
            return VAR_7 == 0xc3;
        }
        return VAR_0;
    }
}
