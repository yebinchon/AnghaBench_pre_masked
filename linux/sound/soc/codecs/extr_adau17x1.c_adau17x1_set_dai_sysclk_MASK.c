
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_dai {int component; } ;
struct adau {int clk_src; unsigned int sysclk; int mclk; } ;





 int VAR_0 ;
 int VAR_1 ;
 struct snd_soc_dapm_context* FUNC_0 (int ) ;
 struct adau* FUNC_1 (int ) ;
 int FUNC_2 (struct snd_soc_dapm_context*,int *,int) ;
 int FUNC_3 (struct snd_soc_dapm_context*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_2,
  int VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct snd_soc_dapm_context *VAR_6 = FUNC_0(VAR_2->component);
 struct adau *VAR_7 = FUNC_1(VAR_2->component);
 bool VAR_8;
 bool VAR_9;

 switch (VAR_3) {
 case 130:
  VAR_8 = 0;
  break;
 case 128:
  if (!VAR_7->mclk)
   return -VAR_0;

 case 129:
  VAR_8 = 1;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_7->clk_src) {
 case 130:
  VAR_9 = 0;
  break;
 case 129:
 case 128:
  VAR_9 = 1;
  break;
 default:
  return -VAR_0;
 }

 VAR_7->sysclk = VAR_4;

 if (VAR_8 != VAR_9) {
  if (VAR_8) {
   FUNC_2(VAR_6,
    &VAR_1, 1);
  } else {
   FUNC_3(VAR_6,
    &VAR_1, 1);
  }
 }

 VAR_7->clk_src = VAR_3;

 return 0;
}
