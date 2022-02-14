
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_tplg_vendor_array {scalar_t__ size; } ;
struct TYPE_3__ {char* data; } ;
struct snd_soc_tplg_dapm_widget {TYPE_1__ priv; } ;
struct TYPE_4__ {int caps_size; int caps; } ;
struct skl_module_cfg {TYPE_2__ formats_config; } ;
struct skl_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct device*,struct snd_soc_tplg_vendor_array*) ;
 int FUNC_2 (struct snd_soc_tplg_dapm_widget*,struct skl_dev*,struct device*,struct skl_module_cfg*) ;
 int FUNC_3 (struct device*,char*,struct skl_dev*,struct skl_module_cfg*,int) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_tplg_dapm_widget *VAR_1,
    struct skl_dev *VAR_2, struct device *VAR_3,
    struct skl_module_cfg *VAR_4)
{
 struct snd_soc_tplg_vendor_array *VAR_5;
 int VAR_6, VAR_7 = 0, VAR_8, VAR_9 = 0;
 char *VAR_10;
 int VAR_11;





 if (FUNC_4((char *)VAR_1->priv.data))
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);


 VAR_5 = (struct snd_soc_tplg_vendor_array *)VAR_1->priv.data;
 VAR_11 = FUNC_1(VAR_3, VAR_5);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_6 = VAR_11;

 VAR_9 += VAR_5->size;

 while (VAR_6 > 0) {
  VAR_5 = (struct snd_soc_tplg_vendor_array *)
    (VAR_1->priv.data + VAR_9);

  VAR_11 = FUNC_1(VAR_3, VAR_5);

  if (VAR_11 < 0)
   return VAR_11;
  VAR_8 = VAR_11;
  VAR_9 += VAR_5->size;

  VAR_5 = (struct snd_soc_tplg_vendor_array *)
   (VAR_1->priv.data + VAR_9);

  VAR_11 = FUNC_1(VAR_3, VAR_5);

  if (VAR_11 < 0)
   return VAR_11;
  VAR_7 = VAR_11;
  VAR_9 += VAR_5->size;

  VAR_5 = (struct snd_soc_tplg_vendor_array *)
   (VAR_1->priv.data + VAR_9);

  VAR_10 = (VAR_1->priv.data + VAR_9);

  if (VAR_8 == VAR_0) {
   VAR_11 = FUNC_3(VAR_3, VAR_10,
     VAR_2, VAR_4, VAR_7);

   if (VAR_11 < 0)
    return VAR_11;

   --VAR_6;
  } else {
   if (VAR_4->formats_config.caps_size > 0)
    FUNC_0(VAR_4->formats_config.caps, VAR_10,
     VAR_4->formats_config.caps_size);
   --VAR_6;
   VAR_11 = VAR_4->formats_config.caps_size;
  }
  VAR_9 += VAR_11;
 }

 return 0;
}
