
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned short* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ad1816a {int lock; } ;


 int VAR_0 ;
 unsigned short FUNC_0 (struct snd_ad1816a*,int ) ;
 struct snd_ad1816a* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ad1816a *VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4;
 unsigned short VAR_5;

 FUNC_2(&VAR_3->lock, VAR_4);
 VAR_5 = FUNC_0(VAR_3, VAR_0);
 FUNC_3(&VAR_3->lock, VAR_4);
 VAR_2->value.enumerated.item[0] = (VAR_5 >> 12) & 7;
 VAR_2->value.enumerated.item[1] = (VAR_5 >> 4) & 7;
 return 0;
}
