
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zx_spdif_info {scalar_t__ reg_base; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;






 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct zx_spdif_info* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_3, int VAR_4,
       struct snd_soc_dai *VAR_5)
{
 u32 VAR_6;
 struct zx_spdif_info *VAR_7 = FUNC_0(VAR_5->dev);
 int VAR_8 = 0;

 switch (VAR_4) {
 case 130:
  VAR_6 = FUNC_1(VAR_7->reg_base + VAR_1);
  VAR_6 |= VAR_2;
  FUNC_2(VAR_6, VAR_7->reg_base + VAR_1);

 case 131:
 case 132:
  FUNC_3(VAR_7->reg_base, 1);
  break;

 case 129:
 case 128:
 case 133:
  FUNC_3(VAR_7->reg_base, 0);
  break;

 default:
  VAR_8 = -VAR_0;
  break;
 }

 return VAR_8;
}
