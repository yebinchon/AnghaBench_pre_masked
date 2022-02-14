
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct sigmadsp_control {int cached; int num_bytes; int cache; int addr; } ;
struct sigmadsp {int lock; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sigmadsp*,int ,int ,int ) ;
 struct sigmadsp* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0,
 struct snd_ctl_elem_value *VAR_1)
{
 struct sigmadsp_control *VAR_2 = (void *)VAR_0->private_value;
 struct sigmadsp *VAR_3 = FUNC_4(VAR_0);
 int VAR_4 = 0;

 FUNC_1(&VAR_3->lock);

 if (!VAR_2->cached) {
  VAR_4 = FUNC_3(VAR_3, VAR_2->addr, VAR_2->cache,
   VAR_2->num_bytes);
 }

 if (VAR_4 == 0) {
  VAR_2->cached = 1;
  FUNC_0(VAR_1->value.bytes.data, VAR_2->cache,
   VAR_2->num_bytes);
 }

 FUNC_2(&VAR_3->lock);

 return VAR_4;
}
