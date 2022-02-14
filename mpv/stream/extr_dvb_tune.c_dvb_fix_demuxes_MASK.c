
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t cur_adapter; int demux_fds_cnt; unsigned int* demux_fds; TYPE_1__* adapters; } ;
typedef TYPE_2__ dvb_state_t ;
struct TYPE_9__ {TYPE_2__* state; } ;
typedef TYPE_3__ dvb_priv_t ;
typedef int demux_dev ;
struct TYPE_7__ {int devno; } ;


 int FUNC_0 (TYPE_3__*,char*,int ) ;
 int FUNC_1 (TYPE_3__*,char*,int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (unsigned int) ;
 int VAR_4 ;
 unsigned int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int,char*,int) ;

int FUNC_5(dvb_priv_t *VAR_5, unsigned int VAR_6)
{
    int VAR_7;
    char VAR_8[VAR_3];

    dvb_state_t* VAR_9 = VAR_5->state;

    FUNC_4(VAR_8, sizeof(VAR_8), "/dev/dvb/adapter%d/demux0",
            VAR_9->adapters[VAR_9->cur_adapter].devno);
    FUNC_1(VAR_5, "FIX %d -> %d\n", VAR_9->demux_fds_cnt, VAR_6);
    if (VAR_9->demux_fds_cnt >= VAR_6) {
        for (VAR_7 = VAR_9->demux_fds_cnt - 1; VAR_7 >= (int)VAR_6; VAR_7--) {
            FUNC_1(VAR_5, "FIX, CLOSE fd(%d): %d\n", VAR_7, VAR_9->demux_fds[VAR_7]);
            FUNC_2(VAR_9->demux_fds[VAR_7]);
        }
        VAR_9->demux_fds_cnt = VAR_6;
    } else {
        for (VAR_7 = VAR_9->demux_fds_cnt; VAR_7 < VAR_6; VAR_7++) {
            VAR_9->demux_fds[VAR_7] = FUNC_3(VAR_8,
                                      VAR_2 | VAR_1 | VAR_0);
            FUNC_1(VAR_5, "FIX, OPEN fd(%d): %d\n", VAR_7, VAR_9->demux_fds[VAR_7]);
            if (VAR_9->demux_fds[VAR_7] < 0) {
                FUNC_0(VAR_5, "ERROR OPENING DEMUX 0: %d\n", VAR_4);
                return 0;
            } else
                VAR_9->demux_fds_cnt++;
        }
    }

    return 1;
}
