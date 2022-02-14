
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* card; } ;
typedef TYPE_4__ vortex_t ;
typedef int u16 ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_7__ {int * value; } ;
struct TYPE_8__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_9__ {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 TYPE_4__* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (TYPE_4__*,int *,int*) ;

__attribute__((used)) static int
FUNC_3(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 vortex_t *VAR_2 = FUNC_1(VAR_0);
 int VAR_3, VAR_4 = 0;
 u16 VAR_5[20];

 FUNC_2(VAR_2, VAR_5, &VAR_4);
 if (VAR_4 != 20) {
  FUNC_0(VAR_2->card->dev,
   "peak count error 20 != %d\n", VAR_4);
  return -1;
 }
 for (VAR_3 = 0; VAR_3 < 20; VAR_3++)
  VAR_1->value.integer.value[VAR_3] = VAR_5[VAR_3];

 return 0;
}
