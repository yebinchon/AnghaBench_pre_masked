
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_sof_mod_hdr {size_t size; } ;
struct snd_sof_fw_header {int num_modules; } ;
struct snd_sof_dev {int dev; } ;
struct firmware {int size; scalar_t__ data; } ;
struct TYPE_2__ {int (* load_module ) (struct snd_sof_dev*,struct snd_sof_mod_hdr*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 TYPE_1__* FUNC_1 (struct snd_sof_dev*) ;

__attribute__((used)) static int FUNC_2(struct snd_sof_dev *VAR_1, const struct firmware *VAR_2)
{
 struct snd_sof_fw_header *VAR_3;
 struct snd_sof_mod_hdr *VAR_4;
 int (*VAR_5)(struct snd_sof_dev *VAR_6,
      struct snd_sof_mod_hdr *VAR_7);
 int VAR_8, VAR_9;
 size_t VAR_10;

 VAR_3 = (struct snd_sof_fw_header *)VAR_2->data;
 VAR_5 = FUNC_1(VAR_1)->load_module;
 if (!VAR_5)
  return -VAR_0;


 VAR_4 = (struct snd_sof_mod_hdr *)((u8 *)(VAR_2->data) + sizeof(*VAR_3));
 VAR_10 = VAR_2->size - sizeof(*VAR_3);

 if (VAR_10 > VAR_2->size) {
  FUNC_0(VAR_1->dev, "error: fw size smaller than header size\n");
  return -VAR_0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_3->num_modules; VAR_9++) {

  if (VAR_10 < sizeof(*VAR_4)) {
   FUNC_0(VAR_1->dev, "error: not enough data remaining\n");
   return -VAR_0;
  }


  VAR_10 -= sizeof(*VAR_4);


  VAR_8 = VAR_5(VAR_1, VAR_4);
  if (VAR_8 < 0) {
   FUNC_0(VAR_1->dev, "error: invalid module %d\n", VAR_9);
   return VAR_8;
  }

  if (VAR_10 < VAR_4->size) {
   FUNC_0(VAR_1->dev, "error: not enough data remaining\n");
   return -VAR_0;
  }


  VAR_10 -= VAR_4->size;
  VAR_4 = (struct snd_sof_mod_hdr *)((u8 *)VAR_4
   + sizeof(*VAR_4) + VAR_4->size);
 }

 return 0;
}
