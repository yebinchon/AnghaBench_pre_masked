
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ priv; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_9__ {int switching_channel; int* demux_fds; int dvr_fd; int fe_fd; int cur_adapter; int cur_frontend; scalar_t__ is_on; int demux_fds_cnt; } ;
typedef TYPE_2__ dvb_state_t ;
struct TYPE_10__ {TYPE_2__* state; } ;
typedef TYPE_3__ dvb_priv_t ;
struct TYPE_11__ {int stream_used; } ;


 int FUNC_0 (TYPE_1__*,char*,int,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(stream_t *VAR_2)
{
    dvb_priv_t *VAR_3 = (dvb_priv_t *) VAR_2->priv;
    dvb_state_t *VAR_4 = VAR_3->state;

    if (VAR_4->switching_channel && VAR_4->is_on) {

      VAR_4->switching_channel = 0;
      FUNC_3(&VAR_1);
      VAR_0->stream_used = 0;
      FUNC_4(&VAR_1);
      return;
    }

    for (int VAR_5 = VAR_4->demux_fds_cnt - 1; VAR_5 >= 0; VAR_5--) {
        VAR_4->demux_fds_cnt--;
        FUNC_0(VAR_2, "DVBIN_CLOSE, close(%d), fd=%d, COUNT=%d\n", VAR_5,
                   VAR_4->demux_fds[VAR_5], VAR_4->demux_fds_cnt);
        FUNC_1(VAR_4->demux_fds[VAR_5]);
    }
    FUNC_1(VAR_4->dvr_fd);
    FUNC_1(VAR_4->fe_fd);
    VAR_4->fe_fd = VAR_4->dvr_fd = -1;

    VAR_4->is_on = 0;
    VAR_4->cur_adapter = -1;
    VAR_4->cur_frontend = -1;

    FUNC_3(&VAR_1);
    FUNC_2(VAR_4);
    VAR_0 = ((void*)0);
    FUNC_4(&VAR_1);
}
