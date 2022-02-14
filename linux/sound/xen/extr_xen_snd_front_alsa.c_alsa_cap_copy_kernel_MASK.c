
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_snd_front_pcm_stream_info {unsigned long buffer_sz; scalar_t__ buffer; TYPE_1__* evt_pair; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int req; } ;


 int VAR_0 ;
 int FUNC_0 (void*,scalar_t__,unsigned long) ;
 struct xen_snd_front_pcm_stream_info* FUNC_1 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1,
    int VAR_2, unsigned long VAR_3, void *VAR_4,
    unsigned long VAR_5)
{
 struct xen_snd_front_pcm_stream_info *VAR_6 = FUNC_1(VAR_1);
 int VAR_7;

 if (FUNC_2(VAR_3 + VAR_5 > VAR_6->buffer_sz))
  return -VAR_0;

 VAR_7 = FUNC_3(&VAR_6->evt_pair->req, VAR_3, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_0(VAR_4, VAR_6->buffer + VAR_3, VAR_5);

 return 0;
}
