
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct xonar_pcm179x {int hp_active; } ;
struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int mutex; struct xonar_pcm179x* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oxygen*,int ) ;
 int FUNC_3 (struct oxygen*,int ,int) ;
 int FUNC_4 (struct oxygen*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_3,
       struct snd_ctl_elem_value *VAR_4)
{
 struct oxygen *VAR_5 = VAR_3->private_data;
 struct xonar_pcm179x *VAR_6 = VAR_5->model_data;
 u16 VAR_7, VAR_8;

 FUNC_0(&VAR_5->mutex);
 VAR_7 = FUNC_2(VAR_5, VAR_2);
 VAR_8 = VAR_7;
 switch (VAR_4->value.enumerated.item[0]) {
 case 0:
  VAR_8 |= VAR_1 | VAR_0;
  break;
 case 1:
  VAR_8 = (VAR_8 | VAR_0) & ~VAR_1;
  break;
 case 2:
  VAR_8 &= ~(VAR_1 | VAR_0);
  break;
 }
 FUNC_3(VAR_5, VAR_2, VAR_8);
 VAR_6->hp_active = !(VAR_8 & VAR_1);
 FUNC_4(VAR_5);
 FUNC_1(&VAR_5->mutex);
 return VAR_8 != VAR_7;
}
