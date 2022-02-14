
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct soc_bytes_ext {int max; } ;
struct wcd_iir_filter_ctl {int iir_idx; int band_idx; struct soc_bytes_ext bytes_ext; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_component*,int,int,int) ;
 int FUNC_1 (int ,int *,int ) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(
     struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{

 struct snd_soc_component *VAR_3 =
   FUNC_2(VAR_1);
 struct wcd_iir_filter_ctl *VAR_4 =
   (struct wcd_iir_filter_ctl *)VAR_1->private_value;
 struct soc_bytes_ext *VAR_5 = &VAR_4->bytes_ext;
 int VAR_6 = VAR_4->iir_idx;
 int VAR_7 = VAR_4->band_idx;
 u32 VAR_8[VAR_0];

 VAR_8[0] = FUNC_0(VAR_3, VAR_6, VAR_7, 0);
 VAR_8[1] = FUNC_0(VAR_3, VAR_6, VAR_7, 1);
 VAR_8[2] = FUNC_0(VAR_3, VAR_6, VAR_7, 2);
 VAR_8[3] = FUNC_0(VAR_3, VAR_6, VAR_7, 3);
 VAR_8[4] = FUNC_0(VAR_3, VAR_6, VAR_7, 4);

 FUNC_1(VAR_2->value.bytes.data, &VAR_8[0], VAR_5->max);

 return 0;
}
