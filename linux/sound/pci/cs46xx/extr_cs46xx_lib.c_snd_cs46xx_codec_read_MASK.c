
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct snd_cs46xx {int (* active_ctrl ) (struct snd_cs46xx*,int) ;TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int ,char*,unsigned short,int,int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ,char*,unsigned short) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct snd_cs46xx*,scalar_t__) ;
 int FUNC_6 (struct snd_cs46xx*,scalar_t__,unsigned short) ;
 int FUNC_7 (struct snd_cs46xx*,int) ;
 int FUNC_8 (struct snd_cs46xx*,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static unsigned short FUNC_10(struct snd_cs46xx *VAR_15,
         unsigned short VAR_16,
         int VAR_17)
{
 int VAR_18;
 unsigned short VAR_19,VAR_20;
 u32 VAR_21 = 0;

 if (FUNC_4(VAR_17 != VAR_12 &&
         VAR_17 != VAR_13))
  return 0xffff;

 VAR_15->active_ctrl(VAR_15, 1);

 if (VAR_17 == VAR_13)
  VAR_21 = VAR_14;
 FUNC_5(VAR_15, VAR_10 + VAR_21);

 VAR_20 = FUNC_5(VAR_15, VAR_9);
 if ((VAR_20 & VAR_5) == 0) {
  FUNC_2(VAR_15->card->dev, "ACCTL_VFRM not set 0x%x\n", VAR_20);
  FUNC_6(VAR_15, VAR_9, (VAR_20 & (~VAR_2)) | VAR_5 );
  FUNC_3(50);
  VAR_20 = FUNC_5(VAR_15, VAR_9 + VAR_21);
  FUNC_6(VAR_15, VAR_9, VAR_20 | VAR_2 | VAR_5 );

 }
 FUNC_6(VAR_15, VAR_7, VAR_16);
 FUNC_6(VAR_15, VAR_8, 0);
 if (VAR_17 == VAR_12) {
  FUNC_6(VAR_15, VAR_9, VAR_0 |
       VAR_5 | VAR_2 |
       VAR_3);
  FUNC_6(VAR_15, VAR_9, VAR_1 | VAR_0 |
       VAR_5 | VAR_2 |
       VAR_3);
 } else {
  FUNC_6(VAR_15, VAR_9, VAR_1 | VAR_4 |
       VAR_0 | VAR_5 | VAR_2 |
       VAR_3);
 }




 for (VAR_18 = 0; VAR_18 < 1000; VAR_18++) {



  FUNC_9(10);




  if (!(FUNC_5(VAR_15, VAR_9) & VAR_1))
   goto ok1;
 }

 FUNC_1(VAR_15->card->dev,
  "AC'97 read problem (ACCTL_DCV), reg = 0x%x\n", VAR_16);
 VAR_19 = 0xffff;
 goto end;

 ok1:



 for (VAR_18 = 0; VAR_18 < 100; VAR_18++) {





  if (FUNC_5(VAR_15, VAR_11 + VAR_21) & VAR_6)
   goto ok2;
  FUNC_9(10);
 }

 FUNC_1(VAR_15->card->dev,
  "AC'97 read problem (ACSTS_VSTS), codec_index %d, reg = 0x%x\n",
  VAR_17, VAR_16);
 VAR_19 = 0xffff;
 goto end;

 ok2:
 VAR_19 = FUNC_5(VAR_15, VAR_10 + VAR_21);
 end:
 VAR_15->active_ctrl(VAR_15, -1);
 return VAR_19;
}
