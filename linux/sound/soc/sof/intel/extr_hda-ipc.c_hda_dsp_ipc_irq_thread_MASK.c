
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_sof_dev {int dev; int ipc_lock; int waitq; scalar_t__ code_loading; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (struct snd_sof_dev*) ;
 int FUNC_4 (struct snd_sof_dev*) ;
 int FUNC_5 (struct snd_sof_dev*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct snd_sof_dev*,int ) ;
 int FUNC_8 (struct snd_sof_dev*,int ,int ) ;
 int FUNC_9 (struct snd_sof_dev*,int ,int ,int ,int ) ;
 int FUNC_10 (struct snd_sof_dev*) ;
 int FUNC_11 (struct snd_sof_dev*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

irqreturn_t FUNC_15(int VAR_19, void *VAR_20)
{
 struct snd_sof_dev *VAR_21 = VAR_20;
 u32 VAR_22;
 u32 VAR_23;
 u32 VAR_24;
 u32 VAR_25;
 u32 VAR_26;
 u32 VAR_27;
 bool VAR_28 = 0;


 VAR_23 = FUNC_8(VAR_21, VAR_1,
      VAR_7);
 VAR_24 = FUNC_8(VAR_21, VAR_1, VAR_11);
 VAR_22 = FUNC_8(VAR_21, VAR_1, VAR_6);
 VAR_25 = FUNC_8(VAR_21, VAR_1, VAR_12);


 if (VAR_23 & VAR_8) {
  VAR_26 = VAR_22 & VAR_10;
  VAR_27 = VAR_23 & VAR_9;

  FUNC_2(VAR_21->dev,
    "ipc: firmware response, msg:0x%x, msg_ext:0x%x\n",
    VAR_26, VAR_27);


  FUNC_9(VAR_21, VAR_1,
     VAR_3,
     VAR_5, 0);
  FUNC_12(&VAR_21->ipc_lock);


  if (FUNC_6(VAR_26)) {
   FUNC_4(VAR_21);
   FUNC_11(VAR_21, VAR_26);
  }


  if (VAR_21->code_loading) {
   VAR_21->code_loading = 0;
   FUNC_14(&VAR_21->waitq);
  }


  FUNC_3(VAR_21);

  FUNC_13(&VAR_21->ipc_lock);

  VAR_28 = 1;
 }


 if (VAR_24 & VAR_14) {
  VAR_26 = VAR_24 & VAR_15;
  VAR_27 = VAR_25 & VAR_13;

  FUNC_2(VAR_21->dev,
    "ipc: firmware initiated, msg:0x%x, msg_ext:0x%x\n",
    VAR_26, VAR_27);


  FUNC_9(VAR_21, VAR_1,
     VAR_3,
     VAR_4, 0);


  if ((VAR_24 & VAR_18) == VAR_17) {

   FUNC_7(VAR_21, FUNC_0(VAR_27));
  } else {

   FUNC_10(VAR_21);
  }

  FUNC_5(VAR_21);

  VAR_28 = 1;
 }

 if (!VAR_28) {



  FUNC_1(VAR_21->dev,
        "nothing to do in IPC IRQ thread\n");
 }


 FUNC_9(VAR_21, VAR_1, VAR_2,
    VAR_0, VAR_0);

 return VAR_16;
}
