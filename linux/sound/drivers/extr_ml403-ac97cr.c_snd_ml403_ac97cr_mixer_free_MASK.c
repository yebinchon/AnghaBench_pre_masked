
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ml403_ac97cr {int * ac97; } ;
struct snd_ac97 {struct snd_ml403_ac97cr* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct snd_ac97 *VAR_1)
{
 struct snd_ml403_ac97cr *VAR_2 = VAR_1->private_data;
 FUNC_0(VAR_0, "mixer_free():\n");
 VAR_2->ac97 = ((void*)0);
 FUNC_0(VAR_0, "mixer_free(): (done)\n");
}
