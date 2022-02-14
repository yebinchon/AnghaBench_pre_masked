
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct snd_kcontrol {int dummy; } ;
struct snd_emu10k1 {unsigned int p16v_capture_channel; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_emu10k1*,int ,int ) ;
 int FUNC_1 (struct snd_emu10k1*,int ,int ,unsigned int) ;
 struct snd_emu10k1* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2,
     struct snd_ctl_elem_value *VAR_3)
{
 struct snd_emu10k1 *VAR_4 = FUNC_2(VAR_2);
 unsigned int VAR_5;
 int VAR_6 = 0;
 u32 VAR_7;

 VAR_5 = VAR_3->value.enumerated.item[0] ;
 if (VAR_5 > 3)
  return -VAR_1;
 VAR_6 = (VAR_4->p16v_capture_channel != VAR_5);
 if (VAR_6) {
  VAR_4->p16v_capture_channel = VAR_5;
  VAR_7 = FUNC_0(VAR_4, VAR_0, 0) & 0xfffc;
  FUNC_1(VAR_4, VAR_0, 0, VAR_7 | VAR_5);
 }
        return VAR_6;
}
