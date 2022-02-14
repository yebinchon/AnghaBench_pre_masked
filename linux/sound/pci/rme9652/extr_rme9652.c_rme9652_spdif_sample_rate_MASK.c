
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rme9652 {int hw_rev; int card_name; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct snd_rme9652*,int ) ;
 int FUNC_3 (struct snd_rme9652*,int) ;

__attribute__((used)) static inline int FUNC_4(struct snd_rme9652 *VAR_3)
{
 unsigned int VAR_4;

 if (FUNC_2(VAR_3, VAR_2) & VAR_0) {
  return -1;
 }

 if (VAR_3->hw_rev == 15) {

  int VAR_5, VAR_6, VAR_7;

  VAR_5 = FUNC_3 (VAR_3, 30);

  if (VAR_5 != 0)
   VAR_6 = 48000 * 64 / VAR_5;
  else
   VAR_6 = 0;

  if (VAR_6 > 30400 && VAR_6 < 33600) VAR_7 = 32000;
  else if (VAR_6 > 41900 && VAR_6 < 46000) VAR_7 = 44100;
  else if (VAR_6 > 46000 && VAR_6 < 50400) VAR_7 = 48000;
  else if (VAR_6 > 60800 && VAR_6 < 67200) VAR_7 = 64000;
  else if (VAR_6 > 83700 && VAR_6 < 92000) VAR_7 = 88200;
  else if (VAR_6 > 92000 && VAR_6 < 100000) VAR_7 = 96000;
  else VAR_7 = 0;
  return VAR_7;
 }

 VAR_4 = FUNC_2(VAR_3, VAR_2) & VAR_1;

 switch (FUNC_1(VAR_4)) {
 case 0x7:
  return 32000;
  break;

 case 0x6:
  return 44100;
  break;

 case 0x5:
  return 48000;
  break;

 case 0x4:
  return 88200;
  break;

 case 0x3:
  return 96000;
  break;

 case 0x0:
  return 64000;
  break;

 default:
  FUNC_0(VAR_3->card->dev,
   "%s: unknown S/PDIF input rate (bits = 0x%x)\n",
      VAR_3->card_name, VAR_4);
  return 0;
  break;
 }
}
