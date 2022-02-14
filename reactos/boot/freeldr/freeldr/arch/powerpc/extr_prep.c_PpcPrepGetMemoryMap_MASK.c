
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int paddr_t ;
typedef int ULONG ;
struct TYPE_3__ {int BaseAddress; int Length; int Type; } ;
typedef TYPE_1__* PBIOS_MEMORY_MAP ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;

ULONG FUNC_3( PBIOS_MEMORY_MAP VAR_2,
               ULONG VAR_3 )
{

    paddr_t VAR_4;
    register int VAR_5 = 0, VAR_6 = 0, VAR_7 = 0, VAR_8;

    __asm__("mfmsr %0\n" : "=r" (VAR_8));
    VAR_7 = VAR_8 & 0x6fff;
    __asm__("mtmsr %0\n" : : "r" (VAR_7));




    for (VAR_4 = 0x40000, VAR_7 = VAR_6;
         (VAR_4 < 0x80000000) && (VAR_7 == VAR_6);
         VAR_4 += 1 << 12)
    {
        VAR_5 = FUNC_0(VAR_4);
        VAR_6 = (VAR_4 & 0x1000) ? 0x55aa55aa : 0xaa55aa55;
        FUNC_1(VAR_4, VAR_6);
        VAR_7 = FUNC_0(VAR_4);
        FUNC_1(VAR_4, VAR_5);
    }

    VAR_4 -= 0x1000;
    VAR_2[0].BaseAddress = 0x30000;
    VAR_2[0].Type = VAR_0;
    VAR_2[0].Length = VAR_4 - VAR_2[0].BaseAddress;

    __asm__("mtmsr %0\n" : : "r" (VAR_8));

    VAR_1 = VAR_4;

    FUNC_2("Actual RAM: %d Mb\n", VAR_4 >> 20);
    return 1;
}
