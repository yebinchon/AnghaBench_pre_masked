
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int cs8403_stream_bits; } ;
struct snd_ice1712 {int reg_lock; int * playback_pro_substream; TYPE_2__ spdif; } ;
struct TYPE_3__ {int iec958; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_ice1712*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_ice1712 *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(&VAR_1->value.iec958);
 FUNC_2(&VAR_0->reg_lock);
 VAR_3 = VAR_0->spdif.cs8403_stream_bits != VAR_2;
 VAR_0->spdif.cs8403_stream_bits = VAR_2;
 if (VAR_3 && VAR_0->playback_pro_substream != ((void*)0)) {
  FUNC_3(&VAR_0->reg_lock);
  FUNC_1(VAR_0, VAR_2);
 } else {
  FUNC_3(&VAR_0->reg_lock);
 }
 return VAR_3;
}
