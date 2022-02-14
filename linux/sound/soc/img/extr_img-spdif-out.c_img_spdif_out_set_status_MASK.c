
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct img_spdif_out {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct img_spdif_out*,int ) ;
 int FUNC_1 (struct img_spdif_out*,int,int ) ;
 struct snd_soc_dai* FUNC_2 (struct snd_kcontrol*) ;
 struct img_spdif_out* FUNC_3 (struct snd_soc_dai*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_4,
      struct snd_ctl_elem_value *VAR_5)
{
 struct snd_soc_dai *VAR_6 = FUNC_2(VAR_4);
 struct img_spdif_out *VAR_7 = FUNC_3(VAR_6);
 u32 VAR_8;
 unsigned long VAR_9;

 VAR_8 = ((u32)VAR_5->value.iec958.status[3] << 24);
 VAR_8 |= ((u32)VAR_5->value.iec958.status[2] << 16);
 VAR_8 |= ((u32)VAR_5->value.iec958.status[1] << 8);
 VAR_8 |= (u32)VAR_5->value.iec958.status[0];

 FUNC_4(&VAR_7->lock, VAR_9);

 FUNC_1(VAR_7, VAR_8, VAR_3);

 VAR_8 = FUNC_0(VAR_7, VAR_0);
 VAR_8 &= ~VAR_1;
 VAR_8 |= (u32)VAR_5->value.iec958.status[4] <<
   VAR_2;
 FUNC_1(VAR_7, VAR_8, VAR_0);

 FUNC_5(&VAR_7->lock, VAR_9);

 return 0;
}
