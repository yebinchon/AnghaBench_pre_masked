
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct TYPE_8__ {size_t servo_id; } ;
typedef TYPE_1__ pyb_servo_obj_t ;
typedef TYPE_1__* mp_obj_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int VAR_13 ;
 scalar_t__* VAR_14 ;

__attribute__((used)) static mp_obj_t FUNC_5(mp_obj_t VAR_15, mp_obj_t VAR_16) {
    pyb_servo_obj_t *VAR_17 = VAR_15;
    uint VAR_18 = FUNC_1(VAR_16);
    if (VAR_18 > VAR_0) {
        goto pin_error;
    }

    FUNC_4(VAR_18, VAR_3);
    VAR_14[VAR_17->servo_id] = VAR_18;
    VAR_13 |= (1 << VAR_17->servo_id);
    if (!(VAR_10 & VAR_11)) {
        VAR_10 |= VAR_11;
        VAR_6 = 0xFFFF;
        VAR_4 = 0;
        VAR_5 = 0;
        VAR_7 = VAR_8;


        VAR_7 = VAR_8 | VAR_9;
    }
    FUNC_0(VAR_1);
    return VAR_12;

pin_error:
    FUNC_3(FUNC_2(VAR_2, "pin %d does not exist", VAR_18));
}
