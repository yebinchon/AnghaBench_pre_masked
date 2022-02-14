
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_tplg_vendor_array {scalar_t__ size; } ;
struct TYPE_2__ {char* data; } ;
struct snd_soc_tplg_manifest {TYPE_1__ priv; } ;
struct skl_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct snd_soc_tplg_vendor_array*) ;
 int FUNC_1 (struct device*,char*,struct skl_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_tplg_manifest *VAR_2,
   struct device *VAR_3, struct skl_dev *VAR_4)
{
 struct snd_soc_tplg_vendor_array *VAR_5;
 int VAR_6, VAR_7 = 0, VAR_8, VAR_9 = 0;
 char *VAR_10;
 int VAR_11;


 VAR_5 = (struct snd_soc_tplg_vendor_array *)VAR_2->priv.data;
 VAR_11 = FUNC_0(VAR_3, VAR_5);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_6 = VAR_11;

 VAR_9 += VAR_5->size;

 while (VAR_6 > 0) {
  VAR_5 = (struct snd_soc_tplg_vendor_array *)
    (VAR_2->priv.data + VAR_9);
  VAR_11 = FUNC_0(VAR_3, VAR_5);

  if (VAR_11 < 0)
   return VAR_11;
  VAR_8 = VAR_11;
  VAR_9 += VAR_5->size;

  VAR_5 = (struct snd_soc_tplg_vendor_array *)
   (VAR_2->priv.data + VAR_9);

  VAR_11 = FUNC_0(VAR_3, VAR_5);

  if (VAR_11 < 0)
   return VAR_11;
  VAR_7 = VAR_11;
  VAR_9 += VAR_5->size;

  VAR_5 = (struct snd_soc_tplg_vendor_array *)
   (VAR_2->priv.data + VAR_9);

  VAR_10 = (VAR_2->priv.data + VAR_9);

  if (VAR_8 == VAR_1) {
   VAR_11 = FUNC_1(VAR_3, VAR_10, VAR_4,
     VAR_7);

   if (VAR_11 < 0)
    return VAR_11;

   --VAR_6;
  } else {
   return -VAR_0;
  }
  VAR_9 += VAR_11;
 }

 return 0;
}
