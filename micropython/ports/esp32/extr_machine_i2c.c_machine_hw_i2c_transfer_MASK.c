
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int mp_obj_base_t ;
struct TYPE_5__ {int len; int buf; } ;
typedef TYPE_1__ mp_machine_i2c_buf_t ;
struct TYPE_6__ {int port; } ;
typedef TYPE_2__ machine_hw_i2c_obj_t ;
typedef int i2c_cmd_handle_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int,int) ;
 int FUNC_9 (int ,int,int) ;
 int VAR_9 ;

int FUNC_10(mp_obj_base_t *VAR_10, uint16_t VAR_11, size_t VAR_12, mp_machine_i2c_buf_t *VAR_13, unsigned int VAR_14) {
    machine_hw_i2c_obj_t *VAR_15 = FUNC_0(VAR_10);

    i2c_cmd_handle_t VAR_16 = FUNC_2();
    FUNC_6(VAR_16);
    FUNC_9(VAR_16, VAR_11 << 1 | (VAR_14 & VAR_7), 1);

    int VAR_17 = 0;
    for (; VAR_12--; ++VAR_13) {
        if (VAR_14 & VAR_7) {
            FUNC_5(VAR_16, VAR_13->buf, VAR_13->len, VAR_12 == 0 ? VAR_4 : VAR_3);
        } else {
            if (VAR_13->len != 0) {
                FUNC_8(VAR_16, VAR_13->buf, VAR_13->len, 1);
            }
        }
        VAR_17 += VAR_13->len;
    }

    if (VAR_14 & VAR_8) {
        FUNC_7(VAR_16);
    }


    esp_err_t VAR_18 = FUNC_4(VAR_15->port, VAR_16, 100 * (1 + VAR_17) / VAR_9);
    FUNC_3(VAR_16);

    if (VAR_18 == VAR_1) {
        return -VAR_5;
    } else if (VAR_18 == VAR_0) {
        return -VAR_6;
    } else if (VAR_18 != VAR_2) {
        return -FUNC_1(VAR_18);
    }

    return VAR_17;
}
