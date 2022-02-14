
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sst_generic_ipc {int kwork; } ;
struct sst_dsp {int intr_status; int dev; } ;
struct skl_ipc_header {int primary; int extension; int member_0; } ;
struct skl_dev {struct sst_generic_ipc ipc; } ;
typedef int irqreturn_t ;


 scalar_t__ FUNC_0 (int) ;
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
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sst_dsp*) ;
 int FUNC_4 (struct sst_dsp*) ;
 int FUNC_5 (struct sst_generic_ipc*,struct skl_ipc_header) ;
 int FUNC_6 (struct sst_generic_ipc*,struct skl_ipc_header) ;
 struct skl_dev* FUNC_7 (struct sst_dsp*) ;
 int FUNC_8 (struct sst_dsp*,int ) ;
 int FUNC_9 (struct sst_dsp*,int ,int ,int ) ;
 int FUNC_10 (struct sst_dsp*,int ,int,int) ;

irqreturn_t FUNC_11(int VAR_11, void *VAR_12)
{
 struct sst_dsp *VAR_13 = VAR_12;
 struct skl_dev *VAR_14 = FUNC_7(VAR_13);
 struct sst_generic_ipc *VAR_15 = &VAR_14->ipc;
 struct skl_ipc_header VAR_16 = {0};
 u32 VAR_17, VAR_18, VAR_19;
 int VAR_20 = 0;

 if (VAR_13->intr_status & VAR_2)
  FUNC_3(VAR_13);


 if (!(VAR_13->intr_status & VAR_3))
  return VAR_1;

 VAR_17 = FUNC_8(VAR_13, VAR_6);
 VAR_18 = FUNC_8(VAR_13, VAR_8);
 VAR_19 = FUNC_8(VAR_13, VAR_9);


 if (VAR_17 & VAR_7) {
  FUNC_9(VAR_13, VAR_4,
   VAR_5, 0);


  FUNC_10(VAR_13, VAR_6,
   VAR_7, VAR_7);

  VAR_20 = 1;


  FUNC_9(VAR_13, VAR_4,
   VAR_5, VAR_5);
 }


 if (VAR_18 & VAR_10) {
  VAR_16.primary = VAR_18;
  VAR_16.extension = VAR_19;
  FUNC_1(VAR_13->dev, "IPC irq: Firmware respond primary:%x\n",
      VAR_16.primary);
  FUNC_1(VAR_13->dev, "IPC irq: Firmware respond extension:%x\n",
      VAR_16.extension);

  if (FUNC_0(VAR_16.primary)) {

   FUNC_6(VAR_15, VAR_16);
  } else {
   FUNC_1(VAR_13->dev, "IPC irq: Notification from firmware\n");
   FUNC_5(VAR_15, VAR_16);
  }

  FUNC_10(VAR_13, VAR_8,
   VAR_10, VAR_10);
  VAR_20 = 1;
 }

 if (VAR_20 == 0)
  return VAR_1;

 FUNC_4(VAR_13);


 FUNC_2(&VAR_15->kwork);

 return VAR_0;
}
