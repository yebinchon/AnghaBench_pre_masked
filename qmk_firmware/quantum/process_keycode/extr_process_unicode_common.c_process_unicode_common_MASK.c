
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {scalar_t__ pressed; } ;
struct TYPE_8__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int FUNC_0 (float**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 float** VAR_5 ;
 float** VAR_6 ;
 float** VAR_7 ;
 float** VAR_8 ;
 float** VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,TYPE_2__*) ;
 int FUNC_3 (int,TYPE_2__*) ;
 int FUNC_4 (int,TYPE_2__*) ;
 int FUNC_5 (int ) ;

bool FUNC_6(uint16_t VAR_10, keyrecord_t *VAR_11) {
    if (VAR_11->event.pressed) {
        switch (VAR_10) {
            case 133:
                FUNC_1(+1);
                break;
            case 130:
                FUNC_1(-1);
                break;

            case 131:
                FUNC_5(VAR_2);




                break;
            case 132:
                FUNC_5(VAR_1);




                break;
            case 129:
                FUNC_5(VAR_3);




                break;
            case 134:
                FUNC_5(VAR_0);




                break;
            case 128:
                FUNC_5(VAR_4);




                break;
        }
    }







    return 1;

}
