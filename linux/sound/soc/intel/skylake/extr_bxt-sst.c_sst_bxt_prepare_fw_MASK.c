
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int area; } ;
struct TYPE_4__ {int (* prepare ) (int ,int,int ,TYPE_2__*) ;int stream_tag; int (* cleanup ) (int ,TYPE_2__*,int) ;} ;
struct sst_dsp {TYPE_2__ dmab; int dev; TYPE_1__ dsp_ops; } ;


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
 int FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,void const*,int ) ;
 int FUNC_3 (struct sst_dsp*,int) ;
 int FUNC_4 (struct sst_dsp*,int) ;
 int FUNC_5 (struct sst_dsp*,int) ;
 int FUNC_6 (struct sst_dsp*,int) ;
 int FUNC_7 (struct sst_dsp*) ;
 int FUNC_8 (struct sst_dsp*) ;
 int FUNC_9 (struct sst_dsp*,int ,int ,int ,int ,char*) ;
 int FUNC_10 (struct sst_dsp*,int ,int) ;
 int FUNC_11 (int ,int,int ,TYPE_2__*) ;
 int FUNC_12 (int ,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_13(struct sst_dsp *VAR_12,
   const void *VAR_13, u32 VAR_14)
{
 int VAR_15, VAR_16;

 VAR_15 = VAR_12->dsp_ops.prepare(VAR_12->dev, 0x40, VAR_14, &VAR_12->dmab);
 if (VAR_15 <= 0) {
  FUNC_1(VAR_12->dev, "Failed to prepare DMA FW loading err: %x\n",
    VAR_15);
  return VAR_15;
 }

 VAR_12->dsp_ops.stream_tag = VAR_15;
 FUNC_2(VAR_12->dmab.area, VAR_13, VAR_14);


 VAR_16 = FUNC_4(VAR_12, VAR_9 |
    FUNC_0(1));
 if (VAR_16 < 0) {
  FUNC_1(VAR_12->dev, "dsp core0/1 power up failed\n");
  goto base_fw_load_failed;
 }


 FUNC_10(VAR_12, VAR_5, VAR_8 |
    (VAR_2 | ((VAR_15 - 1) << 9)));


 VAR_16 = FUNC_6(VAR_12, VAR_9);
 if (VAR_16 < 0) {
  FUNC_1(VAR_12->dev, "Start dsp core failed ret: %d\n", VAR_16);
  VAR_16 = -VAR_4;
  goto base_fw_load_failed;
 }


 VAR_16 = FUNC_9(VAR_12, VAR_6,
     VAR_7,
     VAR_7,
     VAR_1, "HIPCIE Done");
 if (VAR_16 < 0) {
  FUNC_1(VAR_12->dev, "Timeout for Purge Request%d\n", VAR_16);
  goto base_fw_load_failed;
 }


 VAR_16 = FUNC_3(VAR_12, FUNC_0(1));
 if (VAR_16 < 0) {
  FUNC_1(VAR_12->dev, "dsp core1 power down failed\n");
  goto base_fw_load_failed;
 }


 FUNC_7(VAR_12);
 FUNC_8(VAR_12);


 VAR_16 = FUNC_9(VAR_12, VAR_0, VAR_11,
   VAR_10, VAR_3, "ROM Load");
 if (VAR_16 < 0) {
  FUNC_1(VAR_12->dev, "Timeout for ROM init, ret:%d\n", VAR_16);
  goto base_fw_load_failed;
 }

 return VAR_16;

base_fw_load_failed:
 VAR_12->dsp_ops.cleanup(VAR_12->dev, &VAR_12->dmab, VAR_15);
 FUNC_3(VAR_12, FUNC_0(1));
 FUNC_5(VAR_12, VAR_9);
 return VAR_16;
}
