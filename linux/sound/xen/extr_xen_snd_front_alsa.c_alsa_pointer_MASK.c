
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_snd_front_pcm_stream_info {int hw_ptr; } ;
struct snd_pcm_substream {int dummy; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (int *) ;
 struct xen_snd_front_pcm_stream_info* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct xen_snd_front_pcm_stream_info *VAR_1 = FUNC_1(VAR_0);

 return (snd_pcm_uframes_t)FUNC_0(&VAR_1->hw_ptr);
}
