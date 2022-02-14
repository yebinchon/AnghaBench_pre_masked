
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ad1816a {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short FUNC_0 (struct snd_ad1816a*,int ) ;
 int FUNC_1 (struct snd_ad1816a*,int ,unsigned short) ;
 struct snd_ad1816a* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ad1816a *VAR_4 = FUNC_2(VAR_2);
 unsigned long VAR_5;
 unsigned short VAR_6;
 int VAR_7;

 if (VAR_3->value.enumerated.item[0] > 6 ||
     VAR_3->value.enumerated.item[1] > 6)
  return -VAR_1;
 VAR_6 = (VAR_3->value.enumerated.item[0] << 12) |
       (VAR_3->value.enumerated.item[1] << 4);
 FUNC_3(&VAR_4->lock, VAR_5);
 VAR_7 = FUNC_0(VAR_4, VAR_0) != VAR_6;
 FUNC_1(VAR_4, VAR_0, VAR_6);
 FUNC_4(&VAR_4->lock, VAR_5);
 return VAR_7;
}
