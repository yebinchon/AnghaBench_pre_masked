
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_3__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct hdspm {int texts_autosync_items; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdspm*) ;
 scalar_t__ FUNC_1 (struct hdspm*,int) ;
 int FUNC_2 (struct hdspm*) ;
 struct hdspm* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_1,
           struct snd_ctl_elem_value *VAR_2)
{
 struct hdspm *VAR_3 = FUNC_3(VAR_1);
 int VAR_4, VAR_5 = 0;

 if (!FUNC_2(VAR_3))
  return -VAR_0;

 VAR_4 = VAR_2->value.enumerated.item[0];

 if (VAR_4 < 0)
  VAR_4 = 0;
 else if (VAR_4 >= VAR_3->texts_autosync_items)
  VAR_4 = VAR_3->texts_autosync_items-1;

 FUNC_4(&VAR_3->lock);
 if (VAR_4 != FUNC_0(VAR_3))
  VAR_5 = (0 == FUNC_1(VAR_3, VAR_4)) ? 1 : 0;

 FUNC_5(&VAR_3->lock);
 return VAR_5;
}
