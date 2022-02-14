
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ymfpci {unsigned int spdif_pcm_bits; int reg_lock; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_ymfpci* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_ymfpci*,int ) ;
 int FUNC_2 (struct snd_ymfpci*,int ,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
     struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ymfpci *VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5;
 int VAR_6;

 VAR_5 = ((VAR_3->value.iec958.status[0] & 0x3e) << 0) |
       (VAR_3->value.iec958.status[1] << 8);
 FUNC_3(&VAR_4->reg_lock);
 VAR_6 = VAR_4->spdif_pcm_bits != VAR_5;
 VAR_4->spdif_pcm_bits = VAR_5;
 if ((FUNC_1(VAR_4, VAR_0) & 2))
  FUNC_2(VAR_4, VAR_1, VAR_4->spdif_pcm_bits);
 FUNC_4(&VAR_4->reg_lock);
 return VAR_6;
}
