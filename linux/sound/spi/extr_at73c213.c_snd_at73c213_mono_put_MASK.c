
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_at73c213 {int* reg_image; int mixer_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_at73c213*,int,unsigned short) ;
 struct snd_at73c213* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct snd_at73c213 *VAR_2 = FUNC_3(VAR_0);
 int VAR_3 = VAR_0->private_value & 0xff;
 int VAR_4 = (VAR_0->private_value >> 8) & 0xff;
 int VAR_5 = (VAR_0->private_value >> 16) & 0xff;
 int VAR_6 = (VAR_0->private_value >> 24) & 0xff;
 int VAR_7, VAR_8;
 unsigned short VAR_9;

 VAR_9 = (VAR_1->value.integer.value[0] & VAR_5);
 if (VAR_6)
  VAR_9 = VAR_5 - VAR_9;
 VAR_9 <<= VAR_4;

 FUNC_0(&VAR_2->mixer_lock);

 VAR_9 = (VAR_2->reg_image[VAR_3] & ~(VAR_5 << VAR_4)) | VAR_9;
 VAR_7 = VAR_9 != VAR_2->reg_image[VAR_3];
 VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_9);

 FUNC_1(&VAR_2->mixer_lock);

 if (VAR_8)
  return VAR_8;

 return VAR_7;
}
