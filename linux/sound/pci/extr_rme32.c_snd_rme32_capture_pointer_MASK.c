
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct rme32 {int capture_frlog; } ;
typedef int snd_pcm_uframes_t ;


 struct rme32* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct rme32*) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct rme32 *VAR_1 = FUNC_0(VAR_0);
 return FUNC_1(VAR_1) >> VAR_1->capture_frlog;
}
