
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
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_cs46xx*,int ) ;
 int FUNC_2 (struct snd_cs46xx*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct snd_cs46xx *VAR_5)
{
 int VAR_6;




 FUNC_2(VAR_5, VAR_0, 0xadf);




 FUNC_2(VAR_5, VAR_1, VAR_3 | VAR_4 | VAR_2);




 for (VAR_6 = 0; VAR_6 < 25; VAR_6++) {
  FUNC_3(50);
  if (!(FUNC_1(VAR_5, VAR_1) & VAR_4))
   break;
 }

 if (FUNC_1(VAR_5, VAR_1) & VAR_4)
  FUNC_0(VAR_5->card->dev, "SPCR_RUNFR never reset\n");
}
