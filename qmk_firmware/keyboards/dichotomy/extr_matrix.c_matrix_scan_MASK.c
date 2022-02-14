
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {void* h; void* v; void* y; void* x; } ;
typedef TYPE_1__ report_mouse_t ;
typedef void* int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int* VAR_5 ;
 int FUNC_2 () ;
 TYPE_1__ FUNC_3 () ;
 int FUNC_4 (TYPE_1__) ;
 int FUNC_5 (char*) ;

uint8_t FUNC_6(void)
{
    FUNC_0();


    uint32_t VAR_6 = 0;


    VAR_3 = 's';


    uint8_t VAR_7[11] = {0};


    for (uint8_t VAR_8 = 0; VAR_8 < 11; VAR_8++) {



        while(!VAR_4){
            VAR_6++;
            if (VAR_6 > 10000){
  FUNC_5("\r\nTime out in keyboard.");
                break;
            }
        }
        VAR_7[VAR_8] = VAR_3;
    }



            uint8_t VAR_9 = 0x00;
            for (uint8_t VAR_10=0; VAR_10<10; VAR_10++){
                VAR_9 = VAR_9^VAR_7[VAR_10];
            }
            VAR_9 = VAR_9 ^ (VAR_7[10] & 0xF0);

            VAR_9 = (VAR_9 ^ ((VAR_9 & 0xF0)>>4)) & 0x0F;

    if ((VAR_7[10] & 0x0F) == VAR_9) {






  VAR_5[0] = (((uint16_t) VAR_7[0] << 8) | ((uint16_t) VAR_7[1])) & VAR_1;
  VAR_5[1] = ((uint16_t) VAR_7[1] << 12) | ((uint16_t) VAR_7[2] << 4);
  VAR_5[2] = (((uint16_t) VAR_7[3] << 8) | ((uint16_t) VAR_7[4])) & VAR_1;
  VAR_5[3] = (((uint16_t) VAR_7[4] << 9) | ((uint16_t) VAR_7[5] << 1)) & VAR_0;
  VAR_5[4] = (((uint16_t) VAR_7[5] << 7) | ((VAR_7[10] & 1<<7) ? 1:0) << 13 | ((VAR_7[10] & 1<<6) ? 1:0) << 6) & VAR_0;

        for (uint8_t VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {







   VAR_5[VAR_11] = FUNC_1(VAR_5[VAR_11]);

        }




 report_mouse_t VAR_12 = {};





 VAR_12 = FUNC_3();


 VAR_12.x = (int8_t) VAR_7[6];

 VAR_12.y = (int8_t) VAR_7[7];

 VAR_12.v = (int8_t) VAR_7[8];

 VAR_12.h = (int8_t) VAR_7[9];





 FUNC_4(VAR_12);
    } else {

    }


    FUNC_2();
    return 1;
}
