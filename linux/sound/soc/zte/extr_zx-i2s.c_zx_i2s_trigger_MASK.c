
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_i2s_info {int reg_base; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;






 struct zx_i2s_info* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2, int VAR_3,
     struct snd_soc_dai *VAR_4)
{
 struct zx_i2s_info *VAR_5 = FUNC_0(VAR_4->dev);
 int VAR_6 = (VAR_2->stream == VAR_1);
 int VAR_7 = 0;

 switch (VAR_3) {
 case 130:
  if (VAR_6)
   FUNC_1(VAR_5->reg_base, 1);
  else
   FUNC_3(VAR_5->reg_base, 1);

 case 131:
 case 132:
  if (VAR_6)
   FUNC_2(VAR_5->reg_base, 1);
  else
   FUNC_4(VAR_5->reg_base, 1);
  break;

 case 129:
  if (VAR_6)
   FUNC_1(VAR_5->reg_base, 0);
  else
   FUNC_3(VAR_5->reg_base, 0);

 case 128:
 case 133:
  if (VAR_6)
   FUNC_2(VAR_5->reg_base, 0);
  else
   FUNC_4(VAR_5->reg_base, 0);
  break;

 default:
  VAR_7 = -VAR_0;
  break;
 }

 return VAR_7;
}
