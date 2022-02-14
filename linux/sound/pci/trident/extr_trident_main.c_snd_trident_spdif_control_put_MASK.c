
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_trident {unsigned char spdif_ctrl; scalar_t__ device; unsigned int spdif_bits; int reg_lock; int * spdif; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct snd_trident*,scalar_t__) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned char,int ) ;
 int FUNC_4 (unsigned int,int ) ;
 struct snd_trident* FUNC_5 (struct snd_kcontrol*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_kcontrol *VAR_6,
      struct snd_ctl_elem_value *VAR_7)
{
 struct snd_trident *VAR_8 = FUNC_5(VAR_6);
 unsigned char VAR_9;
 int VAR_10;

 VAR_9 = VAR_7->value.integer.value[0] ? (unsigned char) VAR_6->private_value : 0x00;
 FUNC_6(&VAR_8->reg_lock);

 VAR_10 = VAR_8->spdif_ctrl != VAR_9;
 VAR_8->spdif_ctrl = VAR_9;
 if (VAR_8->device != VAR_5) {
  if ((FUNC_1(FUNC_0(VAR_8, VAR_1 + 3)) & 0x10) == 0) {
   FUNC_4(VAR_8->spdif_bits, FUNC_0(VAR_8, VAR_0));
   FUNC_3(VAR_8->spdif_ctrl, FUNC_0(VAR_8, VAR_1 + 3));
  }
 } else {
  if (VAR_8->spdif == ((void*)0)) {
   unsigned int VAR_11;
   FUNC_4(VAR_8->spdif_bits, FUNC_0(VAR_8, VAR_3));
   VAR_11 = FUNC_2(FUNC_0(VAR_8, VAR_2)) & ~VAR_4;
   if (VAR_9)
    VAR_11 |= VAR_4;
   FUNC_4(VAR_11, FUNC_0(VAR_8, VAR_2));
  }
 }
 FUNC_7(&VAR_8->reg_lock);
 return VAR_10;
}
