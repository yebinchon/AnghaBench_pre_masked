
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int template ;
struct sst_module_template {int entry; int id; } ;
struct sst_module {scalar_t__ size; void* data; int type; scalar_t__ offset; } ;
struct sst_fw {int dummy; } ;
struct TYPE_2__ {scalar_t__ lpe; scalar_t__ fw_ext; scalar_t__ dram_offset; scalar_t__ iram_offset; } ;
struct sst_dsp {int dev; TYPE_1__ addr; } ;
struct sst_byt_fw_module_header {int blocks; int entry_point; int type; } ;
struct dma_block_info {scalar_t__ size; int type; scalar_t__ ram_offset; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct sst_module_template*,int ,int) ;
 int FUNC_2 (struct sst_module*) ;
 struct sst_module* FUNC_3 (struct sst_fw*,struct sst_module_template*,int *) ;

__attribute__((used)) static int FUNC_4(struct sst_dsp *VAR_5, struct sst_fw *VAR_6,
    struct sst_byt_fw_module_header *VAR_7)
{
 struct dma_block_info *VAR_8;
 struct sst_module *VAR_9;
 struct sst_module_template VAR_10;
 int VAR_11;

 FUNC_1(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.id = VAR_7->type;
 VAR_10.entry = VAR_7->entry_point;

 VAR_9 = FUNC_3(VAR_6, &VAR_10, ((void*)0));
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 VAR_8 = (void *)VAR_7 + sizeof(*VAR_7);

 for (VAR_11 = 0; VAR_11 < VAR_7->blocks; VAR_11++) {

  if (VAR_8->size <= 0) {
   FUNC_0(VAR_5->dev, "block %d size invalid\n", VAR_11);
   return -VAR_0;
  }

  switch (VAR_8->type) {
  case 128:
   VAR_9->offset = VAR_8->ram_offset +
         VAR_5->addr.iram_offset;
   VAR_9->type = VAR_4;
   break;
  case 129:
   VAR_9->offset = VAR_8->ram_offset +
         VAR_5->addr.dram_offset;
   VAR_9->type = VAR_3;
   break;
  case 130:
   VAR_9->offset = VAR_8->ram_offset +
         (VAR_5->addr.fw_ext - VAR_5->addr.lpe);
   VAR_9->type = VAR_2;
   break;
  default:
   FUNC_0(VAR_5->dev, "wrong ram type 0x%x in block0x%x\n",
    VAR_8->type, VAR_11);
   return -VAR_0;
  }

  VAR_9->size = VAR_8->size;
  VAR_9->data = (void *)VAR_8 + sizeof(*VAR_8);

  FUNC_2(VAR_9);

  VAR_8 = (void *)VAR_8 + sizeof(*VAR_8) + VAR_8->size;
 }
 return 0;
}
