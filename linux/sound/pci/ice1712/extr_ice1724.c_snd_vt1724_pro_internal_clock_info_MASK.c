
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {int* data; } ;
struct snd_ice1712 {TYPE_2__* hw_rates; int * ext_clock_names; scalar_t__ ext_clock_count; TYPE_1__ eeprom; scalar_t__ force_rdma1; } ;
struct TYPE_7__ {int items; int item; int name; } ;
struct TYPE_8__ {TYPE_3__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_4__ value; int type; } ;
struct TYPE_6__ {int count; int* list; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_ice1712* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
           struct snd_ctl_elem_info *VAR_4)
{
 struct snd_ice1712 *VAR_5 = FUNC_0(VAR_3);
 int VAR_6 = VAR_5->hw_rates->count;
 VAR_4->type = VAR_1;
 VAR_4->count = 1;


 VAR_4->value.enumerated.items = VAR_6;

 if (VAR_5->force_rdma1 ||
     (VAR_5->eeprom.data[VAR_0] & VAR_2))
  VAR_4->value.enumerated.items += VAR_5->ext_clock_count;

 if (VAR_4->value.enumerated.item >= VAR_4->value.enumerated.items)
  VAR_4->value.enumerated.item = VAR_4->value.enumerated.items - 1;
 if (VAR_4->value.enumerated.item >= VAR_6)

  FUNC_2(VAR_4->value.enumerated.name,
    VAR_5->ext_clock_names[
    VAR_4->value.enumerated.item - VAR_6]);
 else

  FUNC_1(VAR_4->value.enumerated.name, "%d",
   VAR_5->hw_rates->list[VAR_4->value.enumerated.item]);
 return 0;
}
