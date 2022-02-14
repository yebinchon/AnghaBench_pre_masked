
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_plugin {struct snd_pcm_plugin* prev; scalar_t__ (* src_frames ) (struct snd_pcm_plugin*,scalar_t__) ;struct snd_pcm_plugin* next; scalar_t__ (* dst_frames ) (struct snd_pcm_plugin*,scalar_t__) ;} ;
typedef scalar_t__ snd_pcm_uframes_t ;
typedef scalar_t__ snd_pcm_sframes_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct snd_pcm_plugin* FUNC_1 (struct snd_pcm_substream*) ;
 struct snd_pcm_plugin* FUNC_2 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_plugin*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct snd_pcm_plugin*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct snd_pcm_plugin*,scalar_t__) ;

int FUNC_7(struct snd_pcm_substream *VAR_2, snd_pcm_uframes_t VAR_3)
{
 int VAR_4;
 if (FUNC_0(!FUNC_1(VAR_2)))
  return -VAR_0;
 if (FUNC_3(VAR_2) == VAR_1) {
  struct snd_pcm_plugin *VAR_5 = FUNC_1(VAR_2);
  while (VAR_5->next) {
   if (VAR_5->dst_frames)
    VAR_3 = VAR_5->dst_frames(VAR_5, VAR_3);
   if (FUNC_0((snd_pcm_sframes_t)VAR_3 <= 0))
    return -VAR_0;
   VAR_5 = VAR_5->next;
   VAR_4 = FUNC_4(VAR_5, VAR_3);
   if (VAR_4 < 0)
    return VAR_4;
  }
 } else {
  struct snd_pcm_plugin *VAR_6 = FUNC_2(VAR_2);
  while (VAR_6->prev) {
   if (VAR_6->src_frames)
    VAR_3 = VAR_6->src_frames(VAR_6, VAR_3);
   if (FUNC_0((snd_pcm_sframes_t)VAR_3 <= 0))
    return -VAR_0;
   VAR_6 = VAR_6->prev;
   VAR_4 = FUNC_4(VAR_6, VAR_3);
   if (VAR_4 < 0)
    return VAR_4;
  }
 }
 return 0;
}
