
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int ctl; } ;
struct snd_cs46xx {unsigned int play_ctl; TYPE_2__ capt; TYPE_1__* card; int * modules; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_cs46xx*,int ) ;
 scalar_t__ FUNC_1 (struct snd_cs46xx*) ;
 int FUNC_2 (struct snd_cs46xx*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct snd_cs46xx*,...) ;
 int FUNC_5 (int) ;
 int * VAR_6 ;
 int FUNC_6 (struct snd_cs46xx*) ;
 unsigned int FUNC_7 (struct snd_cs46xx*,int ) ;
 int FUNC_8 (struct snd_cs46xx*,int ,int) ;
 int FUNC_9 (struct snd_cs46xx*) ;
 int FUNC_10 (struct snd_cs46xx*) ;
 int FUNC_11 (struct snd_cs46xx*,int) ;
 int FUNC_12 (struct snd_cs46xx*,int) ;

int FUNC_13(struct snd_cs46xx *VAR_7)
{
 unsigned int VAR_8;



 int VAR_9;




 FUNC_10(VAR_7);
 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_9 = FUNC_6(VAR_7);
 if (VAR_9 < 0) {
  FUNC_3(VAR_7->card->dev, "image download error\n");
  return VAR_9;
 }




 VAR_8 = FUNC_7(VAR_7, VAR_2);
 VAR_7->play_ctl = VAR_8 & 0xffff0000;
 FUNC_8(VAR_7, VAR_2, VAR_8 & 0x0000ffff);





 VAR_8 = FUNC_7(VAR_7, VAR_0);
 VAR_7->capt.ctl = VAR_8 & 0x0000ffff;
 FUNC_8(VAR_7, VAR_0, VAR_8 & 0xffff0000);

 FUNC_5(5);

 FUNC_12(VAR_7, 8000);
 FUNC_11(VAR_7, 8000);

 FUNC_9(VAR_7);

 FUNC_2(VAR_7);



 FUNC_8(VAR_7, VAR_3, 0x80008000);
 FUNC_8(VAR_7, VAR_1, 0x80008000);


 return 0;
}
