
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {void* modulation; } ;
struct TYPE_17__ {unsigned int symbol_rate; void* modulation; void* fec_inner; } ;
struct TYPE_16__ {unsigned int symbol_rate; void* fec_inner; } ;
struct TYPE_15__ {int transmission_mode; int guard_interval; int hierarchy_information; void* constellation; void* code_rate_LP; void* code_rate_HP; int bandwidth; } ;
struct TYPE_19__ {TYPE_4__ vsb; TYPE_3__ qam; TYPE_2__ qpsk; TYPE_1__ ofdm; } ;
struct dvb_frontend_parameters {int num; unsigned int frequency; void* inversion; TYPE_5__ u; struct dtv_property* props; } ;
struct dvb_frontend_event {int num; unsigned int frequency; void* inversion; TYPE_5__ u; struct dtv_property* props; } ;
struct TYPE_21__ {unsigned int data; } ;
struct dtv_property {int cmd; TYPE_7__ u; } ;
struct dtv_properties {int num; unsigned int frequency; void* inversion; TYPE_5__ u; struct dtv_property* props; } ;
typedef int p ;
typedef int feparams ;
typedef int fe_transmit_mode_t ;
typedef void* fe_spectral_inversion_t ;
typedef void* fe_modulation_t ;
typedef int fe_hierarchy_t ;
typedef int fe_guard_interval_t ;
typedef void* fe_code_rate_t ;
typedef int fe_bandwidth_t ;
struct TYPE_22__ {size_t cur_adapter; TYPE_6__* adapters; } ;
typedef TYPE_8__ dvb_state_t ;
struct TYPE_23__ {TYPE_8__* state; } ;
typedef TYPE_9__ dvb_priv_t ;
struct TYPE_20__ {int devno; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
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
 int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 int FUNC_0 (TYPE_9__*,char*) ;
 int FUNC_1 (TYPE_9__*,char*,...) ;
 int VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 unsigned int VAR_25 ;
 int FUNC_2 (TYPE_9__*,int,int) ;
 int FUNC_3 (int,unsigned int,int,int) ;
 int FUNC_4 (TYPE_9__*,int,unsigned int,struct dvb_frontend_parameters*) ;
 int FUNC_5 (unsigned int) ;
 scalar_t__ FUNC_6 (int,int ,struct dvb_frontend_parameters*) ;
 int FUNC_7 (struct dvb_frontend_parameters*,int,int) ;

__attribute__((used)) static int FUNC_8(dvb_priv_t *VAR_26, int VAR_27, unsigned int VAR_28,
                   unsigned int VAR_29, unsigned int VAR_30, char VAR_31,
                   int VAR_32,
                   fe_spectral_inversion_t VAR_33, unsigned int VAR_34,
                   fe_modulation_t VAR_35,
                   fe_code_rate_t VAR_36,
                   fe_transmit_mode_t VAR_37,
                   fe_guard_interval_t VAR_38,
                   fe_bandwidth_t VAR_39,
                   fe_code_rate_t VAR_40, fe_hierarchy_t VAR_41,
                   int VAR_42)
{
    int VAR_43 = 0, VAR_44 = 0;
    dvb_state_t* VAR_45 = VAR_26->state;
    struct dvb_frontend_parameters VAR_46;


    FUNC_1(VAR_26, "TUNE_IT, fd_frontend %d, %s freq %lu, srate %lu, "
               "pol %c, diseqc %u\n", VAR_27,
               FUNC_5(VAR_28),
               (long unsigned int)VAR_29, (long unsigned int)VAR_30,
               (VAR_31 > ' ' ? VAR_31 : '-'), VAR_34);

    FUNC_1(VAR_26, "Using %s adapter %d\n",
        FUNC_5(VAR_28),
        VAR_45->adapters[VAR_45->cur_adapter].devno);

    {

        struct dvb_frontend_event VAR_47;
        while (1) {
            if (FUNC_6(VAR_27, VAR_17, &VAR_47) < 0)
                break;
        }
    }


    switch (VAR_28) {
    case 128:

        FUNC_0(VAR_26, "ERROR: Can not tune to T2 channel, S2-API not "
                     "available, will tune to DVB-T!\n");


    case 129:
        if (VAR_29 < 1000000)
            VAR_29 *= 1000UL;
        switch (VAR_39) {
        case 140:
            VAR_44 = 5000000;
            break;
        case 139:
            VAR_44 = 6000000;
            break;
        case 138:
            VAR_44 = 7000000;
            break;
        case 137:
            VAR_44 = 8000000;
            break;
        case 141:
            VAR_44 = 10000000;
            break;
        case 136:
            if (VAR_29 < 474000000) {
                VAR_44 = 7000000;
            } else {
                VAR_44 = 8000000;
            }
            break;
        default:
            VAR_44 = 0;
            break;
        }

        FUNC_1(VAR_26, "tuning %s to %d Hz, bandwidth: %d\n",
                   FUNC_5(VAR_28), VAR_29, VAR_44);
        break;
    case 130:

        FUNC_0(VAR_26, "ERROR: Can not tune to S2 channel, S2-API not "
                     "available, will tune to DVB-S!\n");


    case 131:
        if (VAR_29 > 2200000) {

            if (VAR_29 < VAR_25) {
                VAR_29 -= VAR_20;
                VAR_43 = 0;
            } else {
                VAR_29 -= VAR_21;
                VAR_43 = 1;
            }
        }
        FUNC_1(VAR_26, "tuning %s to Freq: %u, Pol: %c Srate: %d, "
                   "22kHz: %s, LNB:  %d\n", FUNC_5(VAR_28), VAR_29,
                   VAR_31, VAR_30, VAR_43 ? "on" : "off", VAR_34);

        if (FUNC_3(VAR_27, VAR_34, (VAR_31 == 'V' ? 1 : 0), VAR_43) == 0) {
            FUNC_1(VAR_26, "DISEQC setting succeeded\n");
        } else {
            FUNC_0(VAR_26, "DISEQC setting failed\n");
            return -1;
        }

        break;
    case 134:
    case 132:
        FUNC_1(VAR_26, "tuning %s to %d, srate=%d\n",
                   FUNC_5(VAR_28), VAR_29, VAR_30);
        break;







    default:
        FUNC_1(VAR_26, "Unknown FE type. Aborting\n");
        return 0;
    }
    FUNC_1(VAR_26, "Tuning via DVB-API version 3.\n");

    if (VAR_32 != VAR_22 && VAR_32 != 0) {
        FUNC_0(VAR_26, "DVB-API version 3 does not support stream_id (PLP).\n");
        return -1;
    }
    FUNC_7(&VAR_46, 0x00, sizeof(VAR_46));
    VAR_46.frequency = VAR_29;
    VAR_46.inversion = VAR_33;

    switch (VAR_28) {
    case 129:
    case 128:
        VAR_46.u.ofdm.bandwidth = VAR_39;
        VAR_46.u.ofdm.code_rate_HP = VAR_36;
        VAR_46.u.ofdm.code_rate_LP = VAR_40;
        VAR_46.u.ofdm.constellation = VAR_35;
        VAR_46.u.ofdm.transmission_mode = VAR_37;
        VAR_46.u.ofdm.guard_interval = VAR_38;
        VAR_46.u.ofdm.hierarchy_information = VAR_41;
        break;
    case 131:
    case 130:
        VAR_46.u.qpsk.symbol_rate = VAR_30;
        VAR_46.u.qpsk.fec_inner = VAR_36;
        break;
    case 134:
    case 132:
        VAR_46.u.qam.symbol_rate = VAR_30;
        VAR_46.u.qam.fec_inner = VAR_36;
        VAR_46.u.qam.modulation = VAR_35;
        break;






    }

    if (FUNC_6(VAR_27, VAR_18, &VAR_46) < 0) {
        FUNC_0(VAR_26, "ERROR tuning channel\n");
        return -1;
    }

    return FUNC_2(VAR_26, VAR_27, VAR_42);
}
