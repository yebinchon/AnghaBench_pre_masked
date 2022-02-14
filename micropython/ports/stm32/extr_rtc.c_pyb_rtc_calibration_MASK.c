
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mp_uint_t ;
typedef int mp_obj_t ;
typedef int mp_int_t ;
struct TYPE_7__ {TYPE_1__* Instance; } ;
struct TYPE_6__ {int CALR; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int,int) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;

mp_obj_t FUNC_7(size_t VAR_6, const mp_obj_t *VAR_7) {
    FUNC_6();
    mp_int_t VAR_8;
    if (VAR_6 == 2) {
        VAR_8 = FUNC_3(VAR_7[1]);
        mp_uint_t VAR_9, VAR_10;
        if (VAR_8 < -511 || VAR_8 > 512) {
            FUNC_5("calibration value out of range");

        }
        if (VAR_8 > 0) {
            VAR_9 = VAR_4;
            VAR_10 = 512 - VAR_8;
        } else {
            VAR_9 = VAR_3;
            VAR_10 = -VAR_8;
        }
        FUNC_2(&VAR_0, VAR_2, VAR_9, VAR_10);
        return VAR_5;
    } else {


        if (VAR_0.Instance->CALR & 0x8000) {
            VAR_8 = 512 - (VAR_0.Instance->CALR & 0x1ff);
        } else {
            VAR_8 = -(VAR_0.Instance->CALR & 0x1ff);
        }
        return FUNC_4(VAR_8);
    }
}
