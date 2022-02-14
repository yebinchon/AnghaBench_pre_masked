
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;


 int FUNC_0 (int ) ;

void FUNC_1(ULONG VAR_0,ULONG VAR_1)
{
    ULONG VAR_2 = 0x300;
    ULONG VAR_3 = 0x3;

    FUNC_0((0,"SetHardwareBreakPoint(%x,DR%x)\n",VAR_0,VAR_1));

    VAR_3 <<= (VAR_1*2);
    VAR_2 |= VAR_3;

    FUNC_0((0,"mask = %x\n",VAR_2));

 __asm__ __volatile__
 ("\n\t 		xorl %%eax,%%eax\n\t 		mov %%eax,%%dr6\n\t         mov %%dr7,%%eax\n\t         orl %0,%%eax\n\t 		mov %%eax,%%dr7\n\t 	"






 :
 :"m" (VAR_2)
 :"eax");

    switch(VAR_1)
    {
        case 0:
            __asm__ __volatile__
            ("\n\t         		mov %0,%%eax\n\t 		        mov %%eax,%%dr0\n\t              "



             :
             :"m" (VAR_0)
             :"eax");
             break;
        case 1:
            __asm__ __volatile__
            ("\n\t         		mov %0,%%eax\n\t 		        mov %%eax,%%dr1\n\t              "



             :
             :"m" (VAR_0)
             :"eax");
             break;
        case 2:
            __asm__ __volatile__
            ("\n\t         		mov %0,%%eax\n\t 		        mov %%eax,%%dr2\n\t              "



             :
             :"m" (VAR_0)
             :"eax");
             break;
        case 3:
            __asm__ __volatile__
            ("\n\t         		mov %0,%%eax\n\t 		        mov %%eax,%%dr3\n\t              "



             :
             :"m" (VAR_0)
             :"eax");
             break;
    }
}
