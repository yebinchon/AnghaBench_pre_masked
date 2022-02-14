
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident_voice {struct snd_trident* trident; } ;
struct snd_trident {int dummy; } ;
struct snd_pcm_runtime {struct snd_trident_voice* private_data; } ;


 int FUNC_0 (struct snd_trident*,struct snd_trident_voice*) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_runtime *VAR_0)
{
 struct snd_trident_voice *VAR_1 = VAR_0->private_data;
 struct snd_trident *VAR_2;

 if (VAR_1) {
  VAR_2 = VAR_1->trident;
  FUNC_0(VAR_2, VAR_1);
 }
}
