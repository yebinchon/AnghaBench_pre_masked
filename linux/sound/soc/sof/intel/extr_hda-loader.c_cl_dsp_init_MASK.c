
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sof_intel_hda_dev {struct sof_intel_dsp_desc* desc; } ;
struct sof_intel_dsp_desc {int cores_mask; int ssp_count; int ipc_req_mask; unsigned int ipc_ack_mask; int rom_init_timeout; int ipc_ack; int ipc_req; scalar_t__ ssp_base_offset; } ;
struct snd_sof_dev {int dev; TYPE_1__* pdata; } ;
struct TYPE_2__ {struct sof_intel_hda_dev* hw_pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct snd_sof_dev*,int) ;
 int FUNC_3 (struct snd_sof_dev*,int) ;
 int FUNC_4 (struct snd_sof_dev*,int) ;
 int FUNC_5 (struct snd_sof_dev*,int) ;
 int FUNC_6 (struct snd_sof_dev*,int) ;
 int FUNC_7 (struct snd_sof_dev*) ;
 int FUNC_8 (struct snd_sof_dev*,int ,int ,unsigned int,int,int ,int) ;
 int FUNC_9 (struct snd_sof_dev*,int ,scalar_t__,int ,int ) ;
 int FUNC_10 (struct snd_sof_dev*,int ,int ,int) ;

__attribute__((used)) static int FUNC_11(struct snd_sof_dev *VAR_15, const void *VAR_16,
         u32 VAR_17, int VAR_18)
{
 struct sof_intel_hda_dev *VAR_19 = VAR_15->pdata->hw_pdata;
 const struct sof_intel_dsp_desc *VAR_20 = VAR_19->desc;
 unsigned int VAR_21;
 int VAR_22;
 int VAR_23;


 VAR_22 = FUNC_3(VAR_15, VAR_20->cores_mask);
 if (VAR_22 < 0) {
  FUNC_1(VAR_15->dev, "error: dsp core 0/1 power up failed\n");
  goto err;
 }


 for (VAR_23 = 0; VAR_23 < VAR_20->ssp_count; VAR_23++) {
  FUNC_9(VAR_15, VAR_1,
       VAR_20->ssp_base_offset
       + VAR_23 * VAR_11
       + VAR_13,
       VAR_12,
       VAR_12);
 }


 FUNC_10(VAR_15, VAR_1, VAR_20->ipc_req,
     VAR_20->ipc_req_mask | (VAR_3 |
     ((VAR_18 - 1) << 9)));


 VAR_22 = FUNC_5(VAR_15, FUNC_0(0));
 if (VAR_22 < 0) {
  FUNC_1(VAR_15->dev, "error: dsp core start failed %d\n", VAR_22);
  VAR_22 = -VAR_0;
  goto err;
 }


 VAR_22 = FUNC_8(VAR_15, VAR_1,
         VAR_20->ipc_ack, VAR_21,
         ((VAR_21 & VAR_20->ipc_ack_mask)
          == VAR_20->ipc_ack_mask),
         VAR_4,
         VAR_2);

 if (VAR_22 < 0) {
  FUNC_1(VAR_15->dev, "error: waiting for HIPCIE done\n");
  goto err;
 }


 VAR_22 = FUNC_2(VAR_15,
      VAR_20->cores_mask & ~(FUNC_0(0)));
 if (VAR_22 < 0) {
  FUNC_1(VAR_15->dev, "error: dsp core x power down failed\n");
  goto err;
 }


 FUNC_7(VAR_15);


 VAR_22 = FUNC_8(VAR_15, VAR_1,
     VAR_7, VAR_21,
     ((VAR_21 & VAR_6)
      == VAR_5),
     VAR_4,
     VAR_20->rom_init_timeout *
     VAR_14);
 if (!VAR_22)
  return 0;

err:
 FUNC_6(VAR_15, VAR_10 | VAR_9 | VAR_8);
 FUNC_4(VAR_15, VAR_20->cores_mask);

 return VAR_22;
}
