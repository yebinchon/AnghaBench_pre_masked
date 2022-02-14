
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
struct img_spdif_in {int trk; int* aclkgen_regs; int lock; scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct img_spdif_in*,int) ;
 int FUNC_1 (struct img_spdif_in*,int ) ;
 int FUNC_2 (struct img_spdif_in*,int,int ) ;
 struct snd_soc_dai* FUNC_3 (struct snd_kcontrol*) ;
 struct img_spdif_in* FUNC_4 (struct snd_soc_dai*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_7,
      struct snd_ctl_elem_value *VAR_8)
{
 struct snd_soc_dai *VAR_9 = FUNC_3(VAR_7);
 struct img_spdif_in *VAR_10 = FUNC_4(VAR_9);
 unsigned long VAR_11;
 int VAR_12;
 u32 VAR_13;

 FUNC_5(&VAR_10->lock, VAR_11);

 if (VAR_10->active) {
  FUNC_6(&VAR_10->lock, VAR_11);
  return -VAR_0;
 }

 VAR_10->trk = VAR_8->value.integer.value[0];

 VAR_13 = FUNC_1(VAR_10, VAR_3);
 VAR_13 &= ~VAR_4;
 VAR_13 |= VAR_10->trk << VAR_5;
 FUNC_2(VAR_10, VAR_13, VAR_3);

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_10->aclkgen_regs[VAR_12] = (VAR_10->aclkgen_regs[VAR_12] &
   ~VAR_1) |
   (VAR_10->trk << VAR_2);

  FUNC_0(VAR_10, VAR_12);
 }

 FUNC_6(&VAR_10->lock, VAR_11);

 return 0;
}
