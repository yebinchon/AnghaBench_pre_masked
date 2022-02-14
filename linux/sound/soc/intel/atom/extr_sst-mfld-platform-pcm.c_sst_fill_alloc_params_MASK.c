
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct snd_sst_alloc_params_ext {int sg_count; unsigned int frag_size; scalar_t__ reserved; TYPE_2__* ring_buf_info; } ;
struct TYPE_4__ {int area; } ;
struct snd_pcm_substream {TYPE_3__* runtime; TYPE_1__ dma_buffer; } ;
typedef unsigned int ssize_t ;
typedef int snd_pcm_uframes_t ;
struct TYPE_6__ {unsigned int channels; int period_size; } ;
struct TYPE_5__ {unsigned int size; int addr; } ;


 unsigned int FUNC_0 (TYPE_3__*,int ) ;
 unsigned int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_0,
    struct snd_sst_alloc_params_ext *VAR_1)
{
 unsigned int VAR_2;
 snd_pcm_uframes_t VAR_3;
 ssize_t VAR_4;
 ssize_t VAR_5 = FUNC_1(VAR_0);
 u32 VAR_6 = FUNC_2(VAR_0->dma_buffer.area);

 VAR_2 = VAR_0->runtime->channels;
 VAR_3 = VAR_0->runtime->period_size;
 VAR_4 = FUNC_0(VAR_0->runtime, VAR_3);
 VAR_1->ring_buf_info[0].addr = VAR_6;
 VAR_1->ring_buf_info[0].size = VAR_5;
 VAR_1->sg_count = 1;
 VAR_1->reserved = 0;
 VAR_1->frag_size = VAR_4 * VAR_2;

}
