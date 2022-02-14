
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
 int FUNC_0 (struct sst_dsp*,int ) ;
 int FUNC_1 (struct sst_dsp*,int ) ;
 int FUNC_2 (struct sst_dsp*) ;
 int FUNC_3 (struct sst_dsp*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,void const*,int ) ;
 int FUNC_6 (struct sst_dsp*,int ,int ,int ,int ,char*) ;
 int FUNC_7 (struct sst_dsp*,int ,int) ;
 int FUNC_8 (int ,int,int ,TYPE_2__*) ;
 int FUNC_9 (int ,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_10(struct sst_dsp *VAR_10, const void *VAR_11, u32 VAR_12)
{

 int VAR_13, VAR_14;

 VAR_14 = VAR_10->dsp_ops.prepare(VAR_10->dev, 0x40, VAR_12, &VAR_10->dmab);
 if (VAR_14 <= 0) {
  FUNC_4(VAR_10->dev, "dma prepare failed: 0%#x\n", VAR_14);
  return VAR_14;
 }

 VAR_10->dsp_ops.stream_tag = VAR_14;
 FUNC_5(VAR_10->dmab.area, VAR_11, VAR_12);


 FUNC_7(VAR_10, VAR_1,
      VAR_2 | (VAR_6 |
      ((VAR_14 - 1) << VAR_7)));

 VAR_13 = FUNC_1(VAR_10, VAR_9);
 if (VAR_13 < 0) {
  FUNC_4(VAR_10->dev, "dsp boot core failed ret: %d\n", VAR_13);
  VAR_13 = -VAR_8;
  goto base_fw_load_failed;
 }


 FUNC_2(VAR_10);
 FUNC_3(VAR_10);

 VAR_13 = FUNC_6(VAR_10, VAR_0, VAR_4,
        VAR_3, VAR_5,
        "rom load");
 if (VAR_13 < 0) {
  FUNC_4(VAR_10->dev, "rom init timeout, ret: %d\n", VAR_13);
  goto base_fw_load_failed;
 }

 return 0;

base_fw_load_failed:
 VAR_10->dsp_ops.cleanup(VAR_10->dev, &VAR_10->dmab, VAR_14);
 FUNC_0(VAR_10, VAR_9);

 return VAR_13;
}
