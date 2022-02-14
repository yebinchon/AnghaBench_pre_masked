
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct soc_bytes_ext {int max; } ;
struct wcd_iir_filter_ctl {int iir_idx; int band_idx; struct soc_bytes_ext bytes_ext; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct snd_soc_component*,int,int,int ) ;
 int FUNC_2 (struct snd_soc_component*,scalar_t__,int) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(
     struct snd_kcontrol *VAR_2,
     struct snd_ctl_elem_value *VAR_3)
{
 struct snd_soc_component *VAR_4 =
   FUNC_3(VAR_2);
 struct wcd_iir_filter_ctl *VAR_5 =
   (struct wcd_iir_filter_ctl *)VAR_2->private_value;
 struct soc_bytes_ext *VAR_6 = &VAR_5->bytes_ext;
 int VAR_7 = VAR_5->iir_idx;
 int VAR_8 = VAR_5->band_idx;
 u32 VAR_9[VAR_0];

 FUNC_0(&VAR_9[0], VAR_3->value.bytes.data, VAR_6->max);



 FUNC_2(VAR_4,
  (VAR_1 + 64 * VAR_7),
  (VAR_8 * VAR_0 * sizeof(uint32_t)) & 0x7F);

 FUNC_1(VAR_4, VAR_7, VAR_8, VAR_9[0]);
 FUNC_1(VAR_4, VAR_7, VAR_8, VAR_9[1]);
 FUNC_1(VAR_4, VAR_7, VAR_8, VAR_9[2]);
 FUNC_1(VAR_4, VAR_7, VAR_8, VAR_9[3]);
 FUNC_1(VAR_4, VAR_7, VAR_8, VAR_9[4]);

 return 0;
}
