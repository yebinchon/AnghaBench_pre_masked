
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct onyx {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct onyx*,int ,int*) ;
 struct onyx* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_4,
     struct snd_ctl_elem_value *VAR_5)
{
 struct onyx *VAR_6 = FUNC_3(VAR_4);
 u8 VAR_7;

 FUNC_0(&VAR_6->mutex);
 FUNC_2(VAR_6, VAR_0, &VAR_7);
 VAR_5->value.iec958.status[0] = VAR_7 & 0x3e;

 FUNC_2(VAR_6, VAR_1, &VAR_7);
 VAR_5->value.iec958.status[1] = VAR_7;

 FUNC_2(VAR_6, VAR_2, &VAR_7);
 VAR_5->value.iec958.status[3] = VAR_7 & 0x3f;

 FUNC_2(VAR_6, VAR_3, &VAR_7);
 VAR_5->value.iec958.status[4] = VAR_7 & 0x0f;
 FUNC_1(&VAR_6->mutex);

 return 0;
}
