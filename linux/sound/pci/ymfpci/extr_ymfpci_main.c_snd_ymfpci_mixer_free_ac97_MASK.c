
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ymfpci {int * ac97; } ;
struct snd_ac97 {struct snd_ymfpci* private_data; } ;



__attribute__((used)) static void FUNC_0(struct snd_ac97 *VAR_0)
{
 struct snd_ymfpci *VAR_1 = VAR_0->private_data;
 VAR_1->ac97 = ((void*)0);
}
