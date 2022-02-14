
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {scalar_t__ private_value; } ;
struct sigmadsp_control {int * kcontrol; } ;



__attribute__((used)) static void FUNC_0(struct snd_kcontrol *VAR_0)
{
 struct sigmadsp_control *VAR_1 = (void *)VAR_0->private_value;

 VAR_1->kcontrol = ((void*)0);
}
