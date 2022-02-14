
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_tplg_vendor_string_elem {int dummy; } ;
struct snd_soc_tplg_vendor_array {int num_elems; scalar_t__ value; } ;
struct skl_dev {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,struct snd_soc_tplg_vendor_string_elem*,struct skl_dev*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0,
  struct snd_soc_tplg_vendor_array *VAR_1,
  struct skl_dev *VAR_2)
{
 int VAR_3 = 0, VAR_4;
 struct snd_soc_tplg_vendor_string_elem *VAR_5;

 VAR_5 = (struct snd_soc_tplg_vendor_string_elem *)VAR_1->value;
 while (VAR_3 < VAR_1->num_elems) {
  VAR_4 = FUNC_0(VAR_0, VAR_5, VAR_2);
  VAR_5++;

  if (VAR_4 < 0)
   return VAR_4;

  VAR_3 = VAR_3 + VAR_4;
 }

 return VAR_3;
}
