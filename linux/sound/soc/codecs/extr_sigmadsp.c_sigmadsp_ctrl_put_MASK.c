
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct snd_kcontrol {TYPE_3__* vd; scalar_t__ private_value; } ;
struct TYPE_4__ {int * data; } ;
struct TYPE_5__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct sigmadsp_control {int cached; int num_bytes; int cache; } ;
struct sigmadsp {int lock; } ;
struct TYPE_6__ {int access; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sigmadsp*,struct sigmadsp_control*,int *) ;
 struct sigmadsp* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1,
 struct snd_ctl_elem_value *VAR_2)
{
 struct sigmadsp_control *VAR_3 = (void *)VAR_1->private_value;
 struct sigmadsp *VAR_4 = FUNC_4(VAR_1);
 uint8_t *VAR_5;
 int VAR_6 = 0;

 FUNC_1(&VAR_4->lock);

 VAR_5 = VAR_2->value.bytes.data;

 if (!(VAR_1->vd[0].access & VAR_0))
  VAR_6 = FUNC_3(VAR_4, VAR_3, VAR_5);

 if (VAR_6 == 0) {
  FUNC_0(VAR_3->cache, VAR_5, VAR_3->num_bytes);
  VAR_3->cached = 1;
 }

 FUNC_2(&VAR_4->lock);

 return VAR_6;
}
