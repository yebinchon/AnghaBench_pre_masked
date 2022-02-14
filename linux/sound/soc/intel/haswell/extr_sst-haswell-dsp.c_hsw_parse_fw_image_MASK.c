
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_fw {int size; scalar_t__ dma_buf; struct sst_dsp* dsp; } ;
struct sst_dsp {int dev; } ;
struct fw_module_header {int mod_size; } ;
struct fw_header {int modules; int file_format; int file_size; int signature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct sst_dsp*,struct sst_fw*,struct fw_module_header*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct sst_fw *VAR_2)
{
 struct fw_header *VAR_3;
 struct fw_module_header *VAR_4;
 struct sst_dsp *VAR_5 = VAR_2->dsp;
 int VAR_6, VAR_7;


 VAR_3 = (struct fw_header *)VAR_2->dma_buf;


 if ((FUNC_4(VAR_3->signature, VAR_1, 4) != 0) ||
     (VAR_2->size !=
      FUNC_3(VAR_3->file_size) + sizeof(*VAR_3))) {
  FUNC_1(VAR_5->dev, "error: invalid fw sign/filesize mismatch\n");
  return -VAR_0;
 }

 FUNC_0(VAR_5->dev, "header size=0x%x modules=0x%x fmt=0x%x size=%zu\n",
  VAR_3->file_size, VAR_3->modules,
  VAR_3->file_format, sizeof(*VAR_3));


 VAR_4 = (void *)VAR_2->dma_buf + sizeof(*VAR_3);
 for (VAR_7 = 0; VAR_7 < FUNC_3(VAR_3->modules); VAR_7++) {


  VAR_6 = FUNC_2(VAR_5, VAR_2, VAR_4);
  if (VAR_6 < 0) {
   FUNC_1(VAR_5->dev, "error: invalid module %d\n", VAR_7);
   return VAR_6;
  }
  VAR_4 = (void *)VAR_4 + sizeof(*VAR_4) +
   FUNC_3(VAR_4->mod_size);
 }

 return 0;
}
