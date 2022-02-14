
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_sof_dev {int ipc_lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct snd_sof_dev*) ;
 int FUNC_2 (struct snd_sof_dev*) ;
 int FUNC_3 (struct snd_sof_dev*) ;
 int FUNC_4 (struct snd_sof_dev*,scalar_t__) ;
 int FUNC_5 (struct snd_sof_dev*,int ,int ) ;
 int FUNC_6 (struct snd_sof_dev*,int ,int ) ;
 int FUNC_7 (struct snd_sof_dev*,int ,int ,int,int) ;
 int FUNC_8 (struct snd_sof_dev*) ;
 int FUNC_9 (struct snd_sof_dev*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_12, void *VAR_13)
{
 struct snd_sof_dev *VAR_14 = VAR_13;
 u32 VAR_15, VAR_16, VAR_17;

 VAR_17 = FUNC_6(VAR_14, VAR_0, VAR_3);
 VAR_15 = FUNC_5(VAR_14, VAR_0, VAR_8);


 if (VAR_15 & VAR_9 &&
     !(VAR_17 & VAR_5)) {

  FUNC_7(VAR_14, VAR_0,
       VAR_3, VAR_5,
       VAR_5);

  FUNC_10(&VAR_14->ipc_lock);
  FUNC_2(VAR_14);
  FUNC_9(VAR_14, VAR_15);

  FUNC_1(VAR_14);

  FUNC_11(&VAR_14->ipc_lock);
 }

 VAR_16 = FUNC_5(VAR_14, VAR_0, VAR_6);


 if (VAR_16 & VAR_7 &&
     !(VAR_17 & VAR_4)) {

  FUNC_7(VAR_14, VAR_0,
       VAR_3, VAR_4,
       VAR_4);


  if ((VAR_16 & VAR_11) == VAR_10) {
   FUNC_4(VAR_14, FUNC_0(VAR_15) +
       VAR_2);
  } else {
   FUNC_8(VAR_14);
  }

  FUNC_3(VAR_14);
 }

 return VAR_1;
}
