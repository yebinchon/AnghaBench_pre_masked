
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IdtEntry {int HiOffset; int LoOffset; int SegSel; } ;
typedef void* USHORT ;
typedef int ULONG ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

ULONG FUNC_3(ULONG VAR_0,ULONG VAR_1)
{
    ULONG VAR_2[2];
    ULONG VAR_3;
    struct IdtEntry* VAR_4;
    struct IdtEntry VAR_5;

    FUNC_1();


 __asm__("sidt %0":"=m" (VAR_2));


 VAR_4=((struct IdtEntry*)((VAR_2[1]<<16)|((VAR_2[0]>>16)&0x0000FFFF)))+VAR_0;

 VAR_5=*VAR_4;


 VAR_4->HiOffset=(USHORT)(((ULONG)VAR_1)>>16);
 VAR_4->LoOffset=(USHORT)(((ULONG)VAR_1)&0x0000FFFF);

    FUNC_0((0,"new INT(%0.2x) handler = %0.4x:%x\n",VAR_0,VAR_4->SegSel,(VAR_4->HiOffset<<16)|(VAR_4->LoOffset&0x0000FFFF)));

 VAR_3=(VAR_5.HiOffset<<16)|(VAR_5.LoOffset&0x0000FFFF);

    FUNC_0((0,"old INT(%0.2x) handler = %0.4x:%x\n",VAR_0,VAR_4->SegSel,VAR_3));

    FUNC_2();

 return VAR_3;
}
