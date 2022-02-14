
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_fw_header {scalar_t__ file_size; int abi; int num_modules; int sig; } ;
struct snd_sof_dev {int dev; } ;
struct firmware {scalar_t__ size; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__,int ,int ,int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_sof_dev *VAR_3, const struct firmware *VAR_4)
{
 struct snd_sof_fw_header *VAR_5;


 VAR_5 = (struct snd_sof_fw_header *)VAR_4->data;


 if (FUNC_2(VAR_5->sig, VAR_1, VAR_2) != 0) {
  FUNC_1(VAR_3->dev, "error: invalid firmware signature\n");
  return -VAR_0;
 }


 if (VAR_4->size != VAR_5->file_size + sizeof(*VAR_5)) {
  FUNC_1(VAR_3->dev, "error: invalid filesize mismatch got 0x%zx expected 0x%zx\n",
   VAR_4->size, VAR_5->file_size + sizeof(*VAR_5));
  return -VAR_0;
 }

 FUNC_0(VAR_3->dev, "header size=0x%x modules=0x%x abi=0x%x size=%zu\n",
  VAR_5->file_size, VAR_5->num_modules,
  VAR_5->abi, sizeof(*VAR_5));

 return 0;
}
