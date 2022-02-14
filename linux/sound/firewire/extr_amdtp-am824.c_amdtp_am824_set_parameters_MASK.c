
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fdf; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct amdtp_stream {int sfc; unsigned int syt_interval; TYPE_2__ ctx_data; struct amdtp_am824* protocol; } ;
struct amdtp_am824 {unsigned int pcm_channels; unsigned int midi_ports; int frame_multiplier; unsigned int* pcm_positions; unsigned int midi_position; unsigned int midi_fifo_limit; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct amdtp_stream*) ;
 int FUNC_3 (struct amdtp_stream*,unsigned int,unsigned int) ;

int FUNC_4(struct amdtp_stream *VAR_5, unsigned int VAR_6,
          unsigned int VAR_7,
          unsigned int VAR_8,
          bool VAR_9)
{
 struct amdtp_am824 *VAR_10 = VAR_5->protocol;
 unsigned int VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 if (FUNC_2(VAR_5))
  return -VAR_3;

 if (VAR_7 > VAR_1)
  return -VAR_3;

 VAR_11 = FUNC_0(VAR_8, 8);
 if (VAR_11 > VAR_0)
  return -VAR_3;

 if (FUNC_1(FUNC_2(VAR_5)) ||
     FUNC_1(VAR_7 > VAR_1) ||
     FUNC_1(VAR_11 > VAR_0))
  return -VAR_3;

 VAR_13 = FUNC_3(VAR_5, VAR_6,
       VAR_7 + VAR_11);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_5->ctx_data.rx.fdf = VAR_2 | VAR_5->sfc;

 VAR_10->pcm_channels = VAR_7;
 VAR_10->midi_ports = VAR_8;






 if (VAR_9)
  VAR_10->frame_multiplier = 2;
 else
  VAR_10->frame_multiplier = 1;


 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
  VAR_10->pcm_positions[VAR_12] = VAR_12;
 VAR_10->midi_position = VAR_10->pcm_channels;







 VAR_10->midi_fifo_limit = VAR_6 - VAR_4 * VAR_5->syt_interval + 1;

 return 0;
}
