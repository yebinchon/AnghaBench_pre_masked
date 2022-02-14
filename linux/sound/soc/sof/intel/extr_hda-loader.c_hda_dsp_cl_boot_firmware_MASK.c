
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sof_intel_dsp_desc {int init_core_mask; } ;
struct sof_dev_desc {struct sof_intel_dsp_desc* chip_info; } ;
struct snd_sof_pdata {TYPE_1__* fw; struct sof_dev_desc* desc; } ;
struct TYPE_5__ {int area; } ;
struct snd_sof_dev {int boot_complete; int dev; TYPE_2__ dmab; int boot_wait; struct snd_sof_pdata* pdata; } ;
struct hdac_ext_stream {int dummy; } ;
struct firmware {int size; int data; } ;
struct TYPE_4__ {int size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct snd_sof_dev*,TYPE_2__*,struct hdac_ext_stream*) ;
 int FUNC_1 (struct snd_sof_dev*,struct hdac_ext_stream*) ;
 int FUNC_2 (struct snd_sof_dev*,int ,int ,int) ;
 int FUNC_3 (struct snd_sof_dev*,int,int ,TYPE_2__*,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,...) ;
 struct hdac_ext_stream* FUNC_6 (struct snd_sof_dev*,int) ;
 int FUNC_7 (struct snd_sof_dev*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (struct snd_sof_dev*,int ,int ) ;
 int FUNC_11 (struct snd_sof_dev*,int ,int ,int ,int ) ;

int FUNC_12(struct snd_sof_dev *VAR_12)
{
 struct snd_sof_pdata *VAR_13 = VAR_12->pdata;
 const struct sof_dev_desc *VAR_14 = VAR_13->desc;
 const struct sof_intel_dsp_desc *VAR_15;
 struct hdac_ext_stream *VAR_16;
 struct firmware VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;

 VAR_15 = VAR_14->chip_info;

 VAR_17.data = VAR_13->fw->data;
 VAR_17.size = VAR_13->fw->size;


 FUNC_8(&VAR_12->boot_wait);
 VAR_12->boot_complete = 0;


 VAR_20 = FUNC_3(VAR_12, 0x40, VAR_17.size,
    &VAR_12->dmab, VAR_6);

 if (VAR_20 < 0) {
  FUNC_5(VAR_12->dev, "error: dma prepare for fw loading err: %x\n",
   VAR_20);
  return VAR_20;
 }


 VAR_16 = FUNC_6(VAR_12, VAR_20);
 if (!VAR_16) {
  FUNC_5(VAR_12->dev,
   "error: could not get stream with stream tag %d\n",
   VAR_20);
  VAR_18 = -VAR_0;
  goto err;
 }

 FUNC_9(VAR_12->dmab.area, VAR_17.data,
        VAR_17.size);


 for (VAR_21 = 0; VAR_21 < VAR_5; VAR_21++) {
  VAR_18 = FUNC_2(VAR_12, VAR_17.data,
      VAR_17.size, VAR_20);


  if (!VAR_18)
   break;

  FUNC_5(VAR_12->dev, "error: Error code=0x%x: FW status=0x%x\n",
   FUNC_10(VAR_12, VAR_1,
      VAR_3),
   FUNC_10(VAR_12, VAR_1,
      VAR_4));
  FUNC_5(VAR_12->dev, "error: iteration %d of Core En/ROM load failed: %d\n",
   VAR_21, VAR_18);
 }

 if (VAR_21 == VAR_5) {
  FUNC_5(VAR_12->dev, "error: dsp init failed after %d attempts with err: %d\n",
   VAR_21, VAR_18);
  goto cleanup;
 }





 VAR_18 = FUNC_1(VAR_12, VAR_16);
 if (!VAR_18)
  FUNC_4(VAR_12->dev, "Firmware download successful, booting...\n");
 else
  FUNC_5(VAR_12->dev, "error: load fw failed ret: %d\n", VAR_18);

cleanup:




 VAR_19 = FUNC_0(VAR_12, &VAR_12->dmab, VAR_16);
 if (VAR_19 < 0) {
  FUNC_5(VAR_12->dev, "error: Code loader DSP cleanup failed\n");


  VAR_18 = VAR_19;
 }





 if (!VAR_18)
  return VAR_15->init_core_mask;


err:
 FUNC_7(VAR_12, VAR_9 | VAR_8 | VAR_7);


 FUNC_11(VAR_12, VAR_2,
    VAR_11,
    VAR_10, 0);
 return VAR_18;
}
