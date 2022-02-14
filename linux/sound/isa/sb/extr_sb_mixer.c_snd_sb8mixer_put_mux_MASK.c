
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_sb {int mixer_lock; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 struct snd_sb* FUNC_0 (struct snd_kcontrol*) ;
 unsigned char FUNC_1 (struct snd_sb*,int ) ;
 int FUNC_2 (struct snd_sb*,int ,unsigned char) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_5, struct snd_ctl_elem_value *VAR_6)
{
 struct snd_sb *VAR_7 = FUNC_0(VAR_5);
 unsigned long VAR_8;
 int VAR_9;
 unsigned char VAR_10, VAR_11;

 if (VAR_6->value.enumerated.item[0] > 2)
  return -VAR_0;
 switch (VAR_6->value.enumerated.item[0]) {
 case 1:
  VAR_10 = VAR_2;
  break;
 case 2:
  VAR_10 = VAR_3;
  break;
 default:
  VAR_10 = VAR_4;
 }
 VAR_10 <<= 1;
 FUNC_3(&VAR_7->mixer_lock, VAR_8);
 VAR_11 = FUNC_1(VAR_7, VAR_1);
 VAR_10 |= VAR_11 & ~0x06;
 VAR_9 = VAR_10 != VAR_11;
 if (VAR_9)
  FUNC_2(VAR_7, VAR_1, VAR_10);
 FUNC_4(&VAR_7->mixer_lock, VAR_8);
 return VAR_9;
}
