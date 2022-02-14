
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card_sb16 {int fm_res; } ;
struct snd_card {struct snd_card_sb16* private_data; } ;
struct device {int dummy; } ;


 void** VAR_0 ;
 int FUNC_0 (struct device*,struct snd_card*) ;
 void** VAR_1 ;
 void** VAR_2 ;
 int FUNC_1 (int,int,char*) ;
 int FUNC_2 (struct snd_card*) ;
 int FUNC_3 (struct device*,int,struct snd_card**) ;
 int FUNC_4 (struct snd_card*,int) ;

__attribute__((used)) static int FUNC_5(int VAR_3, struct device *VAR_4)
{
 struct snd_card_sb16 *VAR_5;
 struct snd_card *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_4, VAR_3, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5 = VAR_6->private_data;

 VAR_1[VAR_3] = VAR_2[VAR_3];

 VAR_5->fm_res = FUNC_1(0x388, 4, "SoundBlaster FM");





 if ((VAR_7 = FUNC_4(VAR_6, VAR_3)) < 0) {
  FUNC_2(VAR_6);
  return VAR_7;
 }
 FUNC_0(VAR_4, VAR_6);
 return 0;
}
