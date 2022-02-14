
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_hsw_stream {int old_position; } ;
struct sst_hsw {int dummy; } ;
typedef int snd_pcm_uframes_t ;



snd_pcm_uframes_t FUNC_0(struct sst_hsw *VAR_0,
 struct sst_hsw_stream *VAR_1)
{
 return VAR_1->old_position;
}
