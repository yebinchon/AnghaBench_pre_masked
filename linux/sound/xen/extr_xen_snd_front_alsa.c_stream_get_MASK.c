
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_snd_front_pcm_stream_info {int dummy; } ;
struct xen_snd_front_pcm_instance_info {struct xen_snd_front_pcm_stream_info* streams_cap; struct xen_snd_front_pcm_stream_info* streams_pb; } ;
struct snd_pcm_substream {scalar_t__ stream; size_t number; } ;


 scalar_t__ VAR_0 ;
 struct xen_snd_front_pcm_instance_info* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static struct xen_snd_front_pcm_stream_info *
FUNC_1(struct snd_pcm_substream *VAR_1)
{
 struct xen_snd_front_pcm_instance_info *VAR_2 =
   FUNC_0(VAR_1);
 struct xen_snd_front_pcm_stream_info *VAR_3;

 if (VAR_1->stream == VAR_0)
  VAR_3 = &VAR_2->streams_pb[VAR_1->number];
 else
  VAR_3 = &VAR_2->streams_cap[VAR_1->number];

 return VAR_3;
}
