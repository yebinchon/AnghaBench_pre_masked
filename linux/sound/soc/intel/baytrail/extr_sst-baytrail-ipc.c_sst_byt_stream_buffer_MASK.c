
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_7__ {int sfreq; int num_chan; int pcm_wd_sz; } ;
struct TYPE_6__ {int num_entries; int frag_size; TYPE_1__* ring_buf_info; } ;
struct TYPE_8__ {TYPE_3__ pcm_params; TYPE_2__ frame_info; } ;
struct sst_byt_stream {TYPE_4__ request; } ;
struct sst_byt {int dummy; } ;
struct TYPE_5__ {void* size; void* addr; } ;



int FUNC_0(struct sst_byt *VAR_0, struct sst_byt_stream *VAR_1,
     uint32_t VAR_2, uint32_t VAR_3)
{
 VAR_1->request.frame_info.num_entries = 1;
 VAR_1->request.frame_info.ring_buf_info[0].addr = VAR_2;
 VAR_1->request.frame_info.ring_buf_info[0].size = VAR_3;

 VAR_1->request.frame_info.frag_size =
  VAR_1->request.pcm_params.sfreq *
  VAR_1->request.pcm_params.num_chan *
  VAR_1->request.pcm_params.pcm_wd_sz / 8 *
  4 / 1000;
 return 0;
}
