
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uuid_module {int id; int max_instance; int is_loadable; int uuid; int list; int instance_id; } ;
struct sst_dsp {int dev; struct skl_dev* thread_context; } ;
struct skl_dev {int uuid_list; } ;
struct firmware {char* data; unsigned int size; } ;
struct TYPE_2__ {int load_type; } ;
struct adsp_module_entry {int instance_max_count; TYPE_1__ type; int uuid; } ;
struct adsp_fw_hdr {int len; int num_modules; } ;
typedef int guid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int *,int,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *,int *) ;
 struct uuid_module* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct firmware*) ;
 int FUNC_7 (struct skl_dev*) ;

int FUNC_8(struct sst_dsp *VAR_3, const struct firmware *VAR_4,
   unsigned int VAR_5, int VAR_6)
{
 struct adsp_fw_hdr *VAR_7;
 struct adsp_module_entry *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 const char *VAR_12;
 struct skl_dev *VAR_13 = VAR_3->thread_context;
 struct uuid_module *VAR_14;
 struct firmware VAR_15;
 unsigned int VAR_16;
 int VAR_17 = 0;


 VAR_15.data = VAR_4->data;
 VAR_15.size = VAR_4->size;

 FUNC_6(&VAR_15);

 VAR_12 = VAR_15.data;


 VAR_16 = sizeof(*VAR_7) + VAR_5;
 if (VAR_15.size <= VAR_16) {
  FUNC_1(VAR_3->dev, "Small fw file size, No space for hdr\n");
  return -VAR_0;
 }

 VAR_7 = (struct adsp_fw_hdr *)(VAR_12 + VAR_5);


 VAR_16 += VAR_7->len + sizeof(*VAR_8);
 if (VAR_15.size <= VAR_16) {
  FUNC_1(VAR_3->dev, "Small fw file size, No module entry\n");
  return -VAR_0;
 }

 VAR_8 = (struct adsp_module_entry *)(VAR_12 + VAR_5 + VAR_7->len);

 VAR_10 = VAR_7->num_modules;


 VAR_16 += VAR_10 * sizeof(*VAR_8);
 if (VAR_15.size <= VAR_16) {
  FUNC_1(VAR_3->dev, "Small fw file size, No modules\n");
  return -VAR_0;
 }
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++, VAR_8++) {
  VAR_14 = FUNC_4(sizeof(*VAR_14), VAR_2);
  if (!VAR_14) {
   VAR_17 = -VAR_1;
   goto free_uuid_list;
  }

  FUNC_3(&VAR_14->uuid, (guid_t *)&VAR_8->uuid);

  VAR_14->id = (VAR_9 | (VAR_6 << 12));
  VAR_14->is_loadable = VAR_8->type.load_type;
  VAR_14->max_instance = VAR_8->instance_max_count;
  VAR_11 = sizeof(int) * VAR_8->instance_max_count;
  VAR_14->instance_id = FUNC_2(VAR_3->dev, VAR_11, VAR_2);
  if (!VAR_14->instance_id) {
   VAR_17 = -VAR_1;
   goto free_uuid_list;
  }

  FUNC_5(&VAR_14->list, &VAR_13->uuid_list);

  FUNC_0(VAR_3->dev,
   "Adding uuid :%pUL   mod id: %d  Loadable: %d\n",
   &VAR_14->uuid, VAR_14->id, VAR_14->is_loadable);
 }

 return 0;

free_uuid_list:
 FUNC_7(VAR_13);
 return VAR_17;
}
