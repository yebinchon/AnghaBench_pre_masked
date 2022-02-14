
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fdf; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct amdtp_stream {int sfc; unsigned int syt_interval; TYPE_2__ ctx_data; struct amdtp_dot* protocol; } ;
struct amdtp_dot {unsigned int pcm_channels; unsigned int midi_fifo_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct amdtp_stream*) ;
 int FUNC_1 (struct amdtp_stream*,unsigned int,unsigned int) ;

int FUNC_2(struct amdtp_stream *VAR_3, unsigned int VAR_4,
        unsigned int VAR_5)
{
 struct amdtp_dot *VAR_6 = VAR_3->protocol;
 int VAR_7;

 if (FUNC_0(VAR_3))
  return -VAR_1;





 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5 + 1);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_3->ctx_data.rx.fdf = VAR_0 | VAR_3->sfc;

 VAR_6->pcm_channels = VAR_5;







 VAR_6->midi_fifo_limit = VAR_4 - VAR_2 * VAR_3->syt_interval + 1;

 return 0;
}
