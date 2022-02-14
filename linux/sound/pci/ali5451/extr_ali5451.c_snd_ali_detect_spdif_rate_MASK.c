
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct snd_ali {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct snd_ali*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct snd_ali*,int) ;

__attribute__((used)) static void FUNC_7(struct snd_ali *VAR_2)
{
 u16 VAR_3;
 u16 VAR_4 = 0;
 u8 VAR_5, VAR_6 = 0, VAR_7;

 VAR_5 = FUNC_2(FUNC_0(VAR_2, VAR_1 + 1));
 VAR_5 |= 0x1F;
 FUNC_4(VAR_5, FUNC_0(VAR_2, VAR_1 + 1));

 while ((VAR_6 < 0x0b || VAR_6 > 0x0e) && VAR_6 != 0x12 && VAR_4 <= 50000) {
  VAR_4 ++;
  FUNC_6(VAR_2, 6);
  VAR_5 = FUNC_2(FUNC_0(VAR_2, VAR_1 + 1));
  VAR_6 = VAR_5 & 0x1F;
 }

 if (VAR_4 > 50000) {
  FUNC_1(VAR_2->card->dev, "ali_detect_spdif_rate: timeout!\n");
  return;
 }

 for (VAR_4 = 0; VAR_4 <= 50000; VAR_4++) {
  FUNC_6(VAR_2, 6);
  VAR_5 = FUNC_2(FUNC_0(VAR_2,VAR_1 + 1));
  VAR_7 = VAR_5 & 0x1F;
  if (VAR_7 != VAR_6)
   VAR_6 = VAR_7;
  else
   break;
 }

 if (VAR_4 > 50000) {
  FUNC_1(VAR_2->card->dev, "ali_detect_spdif_rate: timeout!\n");
  return;
 }

 if (VAR_7 >= 0x0b && VAR_7 <= 0x0e) {
  VAR_3 = FUNC_3(FUNC_0(VAR_2, VAR_1 + 2));
  VAR_3 &= 0xe0f0;
  VAR_3 |= (0x09 << 8) | 0x05;
  FUNC_5(VAR_3, FUNC_0(VAR_2, VAR_1 + 2));

  VAR_5 = FUNC_2(FUNC_0(VAR_2, VAR_0 + 3)) & 0xf0;
  FUNC_4(VAR_5 | 0x02, FUNC_0(VAR_2, VAR_0 + 3));
 } else if (VAR_7 == 0x12) {
  VAR_3 = FUNC_3(FUNC_0(VAR_2, VAR_1 + 2));
  VAR_3 &= 0xe0f0;
  VAR_3 |= (0x0e << 8) | 0x08;
  FUNC_5(VAR_3, FUNC_0(VAR_2, VAR_1 + 2));

  VAR_5 = FUNC_2(FUNC_0(VAR_2,VAR_0 + 3)) & 0xf0;
  FUNC_4(VAR_5 | 0x03, FUNC_0(VAR_2, VAR_0 + 3));
 }
}
