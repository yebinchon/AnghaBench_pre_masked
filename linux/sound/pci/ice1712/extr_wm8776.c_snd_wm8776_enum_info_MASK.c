
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_wm8776 {TYPE_1__* ctl; } ;
struct snd_kcontrol {int private_value; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct TYPE_2__ {int enum_names; int max; } ;


 int FUNC_0 (struct snd_ctl_elem_info*,int,int ,int ) ;
 struct snd_wm8776* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_info *VAR_1)
{
 struct snd_wm8776 *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = VAR_0->private_value;

 return FUNC_0(VAR_1, 1, VAR_2->ctl[VAR_3].max,
      VAR_2->ctl[VAR_3].enum_names);
}
