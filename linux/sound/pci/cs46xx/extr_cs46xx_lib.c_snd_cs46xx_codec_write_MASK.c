
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_cs46xx {int (* active_ctrl ) (struct snd_cs46xx*,int) ;TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,int,unsigned short,unsigned short) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned short FUNC_2 (struct snd_cs46xx*,int ) ;
 int FUNC_3 (struct snd_cs46xx*,int ,unsigned short) ;
 int FUNC_4 (struct snd_cs46xx*,int) ;
 int FUNC_5 (struct snd_cs46xx*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct snd_cs46xx *VAR_10,
       unsigned short VAR_11,
       unsigned short VAR_12,
       int VAR_13)
{
 int VAR_14;

 if (FUNC_1(VAR_13 != VAR_8 &&
         VAR_13 != VAR_9))
  return;

 VAR_10->active_ctrl(VAR_10, 1);
 FUNC_3(VAR_10, VAR_5 , VAR_11);
 FUNC_3(VAR_10, VAR_6 , VAR_12);
 FUNC_2(VAR_10, VAR_7);

 if (VAR_13 == VAR_8) {
  FUNC_3(VAR_10, VAR_7, VAR_4 |
       VAR_1 | VAR_2);
  FUNC_3(VAR_10, VAR_7, VAR_0 | VAR_4 |
       VAR_1 | VAR_2);
 } else {
  FUNC_3(VAR_10, VAR_7, VAR_0 | VAR_3 |
       VAR_4 | VAR_1 | VAR_2);
 }

 for (VAR_14 = 0; VAR_14 < 4000; VAR_14++) {



  FUNC_6(10);




  if (!(FUNC_2(VAR_10, VAR_7) & VAR_0)) {
   goto end;
  }
 }
 FUNC_0(VAR_10->card->dev,
  "AC'97 write problem, codec_index = %d, reg = 0x%x, val = 0x%x\n",
  VAR_13, VAR_11, VAR_12);
 end:
 VAR_10->active_ctrl(VAR_10, -1);
}
