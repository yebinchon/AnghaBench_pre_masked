
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int paddr_t ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

void FUNC_1(int VAR_3)
{
    int VAR_4;
    paddr_t VAR_5 = VAR_3 * 0x100;


    VAR_1[0] = (int)VAR_0;

    for (VAR_4 = 0; VAR_4 <= VAR_1 - VAR_2; VAR_4++)
    {
        FUNC_0(VAR_5 + (VAR_4 * sizeof(int)), VAR_2[VAR_4]);
    }
}
