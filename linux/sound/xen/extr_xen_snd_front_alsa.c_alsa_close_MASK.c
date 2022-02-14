
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_snd_front_pcm_stream_info {int evt_pair; } ;
struct snd_pcm_substream {int dummy; } ;


 struct xen_snd_front_pcm_stream_info* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct xen_snd_front_pcm_stream_info *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->evt_pair, 0);
 return 0;
}
