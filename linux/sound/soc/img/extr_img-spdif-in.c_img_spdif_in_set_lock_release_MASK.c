
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct img_spdif_in {int lock_release; int lock; scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct img_spdif_in*,int ) ;
 int FUNC_1 (struct img_spdif_in*,int,int ) ;
 struct snd_soc_dai* FUNC_2 (struct snd_kcontrol*) ;
 struct img_spdif_in* FUNC_3 (struct snd_soc_dai*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_4,
      struct snd_ctl_elem_value *VAR_5)
{
 struct snd_soc_dai *VAR_6 = FUNC_2(VAR_4);
 struct img_spdif_in *VAR_7 = FUNC_3(VAR_6);
 unsigned long VAR_8;
 u32 VAR_9;

 FUNC_4(&VAR_7->lock, VAR_8);

 if (VAR_7->active) {
  FUNC_5(&VAR_7->lock, VAR_8);
  return -VAR_0;
 }

 VAR_7->lock_release = VAR_5->value.integer.value[0];

 VAR_9 = FUNC_0(VAR_7, VAR_1);
 VAR_9 &= ~VAR_2;
 VAR_9 |= (VAR_7->lock_release << VAR_3) &
  VAR_2;
 FUNC_1(VAR_7, VAR_9, VAR_1);

 FUNC_5(&VAR_7->lock, VAR_8);

 return 0;
}
