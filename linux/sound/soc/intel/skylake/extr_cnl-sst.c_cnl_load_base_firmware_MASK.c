
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
 int FUNC_0 (struct sst_dsp*,int ) ;
 int FUNC_1 (struct sst_dsp*,int ,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__**,int ,int ) ;
 int FUNC_6 (struct firmware*) ;
 int FUNC_7 (struct sst_dsp*,TYPE_1__*,int ,int ) ;
 int FUNC_8 (struct sst_dsp*) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct sst_dsp *VAR_4)
{
 struct firmware VAR_5;
 struct skl_dev *VAR_6 = VAR_4->thread_context;
 int VAR_7;

 if (!VAR_4->fw) {
  VAR_7 = FUNC_5(&VAR_4->fw, VAR_4->fw_name, VAR_4->dev);
  if (VAR_7 < 0) {
   FUNC_2(VAR_4->dev, "request firmware failed: %d\n", VAR_7);
   goto cnl_load_base_firmware_failed;
  }
 }


 if (VAR_6->is_first_boot) {
  VAR_7 = FUNC_7(VAR_4, VAR_4->fw,
       VAR_0, 0);
  if (VAR_7 < 0)
   goto cnl_load_base_firmware_failed;
 }

 VAR_5.data = VAR_4->fw->data;
 VAR_5.size = VAR_4->fw->size;
 FUNC_6(&VAR_5);

 VAR_7 = FUNC_1(VAR_4, VAR_5.data, VAR_5.size);
 if (VAR_7 < 0) {
  FUNC_2(VAR_4->dev, "prepare firmware failed: %d\n", VAR_7);
  goto cnl_load_base_firmware_failed;
 }

 VAR_7 = FUNC_8(VAR_4);
 if (VAR_7 < 0) {
  FUNC_2(VAR_4->dev, "transfer firmware failed: %d\n", VAR_7);
  FUNC_0(VAR_4, VAR_2);
  goto cnl_load_base_firmware_failed;
 }

 VAR_7 = FUNC_9(VAR_6->boot_wait, VAR_6->boot_complete,
     FUNC_3(VAR_3));
 if (VAR_7 == 0) {
  FUNC_2(VAR_4->dev, "FW ready timed-out\n");
  FUNC_0(VAR_4, VAR_2);
  VAR_7 = -VAR_1;
  goto cnl_load_base_firmware_failed;
 }

 VAR_6->fw_loaded = 1;

 return 0;

cnl_load_base_firmware_failed:
 FUNC_4(VAR_4->fw);
 VAR_4->fw = ((void*)0);

 return VAR_7;
}
