
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;


 int FUNC_0 (int,char*,int,int,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    USHORT VAR_0[3];

    if (!&FUNC_1)
    {
        FUNC_2("SwapPword is not available\n");
        return;
    }

    VAR_0[0] = 0xff01;
    VAR_0[1] = 0x10ff;
    VAR_0[2] = 0x2001;
    FUNC_1(VAR_0, 2);
    FUNC_0((VAR_0[0] == 0x01ff && VAR_0[1] == 0xff10 && VAR_0[2] == 0x2001),
       "Expected {0x01ff,0xff10,0x2001}, got {0x%04x,0x%04x,0x%04x}\n",
       VAR_0[0], VAR_0[1], VAR_0[2]);
}
