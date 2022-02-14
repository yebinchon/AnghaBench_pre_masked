
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;


 int FUNC_0 (int,char*,int,int,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    ULONG VAR_0[3];

    if (!&FUNC_1)
    {
        FUNC_2("SwapPlong is not available\n");
        return;
    }

    VAR_0[0] = 0xffff0001;
    VAR_0[1] = 0x1000ffff;
    VAR_0[2] = 0x20000001;
    FUNC_1(VAR_0, 2);
    FUNC_0((VAR_0[0] == 0x0100ffff && VAR_0[1] == 0xffff0010 && VAR_0[2] == 0x20000001),
       "Expected {0x0100ffff,0xffff0010,0x20000001}, got {0x%08x,0x%08x,0x%08x}\n",
       VAR_0[0], VAR_0[1], VAR_0[2]);
}
