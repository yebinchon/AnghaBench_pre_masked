
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_14__ {int C2_SAMPLE_TIME; double C2_BLANKING_TIME; double C2_IDISS_TIME; int C2_BRAKE_STAB; int C2_BIDIR_INPUT; } ;
struct TYPE_20__ {scalar_t__ Byte; TYPE_3__ Bits; } ;
struct TYPE_15__ {int C3_NG_THRESH; int C3_ERM_OPEN_LOOP; int C3_SUPPLY_COMP_DIS; int C3_DATA_FORMAT_RTO; int C3_LRA_DRIVE_MODE; int C3_N_PWM_ANALOG; int C3_LRA_OPEN_LOOP; } ;
struct TYPE_19__ {scalar_t__ Byte; TYPE_4__ Bits; } ;
struct TYPE_16__ {int C4_AUTO_CAL_TIME; int C4_ZC_DET_TIME; } ;
struct TYPE_18__ {scalar_t__ Byte; TYPE_5__ Bits; } ;
struct TYPE_12__ {scalar_t__ BEMF_GAIN; int LOOP_GAIN; int BRAKE_FACTOR; int ERM_LRA; } ;
struct TYPE_17__ {scalar_t__ Byte; TYPE_1__ Bits; } ;
struct TYPE_13__ {double C1_DRIVE_TIME; int C1_STARTUP_BOOST; int C1_AC_COUPLE; } ;
struct TYPE_11__ {scalar_t__ Byte; TYPE_2__ Bits; } ;
typedef TYPE_6__ DRVREG_FBR ;
typedef TYPE_7__ DRVREG_CTRL4 ;
typedef TYPE_8__ DRVREG_CTRL3 ;
typedef TYPE_9__ DRVREG_CTRL2 ;
typedef TYPE_10__ DRVREG_CTRL1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 double VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 double VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 double VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 double VAR_34 ;
 double VAR_35 ;
 int VAR_36 ;
 int FUNC_1 () ;
 double FUNC_2 (int) ;

void FUNC_3(void) {
    FUNC_1();

    FUNC_0(VAR_15, 0x07);





    FUNC_0(VAR_17, (VAR_30 / 21.33) * 1000);

    FUNC_0(VAR_16, (((VAR_34 * (VAR_6 + VAR_3 + VAR_24)) / 0.02133) / (VAR_6 - 0.0003)));
    DRVREG_FBR VAR_37;
    VAR_37.Bits.ERM_LRA = VAR_21;
    VAR_37.Bits.BRAKE_FACTOR = VAR_20;
    VAR_37.Bits.LOOP_GAIN = VAR_22;
    VAR_37.Bits.BEMF_GAIN = 0;
    FUNC_0(VAR_11, (uint8_t)VAR_37.Byte);
    DRVREG_CTRL1 VAR_38;
    VAR_38.Bits.C1_DRIVE_TIME = VAR_6;
    VAR_38.Bits.C1_AC_COUPLE = VAR_0;
    VAR_38.Bits.C1_STARTUP_BOOST = VAR_32;
    FUNC_0(VAR_7, (uint8_t)VAR_38.Byte);
    DRVREG_CTRL2 VAR_39;
    VAR_39.Bits.C2_BIDIR_INPUT = VAR_2;
    VAR_39.Bits.C2_BRAKE_STAB = VAR_4;
    VAR_39.Bits.C2_SAMPLE_TIME = VAR_31;
    VAR_39.Bits.C2_BLANKING_TIME = VAR_3;
    VAR_39.Bits.C2_IDISS_TIME = VAR_24;
    FUNC_0(VAR_8, (uint8_t)VAR_39.Byte);
    DRVREG_CTRL3 VAR_40;
    VAR_40.Bits.C3_LRA_OPEN_LOOP = VAR_27;
    VAR_40.Bits.C3_N_PWM_ANALOG = VAR_29;
    VAR_40.Bits.C3_LRA_DRIVE_MODE = VAR_26;
    VAR_40.Bits.C3_DATA_FORMAT_RTO = VAR_5;
    VAR_40.Bits.C3_SUPPLY_COMP_DIS = VAR_33;
    VAR_40.Bits.C3_ERM_OPEN_LOOP = VAR_19;
    VAR_40.Bits.C3_NG_THRESH = VAR_28;
    FUNC_0(VAR_9, (uint8_t)VAR_40.Byte);
    DRVREG_CTRL4 VAR_41;
    VAR_41.Bits.C4_ZC_DET_TIME = VAR_36;
    VAR_41.Bits.C4_AUTO_CAL_TIME = VAR_1;
    FUNC_0(VAR_10, (uint8_t)VAR_41.Byte);
    FUNC_0(VAR_14, VAR_25);

    FUNC_0(VAR_12, 0x01);



    FUNC_0(VAR_15, 0x00);


    FUNC_0(VAR_12, 0x00);
    FUNC_0(VAR_18, VAR_13);
    FUNC_0(VAR_12, 0x01);
}
