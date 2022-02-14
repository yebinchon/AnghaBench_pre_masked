
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;




 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void
FUNC_2(uint32_t VAR_4, uint8_t *VAR_5)
{
    uint32_t VAR_6, VAR_7;




    FUNC_0(VAR_4 == VAR_0);




    switch(FUNC_1(VAR_4 + VAR_3) & VAR_1)
    {



        case 131:
        {



            VAR_7 = 16;




            break;
        }




        case 130:
        {



            VAR_7 = 20;




            break;
        }




        case 129:
        {



            VAR_7 = 28;




            break;
        }




        case 128:
        {



            VAR_7 = 32;




            break;
        }




        default:
        {




            return;
        }
    }




    for(VAR_6 = 0; VAR_6 < VAR_7; VAR_6 += 4)
    {
     *((uint32_t *)(VAR_5+VAR_6)) =
                                FUNC_1(VAR_4 + VAR_2 + VAR_6);
    }
}
