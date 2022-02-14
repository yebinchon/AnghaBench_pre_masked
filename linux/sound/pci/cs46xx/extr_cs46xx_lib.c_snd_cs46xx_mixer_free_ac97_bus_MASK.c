
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs46xx {int * ac97_bus; } ;
struct snd_ac97_bus {struct snd_cs46xx* private_data; } ;



__attribute__((used)) static void FUNC_0(struct snd_ac97_bus *VAR_0)
{
 struct snd_cs46xx *VAR_1 = VAR_0->private_data;

 VAR_1->ac97_bus = ((void*)0);
}
