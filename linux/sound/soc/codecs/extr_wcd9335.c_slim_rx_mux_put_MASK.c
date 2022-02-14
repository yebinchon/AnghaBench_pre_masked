
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct wcd9335_codec {int rx_port_value; int dev; TYPE_4__* dai; TYPE_3__* rx_chs; } ;
struct soc_enum {int dummy; } ;
struct snd_soc_dapm_widget {size_t shift; TYPE_5__* dapm; } ;
struct snd_soc_dapm_update {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_6__ {int* item; } ;
struct TYPE_7__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {int slim_ch_list; } ;
struct TYPE_8__ {int list; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 struct wcd9335_codec* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 struct snd_soc_dapm_widget* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (TYPE_5__*,struct snd_kcontrol*,int,struct soc_enum*,struct snd_soc_dapm_update*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_5,
      struct snd_ctl_elem_value *VAR_6)
{
 struct snd_soc_dapm_widget *VAR_7 = FUNC_4(VAR_5);
 struct wcd9335_codec *VAR_8 = FUNC_1(VAR_7->dapm->dev);
 struct soc_enum *VAR_9 = (struct soc_enum *)VAR_5->private_value;
 struct snd_soc_dapm_update *VAR_10 = ((void*)0);
 u32 VAR_11 = VAR_7->shift;

 VAR_8->rx_port_value = VAR_6->value.enumerated.item[0];

 switch (VAR_8->rx_port_value) {
 case 0:
  FUNC_3(&VAR_8->rx_chs[VAR_11].list);
  break;
 case 1:
  FUNC_2(&VAR_8->rx_chs[VAR_11].list,
         &VAR_8->dai[VAR_0].slim_ch_list);
  break;
 case 2:
  FUNC_2(&VAR_8->rx_chs[VAR_11].list,
         &VAR_8->dai[VAR_1].slim_ch_list);
  break;
 case 3:
  FUNC_2(&VAR_8->rx_chs[VAR_11].list,
         &VAR_8->dai[VAR_2].slim_ch_list);
  break;
 case 4:
  FUNC_2(&VAR_8->rx_chs[VAR_11].list,
         &VAR_8->dai[VAR_3].slim_ch_list);
  break;
 default:
  FUNC_0(VAR_8->dev, "Unknown AIF %d\n", VAR_8->rx_port_value);
  goto err;
 }

 FUNC_5(VAR_7->dapm, VAR_5, VAR_8->rx_port_value,
          VAR_9, VAR_10);

 return 0;
err:
 return -VAR_4;
}
