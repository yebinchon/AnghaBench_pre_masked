
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,unsigned int) ;
 unsigned int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    if (!&FUNC_1)
    {
        FUNC_2("UFromSz is not available\n");
        return;
    }

    FUNC_0(FUNC_1("105679") == 105679u,
       "UFromSz: expected 105679, got %d\n", FUNC_1("105679"));

    FUNC_0(FUNC_1(" 4") == 0, "UFromSz: expected 0. got %d\n",
       FUNC_1(" 4"));
}
