
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct snd_kcontrol {TYPE_3__* private_data; } ;
struct TYPE_7__ {int* value; } ;
struct TYPE_8__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_9__ {int dline; int * itd; int * hrtf; } ;
typedef TYPE_3__ a3dsrc_t ;


 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (int ,int*) ;

__attribute__((used)) static int
FUNC_4(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 a3dsrc_t *VAR_2 = VAR_0->private_data;
 int VAR_3[6];
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
  VAR_3[VAR_4] = VAR_1->value.integer.value[VAR_4];

 FUNC_3(VAR_2->hrtf[0], VAR_3);
 FUNC_3(VAR_2->hrtf[1], VAR_3);

 FUNC_2(VAR_2, VAR_2->itd[0], VAR_2->itd[1]);
 FUNC_0(VAR_2, VAR_2->itd[0], VAR_2->itd[1]);
 FUNC_1(VAR_2, VAR_2->dline);
 return 1;
}
