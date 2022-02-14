
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident_voice {scalar_t__ foldback_chan; } ;
struct snd_trident {int reg_lock; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_trident_voice* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_trident*,scalar_t__) ;
 int FUNC_1 (int,int ) ;
 struct snd_trident* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1)
{
 struct snd_trident *VAR_2 = FUNC_2(VAR_1);
 struct snd_trident_voice *VAR_3;
 struct snd_pcm_runtime *VAR_4 = VAR_1->runtime;
 VAR_3 = VAR_4->private_data;


 FUNC_3(&VAR_2->reg_lock);
 FUNC_1(0x00, FUNC_0(VAR_2, VAR_0 + VAR_3->foldback_chan));
 FUNC_4(&VAR_2->reg_lock);
 return 0;
}
