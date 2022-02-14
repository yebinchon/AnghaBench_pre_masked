
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 () ;

uint8_t FUNC_2(void)
{
    FUNC_0();

    uint32_t VAR_4 = 0;


    VAR_1 = 's';


    uint8_t VAR_5[13] = {0};


    for (uint8_t VAR_6 = 0; VAR_6 < 13; VAR_6++) {



        while(!VAR_2){
            VAR_4++;
            if (VAR_4 > 10000){
                break;
            }
        }
        VAR_5[VAR_6] = VAR_1;
    }



    if (VAR_5[11] == 0xE0)
    {

        for (uint8_t VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
            VAR_3[VAR_7] = (uint16_t) VAR_5[VAR_7*2] | (uint16_t) VAR_5[VAR_7*2+1] << 6;
        }
    }


    FUNC_1();
    return 1;
}
