
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_intelhad {unsigned int aes_bits; int mutex; } ;
struct TYPE_3__ {int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_intelhad* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 unsigned int VAR_2;
 struct snd_intelhad *VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = 0;

 VAR_2 = (VAR_1->value.iec958.status[0] << 0) |
  (VAR_1->value.iec958.status[1] << 8) |
  (VAR_1->value.iec958.status[2] << 16) |
  (VAR_1->value.iec958.status[3] << 24);
 FUNC_0(&VAR_3->mutex);
 if (VAR_3->aes_bits != VAR_2) {
  VAR_3->aes_bits = VAR_2;
  VAR_4 = 1;
 }
 FUNC_1(&VAR_3->mutex);
 return VAR_4;
}
