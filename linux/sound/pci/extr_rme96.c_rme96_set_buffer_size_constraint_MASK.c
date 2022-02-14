
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int dummy; } ;
struct rme96 {unsigned int playback_periodsize; unsigned int capture_periodsize; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct rme96 *VAR_4,
     struct snd_pcm_runtime *VAR_5)
{
 unsigned int VAR_6;

 FUNC_1(VAR_5, VAR_1,
         VAR_0);
 if ((VAR_6 = VAR_4->playback_periodsize) != 0 ||
     (VAR_6 = VAR_4->capture_periodsize) != 0)
  FUNC_1(VAR_5,
          VAR_2,
          VAR_6);
 else
  FUNC_0(VAR_5, 0,
        VAR_2,
        &VAR_3);
}
