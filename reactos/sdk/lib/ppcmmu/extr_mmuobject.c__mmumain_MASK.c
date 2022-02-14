
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int srr1; int srr0; int dar; } ;
typedef TYPE_1__ ppc_trap_frame_t ;
typedef int paddr_t ;
typedef scalar_t__ MmuTrapHandler ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,void*,int) ;
 int FUNC_3 (int,int,int ,int ) ;
 int FUNC_4 (int,TYPE_1__*) ;
 scalar_t__* VAR_1 ;
 int FUNC_5 (void*,void*) ;
 int FUNC_6 (TYPE_1__*,void*,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (void*,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (void*,int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (void*,int) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int,int,int) ;
 int FUNC_18 (TYPE_1__*,int ) ;
 int FUNC_19 (int,TYPE_1__*) ;

int FUNC_20(int VAR_2, void *VAR_3, void *VAR_4, void *VAR_5, void *VAR_6)
{
    ppc_trap_frame_t *VAR_7 = (VAR_2 >= 0x100) ? VAR_6 : VAR_3;
    int VAR_8 = 0, VAR_9, VAR_10;

    switch(VAR_2)
    {

    case 3:
 if(!FUNC_18(VAR_7, VAR_7->dar))
 {
            FUNC_19(VAR_2, VAR_7);
        }
 break;
    case 4:
 if(!FUNC_18(VAR_7, VAR_7->srr0))
        {
            FUNC_19(VAR_2, VAR_7);
        }
 break;

    case 5:



        if (!FUNC_1(VAR_2, VAR_7) && VAR_1[VAR_2])
        {
            FUNC_19(VAR_2, VAR_7);
        }
        break;
    case 0:
    case 2:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xa:
    case 0xc:
    case 0x20:
        FUNC_19(VAR_2, VAR_7);
        break;


    case 0x100:
 FUNC_8();
        VAR_7->srr1 |= 0x8000;
 break;
    case 0x101:
 VAR_8 = FUNC_9(VAR_3, (int)VAR_4);
 break;
    case 0x102:
 FUNC_11(VAR_3, (int)VAR_4);
 break;
    case 0x103:
 FUNC_17((int)VAR_3, (int)VAR_4, (int)VAR_5);
 break;
    case 0x104:
 VAR_8 = (int)VAR_1[(int)VAR_3];
 VAR_1[(int)VAR_3] = (MmuTrapHandler)VAR_4;
 break;
    case 0x105:
 FUNC_13(VAR_3, (int)VAR_4);
 break;
    case 0x106:
 VAR_8 = FUNC_15();
 break;
    case 0x107:
        FUNC_5(VAR_3, VAR_4);
 break;
    case 0x108:
 FUNC_16((paddr_t)VAR_3);
 break;
    case 0x109:
 return VAR_0;
    case 0x10a:
 FUNC_10((int)VAR_3, (int)VAR_4);
 break;
    case 0x10b:
 FUNC_12((int)VAR_3, (int)VAR_4);
 break;
    case 0x10c:
        VAR_8 = FUNC_14();
        break;
    case 0x10d:
        FUNC_6(VAR_7, (void *)0xf040, sizeof(*VAR_7));
        __asm__("mr 1,%0\n\tb trap_finish_start" : : "r"
                (((int)VAR_7) - 16));
        break;
    case 0x10e:
        FUNC_7();
        break;

    case 0x200:
        FUNC_2((int)VAR_3, VAR_4, 9600);
        break;
    case 0x201:
        FUNC_4((int)VAR_3, VAR_7);
        break;

    default:
 while(1);
    }
    if (VAR_2 >= 0x100)
    {
        __asm__("mfmsr %0" : "=r" (VAR_9));
        VAR_9 &= ~0x30;
        __asm__("mtmsr %0" : : "r" (VAR_9));

        for(VAR_10 = 0; VAR_10 < 4; VAR_10++) {
            FUNC_3(VAR_10, 0, FUNC_0(0xf000 + VAR_10 * 16), FUNC_0(0xf004 + VAR_10 * 16));
            FUNC_3(VAR_10, 1, FUNC_0(0xf008 + VAR_10 * 16), FUNC_0(0xf00c + VAR_10 * 16));
        }
    }

    return VAR_8;
}
