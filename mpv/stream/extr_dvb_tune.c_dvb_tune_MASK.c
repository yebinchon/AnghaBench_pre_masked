
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int fe_transmit_mode_t ;
typedef int fe_spectral_inversion_t ;
typedef int fe_modulation_t ;
typedef int fe_hierarchy_t ;
typedef int fe_guard_interval_t ;
typedef int fe_code_rate_t ;
typedef int fe_bandwidth_t ;
struct TYPE_6__ {int fe_fd; } ;
typedef TYPE_1__ dvb_state_t ;
struct TYPE_7__ {TYPE_1__* state; } ;
typedef TYPE_2__ dvb_priv_t ;


 int FUNC_0 (TYPE_2__*,char*,...) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (TYPE_2__*,int ,unsigned int,int,int,char,int,int ,int,int ,int ,int ,int ,int ,int ,int ,int) ;

int FUNC_3(dvb_priv_t *VAR_0, unsigned int VAR_1,
             int VAR_2, char VAR_3, int VAR_4, int VAR_5,
             int VAR_6, fe_spectral_inversion_t VAR_7,
             fe_modulation_t VAR_8, fe_guard_interval_t VAR_9,
             fe_transmit_mode_t VAR_10, fe_bandwidth_t VAR_11,
             fe_code_rate_t VAR_12,
             fe_code_rate_t VAR_13, fe_hierarchy_t VAR_14,
             int VAR_15)
{
    FUNC_0(VAR_0, "dvb_tune %s Freq: %lu\n",
            FUNC_1(VAR_1), (long unsigned int) VAR_2);

    dvb_state_t* VAR_16 = VAR_0->state;

    int VAR_17 = FUNC_2(VAR_0, VAR_16->fe_fd, VAR_1, VAR_2, VAR_4, VAR_3,
                      VAR_6, VAR_7, VAR_5, VAR_8,
                      VAR_12, VAR_10, VAR_9,
                      VAR_11, VAR_13, VAR_14, VAR_15);

    if (VAR_17 != 0)
        FUNC_0(VAR_0, "dvb_tune, TUNING FAILED\n");

    return VAR_17 == 0;
}
