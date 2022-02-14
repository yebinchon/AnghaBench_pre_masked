
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sst_dsp {TYPE_1__* fw; int dev; int fw_name; struct skl_dev* thread_context; } ;
struct skl_dev {int fw_loaded; int boot_complete; int boot_wait; scalar_t__ is_first_boot; } ;
struct firmware {int size; int data; } ;
struct TYPE_4__ {int size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__**,int ,int ) ;
 int FUNC_6 (struct sst_dsp*,int ) ;
 int FUNC_7 (struct firmware*) ;
 int FUNC_8 (struct sst_dsp*,TYPE_1__*,int ,int ) ;
 int FUNC_9 (struct sst_dsp*,int ,int ) ;
 int FUNC_10 (struct sst_dsp*,int ) ;
 int FUNC_11 (struct sst_dsp*) ;
 int FUNC_12 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct sst_dsp *VAR_7)
{
 struct firmware VAR_8;
 struct skl_dev *VAR_9 = VAR_7->thread_context;
 int VAR_10, VAR_11;

 if (VAR_7->fw == ((void*)0)) {
  VAR_10 = FUNC_5(&VAR_7->fw, VAR_7->fw_name, VAR_7->dev);
  if (VAR_10 < 0) {
   FUNC_1(VAR_7->dev, "Request firmware failed %d\n", VAR_10);
   return VAR_10;
  }
 }


 if (VAR_9->is_first_boot) {
  VAR_10 = FUNC_8(VAR_7, VAR_7->fw, VAR_1, 0);
  if (VAR_10 < 0)
   goto sst_load_base_firmware_failed;
 }

 VAR_8.data = VAR_7->fw->data;
 VAR_8.size = VAR_7->fw->size;
 FUNC_7(&VAR_8);


 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_10 = FUNC_9(VAR_7, VAR_8.data, VAR_8.size);
  if (VAR_10 == 0)
   break;
 }

 if (VAR_10 < 0) {
  FUNC_1(VAR_7->dev, "Error code=0x%x: FW status=0x%x\n",
   FUNC_10(VAR_7, VAR_0),
   FUNC_10(VAR_7, VAR_2));

  FUNC_1(VAR_7->dev, "Core En/ROM load fail:%d\n", VAR_10);
  goto sst_load_base_firmware_failed;
 }

 VAR_10 = FUNC_11(VAR_7);
 if (VAR_10 < 0) {
  FUNC_1(VAR_7->dev, "Transfer firmware failed %d\n", VAR_10);
  FUNC_2(VAR_7->dev, "Error code=0x%x: FW status=0x%x\n",
   FUNC_10(VAR_7, VAR_0),
   FUNC_10(VAR_7, VAR_2));

  FUNC_6(VAR_7, VAR_5);
 } else {
  FUNC_0(VAR_7->dev, "Firmware download successful\n");
  VAR_10 = FUNC_12(VAR_9->boot_wait, VAR_9->boot_complete,
     FUNC_3(VAR_6));
  if (VAR_10 == 0) {
   FUNC_1(VAR_7->dev, "DSP boot fail, FW Ready timeout\n");
   FUNC_6(VAR_7, VAR_5);
   VAR_10 = -VAR_4;
  } else {
   VAR_10 = 0;
   VAR_9->fw_loaded = 1;
  }
 }

 return VAR_10;

sst_load_base_firmware_failed:
 FUNC_4(VAR_7->fw);
 VAR_7->fw = ((void*)0);
 return VAR_10;
}
