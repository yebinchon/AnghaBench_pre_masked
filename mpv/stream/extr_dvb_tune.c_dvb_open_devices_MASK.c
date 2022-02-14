
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int frontend_dev ;
typedef int dvr_dev ;
struct TYPE_6__ {scalar_t__ fe_fd; scalar_t__* demux_fds; scalar_t__ dvr_fd; scalar_t__ demux_fds_cnt; } ;
typedef TYPE_1__ dvb_state_t ;
struct TYPE_7__ {TYPE_1__* state; } ;
typedef TYPE_2__ dvb_priv_t ;
typedef int demux_dev ;


 int FUNC_0 (TYPE_2__*,char*,char*,...) ;
 int FUNC_1 (TYPE_2__*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,char*,unsigned int,...) ;

int FUNC_4(dvb_priv_t *VAR_6, unsigned int VAR_7,
    unsigned int VAR_8, unsigned int VAR_9)
{
    unsigned int VAR_10;
    char VAR_11[VAR_4], VAR_12[VAR_4], VAR_13[VAR_4];
    dvb_state_t* VAR_14 = VAR_6->state;

    FUNC_3(VAR_11, sizeof(VAR_11), "/dev/dvb/adapter%u/frontend%u", VAR_7, VAR_8);
    FUNC_3(VAR_12, sizeof(VAR_12), "/dev/dvb/adapter%u/dvr0", VAR_7);
    FUNC_3(VAR_13, sizeof(VAR_13), "/dev/dvb/adapter%u/demux0", VAR_7);
    FUNC_1(VAR_6, "DVB_OPEN_DEVICES: frontend: %s\n", VAR_11);
    VAR_14->fe_fd = FUNC_2(VAR_11, VAR_3 | VAR_1 | VAR_0);
    if (VAR_14->fe_fd < 0) {
        FUNC_0(VAR_6, "ERROR OPENING FRONTEND DEVICE %s: ERRNO %d\n",
               VAR_11, VAR_5);
        return 0;
    }
    VAR_14->demux_fds_cnt = 0;
    FUNC_1(VAR_6, "DVB_OPEN_DEVICES(%d)\n", VAR_9);
    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
        VAR_14->demux_fds[VAR_10] = FUNC_2(VAR_13, VAR_3 | VAR_1 | VAR_0);
        if (VAR_14->demux_fds[VAR_10] < 0) {
            FUNC_0(VAR_6, "ERROR OPENING DEMUX 0: %d\n", VAR_5);
            return 0;
        } else {
            FUNC_1(VAR_6, "OPEN(%d), file %s: FD=%d, CNT=%d\n", VAR_10, VAR_13,
                       VAR_14->demux_fds[VAR_10], VAR_14->demux_fds_cnt);
            VAR_14->demux_fds_cnt++;
        }
    }

    VAR_14->dvr_fd = FUNC_2(VAR_12, VAR_2 | VAR_1 | VAR_0);
    if (VAR_14->dvr_fd < 0) {
        FUNC_0(VAR_6, "ERROR OPENING DVR DEVICE %s: %d\n", VAR_12, VAR_5);
        return 0;
    }

    return 1;
}
