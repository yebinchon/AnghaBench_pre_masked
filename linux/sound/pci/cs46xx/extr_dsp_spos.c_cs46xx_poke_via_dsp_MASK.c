
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_cs46xx {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_cs46xx*,int) ;
 int FUNC_2 (struct snd_cs46xx*,int,int) ;
 int FUNC_3 (int) ;

int FUNC_4 (struct snd_cs46xx *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 int VAR_7;



 if (VAR_4 < 0x8000 || VAR_4 >= 0x9000)
  return -VAR_1;


 VAR_6 = ( VAR_4 << 16 ) | ( VAR_4 & 0x0000FFFF);

 FUNC_2(VAR_3,( VAR_2 << 2), VAR_6);
 FUNC_2(VAR_3,((VAR_2 + 1) << 2), VAR_5);
 FUNC_2(VAR_3,((VAR_2 + 2) << 2), VAR_5);


 FUNC_2(VAR_3,((VAR_2 + 6) << 2), VAR_2 << 0x10);


 for (VAR_7=0; VAR_7<25; VAR_7++) {
  FUNC_3(125);

  VAR_6 = FUNC_1(VAR_3,((VAR_2 + 6) << 2));
  if (VAR_6 == 0x00000000)
   break;
 }

 if (VAR_7 == 25) {
  FUNC_0(VAR_3->card->dev,
   "dsp_spos: SPIOWriteTask not responding\n");
  return -VAR_0;
 }

 return 0;
}
