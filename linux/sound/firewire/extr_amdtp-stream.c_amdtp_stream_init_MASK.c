
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fw_unit {int dummy; } ;
struct TYPE_3__ {int syt_override; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct amdtp_stream {int direction; int flags; int callbacked; unsigned int fmt; TYPE_2__ ctx_data; int * process_ctx_payloads; int callback_wait; scalar_t__ packet_index; int period_tasklet; int mutex; int context; struct fw_unit* unit; int protocol; } ;
typedef enum cip_flags { ____Placeholder_cip_flags } cip_flags ;
typedef enum amdtp_stream_direction { ____Placeholder_amdtp_stream_direction } amdtp_stream_direction ;
typedef int * amdtp_stream_process_ctx_payloads_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,unsigned long) ;

int FUNC_5(struct amdtp_stream *VAR_5, struct fw_unit *VAR_6,
        enum amdtp_stream_direction VAR_7, enum cip_flags VAR_8,
        unsigned int VAR_9,
        amdtp_stream_process_ctx_payloads_t VAR_10,
        unsigned int VAR_11)
{
 if (VAR_10 == ((void*)0))
  return -VAR_1;

 VAR_5->protocol = FUNC_2(VAR_11, VAR_3);
 if (!VAR_5->protocol)
  return -VAR_2;

 VAR_5->unit = VAR_6;
 VAR_5->direction = VAR_7;
 VAR_5->flags = VAR_8;
 VAR_5->context = FUNC_0(-1);
 FUNC_3(&VAR_5->mutex);
 FUNC_4(&VAR_5->period_tasklet, VAR_4, (unsigned long)VAR_5);
 VAR_5->packet_index = 0;

 FUNC_1(&VAR_5->callback_wait);
 VAR_5->callbacked = 0;

 VAR_5->fmt = VAR_9;
 VAR_5->process_ctx_payloads = VAR_10;

 if (VAR_7 == VAR_0)
  VAR_5->ctx_data.rx.syt_override = -1;

 return 0;
}
