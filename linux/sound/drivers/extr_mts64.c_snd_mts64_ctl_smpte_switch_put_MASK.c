
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int * value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct mts64 {int smpte_switch; int lock; TYPE_3__* pardev; int fps; int * time; } ;
struct TYPE_6__ {int port; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 struct mts64* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol* VAR_0,
       struct snd_ctl_elem_value *VAR_1)
{
 struct mts64 *VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = 0;
 int VAR_4 = !!VAR_1->value.integer.value[0];

 FUNC_3(&VAR_2->lock);
 if (VAR_2->smpte_switch == VAR_4)
  goto __out;

 VAR_3 = 1;
 VAR_2->smpte_switch = VAR_4;
 if (VAR_2->smpte_switch) {
  FUNC_0(VAR_2->pardev->port,
      VAR_2->time[0], VAR_2->time[1],
      VAR_2->time[2], VAR_2->time[3],
      VAR_2->fps);
 } else {
  FUNC_1(VAR_2->pardev->port);
 }
__out:
 FUNC_4(&VAR_2->lock);
 return VAR_3;
}
