
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_fw {scalar_t__ size; scalar_t__ dma_buf; struct sst_dsp* dsp; } ;
struct sst_dsp {int dev; } ;
struct sst_byt_fw_module_header {int mod_size; } ;
struct fw_header {scalar_t__ file_size; int modules; int file_format; int signature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,scalar_t__,int,int ,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct sst_dsp*,struct sst_fw*,struct sst_byt_fw_module_header*) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct sst_fw *VAR_2)
{
 struct fw_header *VAR_3;
 struct sst_byt_fw_module_header *VAR_4;
 struct sst_dsp *VAR_5 = VAR_2->dsp;
 int VAR_6, VAR_7;


 VAR_3 = (struct fw_header *)VAR_2->dma_buf;


 if ((FUNC_3(VAR_3->signature, VAR_1, 4) != 0) ||
     (VAR_2->size != VAR_3->file_size + sizeof(*VAR_3))) {

  FUNC_1(VAR_5->dev, "Invalid FW sign/filesize mismatch\n");
  return -VAR_0;
 }

 FUNC_0(VAR_5->dev,
  "header sign=%4s size=0x%x modules=0x%x fmt=0x%x size=%zu\n",
  VAR_3->signature, VAR_3->file_size, VAR_3->modules,
  VAR_3->file_format, sizeof(*VAR_3));

 VAR_4 = (void *)VAR_2->dma_buf + sizeof(*VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_3->modules; VAR_7++) {

  VAR_6 = FUNC_2(VAR_5, VAR_2, VAR_4);
  if (VAR_6 < 0) {
   FUNC_1(VAR_5->dev, "invalid module %d\n", VAR_7);
   return VAR_6;
  }
  VAR_4 = (void *)VAR_4 + sizeof(*VAR_4) + VAR_4->mod_size;
 }

 return 0;
}
