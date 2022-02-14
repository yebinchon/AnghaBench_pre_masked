
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_sof_dev {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static inline u32 FUNC_4(struct snd_sof_dev *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 8000:
  return FUNC_1(6);
 case 9600:
  return FUNC_1(5);
 case 11025:
  return FUNC_0(1) | FUNC_1(4);
 case 16000:
  return FUNC_1(3);
 case 22050:
  return FUNC_0(1) | FUNC_1(2);
 case 32000:
  return FUNC_1(3) | FUNC_2(2);
 case 44100:
  return FUNC_0(1);
 case 48000:
  return 0;
 case 88200:
  return FUNC_0(1) | FUNC_2(2);
 case 96000:
  return FUNC_2(2);
 case 176400:
  return FUNC_0(1) | FUNC_2(4);
 case 192000:
  return FUNC_2(4);
 default:
  FUNC_3(VAR_0->dev, "can't find div rate %d using 48kHz\n",
    VAR_1);
  return 0;
 }
}
