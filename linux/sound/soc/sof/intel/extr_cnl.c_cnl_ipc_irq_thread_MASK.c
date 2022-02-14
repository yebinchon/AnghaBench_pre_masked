
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_sof_dev {int dev; int ipc_lock; int waitq; scalar_t__ code_loading; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct snd_sof_dev*) ;
 int FUNC_2 (struct snd_sof_dev*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int,int) ;
 int FUNC_5 (struct snd_sof_dev*) ;
 int FUNC_6 (struct snd_sof_dev*,int ) ;
 int FUNC_7 (struct snd_sof_dev*,int ,int ) ;
 int FUNC_8 (struct snd_sof_dev*,int ,int ,int ,int ) ;
 int FUNC_9 (struct snd_sof_dev*) ;
 int FUNC_10 (struct snd_sof_dev*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_18, void *VAR_19)
{
 struct snd_sof_dev *VAR_20 = VAR_19;
 u32 VAR_21;
 u32 VAR_22;
 u32 VAR_23;
 u32 VAR_24;
 u32 VAR_25;
 u32 VAR_26;
 bool VAR_27 = 0;

 VAR_22 = FUNC_7(VAR_20, VAR_13, VAR_2);
 VAR_23 = FUNC_7(VAR_20, VAR_13, VAR_9);
 VAR_24 = FUNC_7(VAR_20, VAR_13, VAR_7);
 VAR_21 = FUNC_7(VAR_20, VAR_13, VAR_5);


 if (VAR_22 & VAR_3) {
  VAR_26 = VAR_21 & VAR_6;
  VAR_25 = VAR_22 & VAR_4;

  FUNC_4(VAR_20->dev,
    "ipc: firmware response, msg:0x%x, msg_ext:0x%x\n",
    VAR_25, VAR_26);


  FUNC_8(VAR_20, VAR_13,
     VAR_0,
     VAR_1, 0);

  FUNC_11(&VAR_20->ipc_lock);


  FUNC_5(VAR_20);
  FUNC_10(VAR_20, VAR_25);

  if (VAR_20->code_loading) {
   VAR_20->code_loading = 0;
   FUNC_13(&VAR_20->waitq);
  }

  FUNC_1(VAR_20);

  FUNC_12(&VAR_20->ipc_lock);

  VAR_27 = 1;
 }


 if (VAR_23 & VAR_10) {
  VAR_25 = VAR_23 & VAR_11;
  VAR_26 = VAR_24 & VAR_8;

  FUNC_4(VAR_20->dev,
    "ipc: firmware initiated, msg:0x%x, msg_ext:0x%x\n",
    VAR_25, VAR_26);


  if ((VAR_23 & VAR_17) ==
     VAR_16) {
   FUNC_6(VAR_20, FUNC_0(VAR_26));
  } else {
   FUNC_9(VAR_20);
  }

  FUNC_2(VAR_20);

  VAR_27 = 1;
 }

 if (!VAR_27) {



  FUNC_3(VAR_20->dev,
        "nothing to do in IPC IRQ thread\n");
 }


 FUNC_8(VAR_20, VAR_13, VAR_14,
    VAR_12, VAR_12);

 return VAR_15;
}
