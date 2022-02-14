
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_trident {unsigned int spdif_bits; scalar_t__ device; int reg_lock; int * spdif; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct snd_trident*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;
 struct snd_trident* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_4,
      struct snd_ctl_elem_value *VAR_5)
{
 struct snd_trident *VAR_6 = FUNC_3(VAR_4);
 unsigned int VAR_7;
 int VAR_8;

 VAR_7 = (VAR_5->value.iec958.status[0] << 0) |
       (VAR_5->value.iec958.status[1] << 8) |
       (VAR_5->value.iec958.status[2] << 16) |
       (VAR_5->value.iec958.status[3] << 24);
 FUNC_4(&VAR_6->reg_lock);
 VAR_8 = VAR_6->spdif_bits != VAR_7;
 VAR_6->spdif_bits = VAR_7;
 if (VAR_6->device != VAR_3) {
  if ((FUNC_1(FUNC_0(VAR_6, VAR_1 + 3)) & 0x10) == 0)
   FUNC_2(VAR_6->spdif_bits, FUNC_0(VAR_6, VAR_0));
 } else {
  if (VAR_6->spdif == ((void*)0))
   FUNC_2(VAR_6->spdif_bits, FUNC_0(VAR_6, VAR_2));
 }
 FUNC_5(&VAR_6->reg_lock);
 return VAR_8;
}
