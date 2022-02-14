
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct snd_soc_tplg_vendor_value_elem {int dummy; } ;
struct snd_soc_tplg_vendor_string_elem {int dummy; } ;
struct snd_soc_tplg_vendor_array {int type; int num_elems; struct snd_soc_tplg_vendor_value_elem* value; TYPE_2__* uuid; scalar_t__ size; } ;
struct skl_dev {TYPE_1__** modules; int nr_modules; } ;
struct device {int dummy; } ;
typedef int guid_t ;
struct TYPE_4__ {int uuid; int token; } ;
struct TYPE_3__ {int uuid; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct device*,struct snd_soc_tplg_vendor_value_elem*,struct skl_dev*) ;
 int FUNC_3 (struct device*,struct snd_soc_tplg_vendor_array*,struct skl_dev*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2,
  char *VAR_3, struct skl_dev *VAR_4,
  int VAR_5)
{
 int VAR_6 = 0, VAR_7;
 int VAR_8 = 0, VAR_9 = 0;
 u8 VAR_10 = 0;
 struct snd_soc_tplg_vendor_array *VAR_11;
 struct snd_soc_tplg_vendor_value_elem *VAR_12;

 if (VAR_5 <= 0)
  return -VAR_0;

 while (VAR_9 < VAR_5) {
  VAR_11 = (struct snd_soc_tplg_vendor_array *)(VAR_3 + VAR_8);
  VAR_8 += VAR_11->size;
  switch (VAR_11->type) {
  case 129:
   VAR_7 = FUNC_3(VAR_2, VAR_11, VAR_4);

   if (VAR_7 < 0)
    return VAR_7;
   VAR_6 = VAR_7;

   VAR_9 += VAR_6 *
    sizeof(struct snd_soc_tplg_vendor_string_elem);
   continue;

  case 128:
   if (VAR_11->uuid->token != VAR_1) {
    FUNC_0(VAR_2, "Not an UUID token: %d\n",
     VAR_11->uuid->token);
    return -VAR_0;
   }
   if (VAR_10 >= VAR_4->nr_modules) {
    FUNC_0(VAR_2, "Too many UUID tokens\n");
    return -VAR_0;
   }
   FUNC_1(&VAR_4->modules[VAR_10++]->uuid,
      (guid_t *)&VAR_11->uuid->uuid);

   VAR_9 += sizeof(*VAR_11->uuid);
   continue;

  default:
   VAR_12 = VAR_11->value;
   VAR_6 = 0;
   break;
  }

  while (VAR_6 <= VAR_11->num_elems - 1) {
   VAR_7 = FUNC_2(VAR_2,
     VAR_12, VAR_4);
   if (VAR_7 < 0)
    return VAR_7;

   VAR_6 = VAR_6 + VAR_7;
   VAR_12++;
  }
  VAR_9 += (VAR_6 * sizeof(*VAR_12));
  VAR_6 = 0;
 }

 return VAR_8;
}
