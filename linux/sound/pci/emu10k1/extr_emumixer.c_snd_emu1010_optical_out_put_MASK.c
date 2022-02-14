
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {unsigned int optical_out; scalar_t__ optical_in; } ;
struct snd_emu10k1 {TYPE_1__ emu1010; } ;
struct TYPE_5__ {unsigned int* item; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_emu10k1*,int ,int) ;
 struct snd_emu10k1* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_4,
     struct snd_ctl_elem_value *VAR_5)
{
 struct snd_emu10k1 *VAR_6 = FUNC_1(VAR_4);
 unsigned int VAR_7;
 u32 VAR_8;
 int VAR_9 = 0;

 VAR_7 = VAR_5->value.enumerated.item[0];

 if (VAR_7 >= 2)
  return -VAR_0;
 VAR_9 = (VAR_6->emu1010.optical_out != VAR_7);
 if (VAR_9) {
  VAR_6->emu1010.optical_out = VAR_7;
  VAR_8 = (VAR_6->emu1010.optical_in ? VAR_1 : 0) |
   (VAR_6->emu1010.optical_out ? VAR_2 : 0);
  FUNC_0(VAR_6, VAR_3, VAR_8);
 }
 return VAR_9;
}
