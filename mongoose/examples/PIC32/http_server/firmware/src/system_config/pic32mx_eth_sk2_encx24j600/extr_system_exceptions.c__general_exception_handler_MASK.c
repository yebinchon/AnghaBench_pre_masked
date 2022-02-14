
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int ,size_t,int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int * VAR_4 ;

void FUNC_4 ( void )
{


    VAR_3 = (FUNC_2() & 0x0000007C) >> 2;
    VAR_2 = FUNC_3();
    VAR_1 = VAR_4[VAR_3];

    FUNC_1(VAR_0, "\nGeneral Exception %s (cause=%d, addr=%x).\n",
                    VAR_1, VAR_3, VAR_2);

    while (1)
    {
        FUNC_0();
    }
}
