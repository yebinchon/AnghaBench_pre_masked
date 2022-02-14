
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_rme9652 {scalar_t__ ss_channels; int lock; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_rme9652*,unsigned int) ;
 int FUNC_1 (struct snd_rme9652*) ;
 struct snd_rme9652* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_rme9652*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct snd_rme9652 *VAR_4 = FUNC_2(VAR_2);
 int VAR_5, VAR_6;
 unsigned int VAR_7;

 if (!FUNC_3(VAR_4))
  return -VAR_0;
 VAR_6 = VAR_4->ss_channels == VAR_1 ? 4 : 3;
 VAR_7 = VAR_3->value.enumerated.item[0] % VAR_6;
 FUNC_4(&VAR_4->lock);
 VAR_5 = (int)VAR_7 != FUNC_1(VAR_4);
 FUNC_0(VAR_4, VAR_7);
 FUNC_5(&VAR_4->lock);
 return VAR_5;
}
