
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int private_value; } ;
struct snd_ctl_elem_value {int dummy; } ;
struct snd_ac97 {unsigned short* regs; } ;


 size_t VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_1 (struct snd_ac97*,int ,int ,int ) ;
 struct snd_ac97* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_5,
     struct snd_ctl_elem_value *VAR_6)
{
 int VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (VAR_7 > 0) {
  struct snd_ac97 *VAR_8 = FUNC_2(VAR_5);
  int VAR_9 = (VAR_5->private_value >> 8) & 0x0f;
  int VAR_10 = (VAR_5->private_value >> 12) & 0x0f;
  unsigned short VAR_11;
  if (VAR_9 != VAR_10)
   VAR_11 = VAR_2;
  else
   VAR_11 = VAR_1;
  FUNC_1(VAR_8, VAR_4, VAR_3,
         (VAR_8->regs[VAR_0] & VAR_11) == VAR_11 ?
         VAR_3 : 0);
 }
 return VAR_7;
}
