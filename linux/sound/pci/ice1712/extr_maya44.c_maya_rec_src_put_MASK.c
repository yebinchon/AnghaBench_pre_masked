
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_maya44 {int mutex; int ice; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct snd_maya44* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (struct snd_maya44*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_3,
       struct snd_ctl_elem_value *VAR_4)
{
 struct snd_maya44 *VAR_5 = FUNC_3(VAR_3);
 int VAR_6 = VAR_4->value.enumerated.item[0];
 int VAR_7;

 FUNC_1(&VAR_5->mutex);
 VAR_7 = FUNC_0(VAR_5->ice, 1 << VAR_0,
         VAR_6 ? (1 << VAR_0) : 0);
 FUNC_4(VAR_5, 0, VAR_6 ? VAR_2 : VAR_1);
 FUNC_2(&VAR_5->mutex);
 return VAR_7;
}
