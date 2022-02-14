
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_emu10k1_fx8010_ctl {unsigned int vcount; unsigned int min; unsigned int max; unsigned int* value; int translation; int count; scalar_t__* gpr; } ;
struct snd_emu10k1 {int reg_lock; scalar_t__ gpr_base; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;





 unsigned int** VAR_1 ;
 unsigned int* VAR_2 ;
 unsigned int* VAR_3 ;
 int FUNC_0 (struct snd_emu10k1*,scalar_t__,int ,unsigned int) ;
 struct snd_emu10k1* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned int** VAR_4 ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_5, struct snd_ctl_elem_value *VAR_6)
{
 struct snd_emu10k1 *VAR_7 = FUNC_1(VAR_5);
 struct snd_emu10k1_fx8010_ctl *VAR_8 =
  (struct snd_emu10k1_fx8010_ctl *) VAR_5->private_value;
 unsigned long VAR_9;
 unsigned int VAR_10, VAR_11;
 unsigned int VAR_12, VAR_13;
 int VAR_14 = 0;

 FUNC_2(&VAR_7->reg_lock, VAR_9);
 for (VAR_12 = 0; VAR_12 < VAR_8->vcount; VAR_12++) {
  VAR_10 = VAR_6->value.integer.value[VAR_12];
  if (VAR_10 < VAR_8->min)
   VAR_10 = VAR_8->min;
  if (VAR_10 > VAR_8->max)
   VAR_10 = VAR_8->max;
  if (VAR_10 != VAR_8->value[VAR_12])
   VAR_14 = 1;
  VAR_11 = VAR_8->value[VAR_12] = VAR_10;
  switch (VAR_8->translation) {
  case 131:
   FUNC_0(VAR_7, VAR_7->gpr_base + VAR_8->gpr[VAR_12], 0, VAR_11);
   break;
  case 129:
   FUNC_0(VAR_7, VAR_7->gpr_base + VAR_8->gpr[VAR_12], 0, VAR_2[VAR_11]);
   break;
  case 132:
   if ((VAR_8->count % 5) != 0 || (VAR_8->count / 5) != VAR_8->vcount) {
    VAR_14 = -VAR_0;
    goto __error;
   }
   for (VAR_13 = 0; VAR_13 < 5; VAR_13++)
    FUNC_0(VAR_7, VAR_7->gpr_base + VAR_8->gpr[VAR_13 * VAR_8->vcount + VAR_12], 0, VAR_1[VAR_11][VAR_13]);
   break;
  case 128:
   if ((VAR_8->count % 5) != 0 || (VAR_8->count / 5) != VAR_8->vcount) {
    VAR_14 = -VAR_0;
    goto __error;
   }
   for (VAR_13 = 0; VAR_13 < 5; VAR_13++)
    FUNC_0(VAR_7, VAR_7->gpr_base + VAR_8->gpr[VAR_13 * VAR_8->vcount + VAR_12], 0, VAR_4[VAR_11][VAR_13]);
   break;
  case 130:
   FUNC_0(VAR_7, VAR_7->gpr_base + VAR_8->gpr[VAR_12], 0, VAR_3[VAR_11]);
   break;
  }
 }
      __error:
 FUNC_3(&VAR_7->reg_lock, VAR_9);
 return VAR_14;
}
