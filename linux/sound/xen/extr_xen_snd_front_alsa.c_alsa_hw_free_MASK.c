
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_snd_front_pcm_stream_info {TYPE_1__* evt_pair; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int req; } ;


 int FUNC_0 (struct xen_snd_front_pcm_stream_info*) ;
 struct xen_snd_front_pcm_stream_info* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct xen_snd_front_pcm_stream_info *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(&VAR_1->evt_pair->req);
 FUNC_0(VAR_1);
 return VAR_2;
}
