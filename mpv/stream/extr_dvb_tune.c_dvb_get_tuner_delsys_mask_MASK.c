
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct dvb_frontend_info {int num; int type; int caps; int name; struct dtv_property* props; } ;
struct TYPE_3__ {unsigned int len; scalar_t__* data; } ;
struct TYPE_4__ {int data; TYPE_1__ buffer; } ;
struct dtv_property {TYPE_2__ u; int cmd; } ;
struct dtv_properties {int num; int type; int caps; int name; struct dtv_property* props; } ;


 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int) ;
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



 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (int,int ,struct dvb_frontend_info*) ;
 int FUNC_4 (struct dvb_frontend_info*,int,int) ;
 int FUNC_5 (struct mp_log*,char*,int,...) ;
 int FUNC_6 (struct mp_log*,char*,int,...) ;

unsigned int FUNC_7(int VAR_22, struct mp_log *VAR_23)
{
    unsigned int VAR_24 = 0, VAR_25;
    struct dtv_property VAR_26[1];
    struct dtv_properties VAR_27 = {.num = 1, .props = VAR_26};
    struct dvb_frontend_info VAR_28;
    FUNC_6(VAR_23, "Querying tuner frontend type via pre-DVBv5 API for frontend FD %d\n",
               VAR_22);

    FUNC_4(&VAR_28, 0x00, sizeof(struct dvb_frontend_info));
    if (FUNC_3(VAR_22, VAR_9, &VAR_28) < 0) {
        FUNC_5(VAR_23, "DVBv3: FE_GET_INFO error: %d, FD: %d\n\n", VAR_21, VAR_22);
        return VAR_24;
    }

    VAR_26[0].cmd = VAR_0;
    if (FUNC_3(VAR_22, VAR_10, &VAR_27) < 0) {
        VAR_26[0].u.data = 0x0300;
    }

    FUNC_6(VAR_23, "DVBv3: Queried tuner frontend type of device named '%s', FD: %d\n",
               VAR_28.name, VAR_22);
    switch (VAR_28.type) {
    case 130:
        FUNC_1(VAR_24, VAR_17);
        if (VAR_26[0].u.data < 0x0500)
            break;
        if (VAR_3 & VAR_28.caps) {
            FUNC_1(VAR_24, VAR_18);
        }
        break;
    case 128:
        FUNC_1(VAR_24, VAR_15);
        if (VAR_26[0].u.data < 0x0500)
            break;
        if (VAR_3 & VAR_28.caps) {
            FUNC_1(VAR_24, VAR_16);
        }





        break;
    case 129:
        FUNC_1(VAR_24, VAR_12);
        FUNC_1(VAR_24, VAR_14);
        break;
    default:
        FUNC_5(VAR_23, "DVBv3: Unknown tuner frontend type: %d\n", VAR_28.type);
        return VAR_24;
    }

    for (VAR_25 = 0; VAR_25 < VAR_19; VAR_25 ++) {
        if (!FUNC_0(VAR_24, VAR_25))
            continue;
        FUNC_6(VAR_23, "DVBv3: Tuner frontend type seems to be %s\n", FUNC_2(VAR_25));
    }

    return VAR_24;
}
