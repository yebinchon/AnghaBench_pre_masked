
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int (* private_free ) (struct snd_kcontrol*) ;} ;


 int FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_kcontrol*) ;

void FUNC_2(struct snd_kcontrol *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->private_free)
   VAR_0->private_free(VAR_0);
  FUNC_0(VAR_0);
 }
}
