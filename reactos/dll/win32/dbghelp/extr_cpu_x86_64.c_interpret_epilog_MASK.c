
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct cpu_stack_walk {int dummy; } ;
typedef int WORD ;
typedef int ULONG64 ;
struct TYPE_5__ {int Rsp; int Rip; } ;
typedef int LONG ;
typedef int DWORD64 ;
typedef TYPE_1__ CONTEXT ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (struct cpu_stack_walk*,int,int*,int) ;

__attribute__((used)) static BOOL FUNC_4(struct cpu_stack_walk* VAR_2, ULONG64 VAR_3, CONTEXT *VAR_4 )
{
    BYTE VAR_5, VAR_6;
    WORD VAR_7;
    LONG VAR_8;
    DWORD64 VAR_9;

    for (;;)
    {
        BYTE VAR_10 = 0;

        if (!FUNC_3(VAR_2, VAR_3, &VAR_5, 1)) return VAR_0;
        if ((VAR_5 & 0xf0) == 0x40)
        {
            VAR_10 = VAR_5 & 0x0f;
            if (!FUNC_3(VAR_2, ++VAR_3, &VAR_5, 1)) return VAR_0;
        }

        switch (VAR_5)
        {
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5b:
        case 0x5c:
        case 0x5d:
        case 0x5e:
        case 0x5f:
            if (!FUNC_3(VAR_2, VAR_4->Rsp, &VAR_9, sizeof(DWORD64))) return VAR_0;
            FUNC_2(VAR_4, VAR_5 - 0x58 + (VAR_10 & 1) * 8, VAR_9);
            VAR_4->Rsp += sizeof(ULONG64);
            VAR_3++;
            continue;
        case 0x81:
            if (!FUNC_3(VAR_2, VAR_3 + 2, &VAR_8, sizeof(LONG))) return VAR_0;
            VAR_4->Rsp += VAR_8;
            VAR_3 += 2 + sizeof(LONG);
            continue;
        case 0x83:
            if (!FUNC_3(VAR_2, VAR_3 + 2, &VAR_6, sizeof(BYTE))) return VAR_0;
            VAR_4->Rsp += (signed char)VAR_6;
            VAR_3 += 3;
            continue;
        case 0x8d:
            if (!FUNC_3(VAR_2, VAR_3 + 1, &VAR_5, sizeof(BYTE))) return VAR_0;
            if ((VAR_5 >> 6) == 1)
            {
                if (!FUNC_3(VAR_2, VAR_3 + 2, &VAR_6, sizeof(BYTE))) return VAR_0;
                VAR_4->Rsp = FUNC_1( VAR_4, (VAR_5 & 7) + (VAR_10 & 1) * 8 ) + (signed char)VAR_6;
                VAR_3 += 3;
            }
            else
            {
                if (!FUNC_3(VAR_2, VAR_3 + 2, &VAR_8, sizeof(LONG))) return VAR_0;
                VAR_4->Rsp = FUNC_1( VAR_4, (VAR_5 & 7) + (VAR_10 & 1) * 8 ) + VAR_8;
                VAR_3 += 2 + sizeof(LONG);
            }
            continue;
        case 0xc2:
            if (!FUNC_3(VAR_2, VAR_4->Rsp, &VAR_9, sizeof(DWORD64))) return VAR_0;
            if (!FUNC_3(VAR_2, VAR_3 + 1, &VAR_7, sizeof(WORD))) return VAR_0;
            VAR_4->Rip = VAR_9;
            VAR_4->Rsp += sizeof(ULONG64) + VAR_7;
            return VAR_1;
        case 0xc3:
        case 0xf3:
            if (!FUNC_3(VAR_2, VAR_4->Rsp, &VAR_9, sizeof(DWORD64))) return VAR_0;
            VAR_4->Rip = VAR_9;
            VAR_4->Rsp += sizeof(ULONG64);
            return VAR_1;
        case 0xe9:
            if (!FUNC_3(VAR_2, VAR_3 + 1, &VAR_8, sizeof(LONG))) return VAR_0;
            VAR_3 += 5 + VAR_8;
            continue;
        case 0xeb:
            if (!FUNC_3(VAR_2, VAR_3 + 1, &VAR_6, sizeof(BYTE))) return VAR_0;
            VAR_3 += 2 + (signed char)VAR_6;
            continue;
        }
        FUNC_0("unsupported insn %x\n", VAR_5);
        return VAR_0;
    }
}
