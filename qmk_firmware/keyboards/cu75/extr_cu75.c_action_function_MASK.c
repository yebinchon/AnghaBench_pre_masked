
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
typedef int int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;

 int FUNC_0 (int ) ;
 void FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (unsigned long) ;
 void FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;

void FUNC_10(keyrecord_t *VAR_8, uint8_t VAR_9, uint8_t VAR_10)
{



    if(VAR_9 == VAR_4){

        void (*VAR_11)(uint8_t) = (VAR_8->event.pressed) ? &FUNC_1 : &FUNC_4;
        uint8_t VAR_12 = FUNC_7() & (FUNC_0(VAR_2) | FUNC_0(VAR_3));
        VAR_11(VAR_12 ? VAR_1 : VAR_0);
        FUNC_9();
    }else if(VAR_8->event.pressed){
        switch(VAR_9){
            case 128:

                FUNC_6(1UL << VAR_10);
                FUNC_3(1UL << VAR_10);
            case 135:

                FUNC_8();
                break;
            case 129:
                FUNC_5("Click:\n");
                FUNC_5("  toggle: %d\n", VAR_7);
                FUNC_5("  freq(hz): %d\n", VAR_5);
                FUNC_5("  duration(ms): %d\n", VAR_6);
                break;
        }
    }
}
