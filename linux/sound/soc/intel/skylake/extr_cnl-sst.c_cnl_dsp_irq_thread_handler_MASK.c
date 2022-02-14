
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
 scalar_t__ FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct sst_dsp*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sst_generic_ipc*,struct skl_ipc_header) ;
 int FUNC_5 (struct sst_generic_ipc*,struct skl_ipc_header) ;
 struct skl_dev* FUNC_6 (struct sst_dsp*) ;
 int FUNC_7 (struct sst_dsp*,int ) ;
 int FUNC_8 (struct sst_dsp*,int ,int ,int ) ;
 int FUNC_9 (struct sst_dsp*,int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_12, void *VAR_13)
{
 struct sst_dsp *VAR_14 = VAR_13;
 struct skl_dev *VAR_15 = FUNC_6(VAR_14);
 struct sst_generic_ipc *VAR_16 = &VAR_15->ipc;
 struct skl_ipc_header VAR_17 = {0};
 u32 VAR_18, VAR_19, VAR_20;
 int VAR_21 = 0;


 if (!(VAR_14->intr_status & VAR_0))
  return VAR_11;

 VAR_18 = FUNC_7(VAR_14, VAR_3);
 VAR_19 = FUNC_7(VAR_14, VAR_8);
 VAR_20 = FUNC_7(VAR_14, VAR_7);


 if (VAR_18 & VAR_4) {
  FUNC_8(VAR_14, VAR_1,
   VAR_2, 0);


  FUNC_9(VAR_14, VAR_3,
   VAR_4, VAR_4);

  VAR_21 = 1;


  FUNC_8(VAR_14, VAR_1,
   VAR_2, VAR_2);
 }


 if (VAR_19 & VAR_9) {
  VAR_17.primary = VAR_19;
  VAR_17.extension = VAR_20;
  FUNC_2(VAR_14->dev, "IPC irq: Firmware respond primary:%x",
      VAR_17.primary);
  FUNC_2(VAR_14->dev, "IPC irq: Firmware respond extension:%x",
      VAR_17.extension);

  if (FUNC_0(VAR_17.primary)) {

   FUNC_5(VAR_16, VAR_17);
  } else {
   FUNC_2(VAR_14->dev, "IPC irq: Notification from firmware\n");
   FUNC_4(VAR_16, VAR_17);
  }

  FUNC_9(VAR_14, VAR_8,
   VAR_9, VAR_9);


  FUNC_9(VAR_14, VAR_5,
   VAR_6, VAR_6);
  VAR_21 = 1;
 }

 if (VAR_21 == 0)
  return VAR_11;

 FUNC_1(VAR_14);


 FUNC_3(&VAR_16->kwork);

 return VAR_10;
}
