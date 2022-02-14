
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct via82xx {int port; int reg_lock; } ;
struct TYPE_6__ {scalar_t__ index; } ;
struct snd_kcontrol {TYPE_3__ id; } ;
struct TYPE_4__ {scalar_t__* item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;
 struct via82xx* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
       struct snd_ctl_elem_value *VAR_3)
{
 struct via82xx *VAR_4 = FUNC_2(VAR_2);
 unsigned long VAR_5 = VAR_4->port + (VAR_2->id.index ? (VAR_0 + 0x10) : VAR_0);
 u8 VAR_6, VAR_7;

 FUNC_3(&VAR_4->reg_lock);
 VAR_7 = FUNC_0(VAR_5);
 VAR_6 = VAR_7 & ~VAR_1;
 if (VAR_3->value.enumerated.item[0])
  VAR_6 |= VAR_1;
 if (VAR_6 != VAR_7)
  FUNC_1(VAR_6, VAR_5);
 FUNC_4(&VAR_4->reg_lock);
 return VAR_6 != VAR_7;
}
