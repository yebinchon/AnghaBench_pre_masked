
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ MmuTrapHandler ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_1()
{
    int VAR_6;

    for(VAR_6 = 0; VAR_6 < VAR_1 / sizeof(int); VAR_6++)
    {
 ((int *)VAR_0)[VAR_6] = 0;
    }


    for(VAR_6 = 0; VAR_6 < 30; VAR_6++)
    {
        VAR_3[VAR_6] = (MmuTrapHandler)VAR_2;
        if (VAR_6 != 1)
            FUNC_0(VAR_6);
    }


    VAR_3[5] = 0;


    VAR_3[6] = (MmuTrapHandler)VAR_2;


    VAR_3[8] = VAR_4;


    VAR_3[9] = VAR_5;


    VAR_3[0x20] = (MmuTrapHandler)VAR_2;
}
