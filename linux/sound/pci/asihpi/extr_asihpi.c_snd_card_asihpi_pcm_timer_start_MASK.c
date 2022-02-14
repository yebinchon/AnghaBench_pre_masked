
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_card_asihpi_pcm* private_data; } ;
struct snd_card_asihpi_pcm {int respawn_timer; int timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *
         VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_2->runtime;
 struct snd_card_asihpi_pcm *VAR_4 = VAR_3->private_data;
 int VAR_5;

 VAR_5 = VAR_0 / 200;

 VAR_5 = FUNC_0(VAR_5, 1);
 FUNC_1(&VAR_4->timer, VAR_1 + VAR_5);
 VAR_4->respawn_timer = 1;
}
