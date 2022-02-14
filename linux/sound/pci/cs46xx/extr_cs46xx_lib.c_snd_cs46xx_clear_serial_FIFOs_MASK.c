
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_cs46xx {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_0 (struct snd_cs46xx*,int) ;
 int FUNC_1 (int ,char*,int) ;
 unsigned int FUNC_2 (struct snd_cs46xx*,int ) ;
 int FUNC_3 (struct snd_cs46xx*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct snd_cs46xx *VAR_6)
{
 int VAR_7, VAR_8 = 0;
 unsigned int VAR_9;





 VAR_9 = FUNC_2(VAR_6, VAR_0);
 if (!(VAR_9 & VAR_4)) {
  FUNC_3(VAR_6, VAR_0, VAR_9 | VAR_4);
  VAR_8 = 1;
 }






 FUNC_3(VAR_6, VAR_3, 0);




 for (VAR_7 = 0; VAR_7 < 0xFF; VAR_7++) {



  if (FUNC_0(VAR_6,1)) {
   FUNC_1(VAR_6->card->dev,
    "failed waiting for FIFO at addr (%02X)\n",
    VAR_7);

   if (VAR_8)
    FUNC_3(VAR_6, VAR_0, VAR_9);

   break;
  }



  FUNC_3(VAR_6, VAR_1, VAR_7);



  FUNC_3(VAR_6, VAR_2, VAR_5);
 }




 if (VAR_8)
  FUNC_3(VAR_6, VAR_0, VAR_9);
}
