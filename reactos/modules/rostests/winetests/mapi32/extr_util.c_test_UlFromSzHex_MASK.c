
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    if (!&FUNC_1)
    {
        FUNC_2("UlFromSzHex is not available\n");
        return;
    }

    FUNC_0(FUNC_1("fF") == 0xffu,
       "UlFromSzHex: expected 0xff, got 0x%x\n", FUNC_1("fF"));

    FUNC_0(FUNC_1(" c") == 0, "UlFromSzHex: expected 0x0. got 0x%x\n",
       FUNC_1(" c"));
}
