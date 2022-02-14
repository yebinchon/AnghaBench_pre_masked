
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int (* cl_cleanup_controller ) (struct sst_dsp*) ;} ;
struct TYPE_7__ {TYPE_1__ ops; } ;
struct sst_dsp {TYPE_3__* fw; TYPE_2__ cl_dev; int dev; int fw_name; struct skl_dev* thread_context; } ;
struct skl_dev {int boot_complete; int fw_loaded; int boot_wait; scalar_t__ is_first_boot; } ;
struct firmware {int size; int data; } ;
struct TYPE_8__ {int size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__**,int ,int ) ;
 scalar_t__ FUNC_7 (struct sst_dsp*,int ) ;
 int FUNC_8 (struct sst_dsp*) ;
 int FUNC_9 (struct sst_dsp*) ;
 int FUNC_10 (struct sst_dsp*,int ) ;
 int FUNC_11 (struct firmware*) ;
 int FUNC_12 (struct sst_dsp*) ;
 int FUNC_13 (struct sst_dsp*) ;
 int FUNC_14 (struct sst_dsp*,int ,int ) ;
 int FUNC_15 (struct sst_dsp*,TYPE_3__*,int ,int ) ;
 int FUNC_16 (struct sst_dsp*,int ) ;
 int FUNC_17 (struct sst_dsp*) ;
 int FUNC_18 (int ,int,int ) ;

__attribute__((used)) static int FUNC_19(struct sst_dsp *VAR_7)
{
 int VAR_8 = 0, VAR_9;
 struct skl_dev *VAR_10 = VAR_7->thread_context;
 struct firmware VAR_11;
 u32 VAR_12;

 VAR_10->boot_complete = 0;
 FUNC_2(&VAR_10->boot_wait);

 if (VAR_7->fw == ((void*)0)) {
  VAR_8 = FUNC_6(&VAR_7->fw, VAR_7->fw_name, VAR_7->dev);
  if (VAR_8 < 0) {
   FUNC_1(VAR_7->dev, "Request firmware failed %d\n", VAR_8);
   return -VAR_0;
  }
 }


 if (VAR_10->is_first_boot) {
  VAR_8 = FUNC_15(VAR_7, VAR_7->fw, VAR_1, 0);
  if (VAR_8 < 0) {
   FUNC_1(VAR_7->dev, "UUID parsing err: %d\n", VAR_8);
   FUNC_5(VAR_7->fw);
   FUNC_10(VAR_7, VAR_3);
   return VAR_8;
  }
 }


 VAR_11.data = VAR_7->fw->data;
 VAR_11.size = VAR_7->fw->size;

 FUNC_11(&VAR_11);

 VAR_8 = FUNC_9(VAR_7);
 if (VAR_8 < 0) {
  FUNC_1(VAR_7->dev, "Boot dsp core failed ret: %d\n", VAR_8);
  goto skl_load_base_firmware_failed;
 }

 VAR_8 = FUNC_8(VAR_7);
 if (VAR_8 < 0) {
  FUNC_1(VAR_7->dev, "CL dma prepare failed : %d\n", VAR_8);
  goto skl_load_base_firmware_failed;
 }


 FUNC_12(VAR_7);
 FUNC_13(VAR_7);


 for (VAR_9 = VAR_5; VAR_9 > 0; --VAR_9) {
  if (FUNC_7(VAR_7, VAR_4)) {
   FUNC_0(VAR_7->dev,
    "ROM loaded, we can continue with FW loading\n");
   break;
  }
  FUNC_3(1);
 }
 if (!VAR_9) {
  VAR_12 = FUNC_16(VAR_7, VAR_2);
  FUNC_1(VAR_7->dev,
   "Timeout waiting for ROM init done, reg:0x%x\n", VAR_12);
  VAR_8 = -VAR_0;
  goto transfer_firmware_failed;
 }

 VAR_8 = FUNC_14(VAR_7, VAR_11.data, VAR_11.size);
 if (VAR_8 < 0) {
  FUNC_1(VAR_7->dev, "Transfer firmware failed%d\n", VAR_8);
  goto transfer_firmware_failed;
 } else {
  VAR_8 = FUNC_18(VAR_10->boot_wait, VAR_10->boot_complete,
     FUNC_4(VAR_6));
  if (VAR_8 == 0) {
   FUNC_1(VAR_7->dev, "DSP boot failed, FW Ready timed-out\n");
   VAR_8 = -VAR_0;
   goto transfer_firmware_failed;
  }

  FUNC_0(VAR_7->dev, "Download firmware successful%d\n", VAR_8);
  VAR_10->fw_loaded = 1;
 }
 return 0;
transfer_firmware_failed:
 VAR_7->cl_dev.ops.cl_cleanup_controller(VAR_7);
skl_load_base_firmware_failed:
 FUNC_10(VAR_7, VAR_3);
 FUNC_5(VAR_7->fw);
 VAR_7->fw = ((void*)0);
 return VAR_8;
}
