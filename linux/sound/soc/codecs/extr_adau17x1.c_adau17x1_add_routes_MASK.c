
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct adau {scalar_t__ clk_src; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_1 (struct adau*) ;
 int * VAR_4 ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_soc_component*) ;
 struct adau* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_dapm_context*,int *,int) ;

int FUNC_5(struct snd_soc_component *VAR_5)
{
 struct snd_soc_dapm_context *VAR_6 = FUNC_2(VAR_5);
 struct adau *VAR_7 = FUNC_3(VAR_5);
 int VAR_8;

 VAR_8 = FUNC_4(VAR_6, VAR_2,
  FUNC_0(VAR_2));
 if (VAR_8)
  return VAR_8;

 if (FUNC_1(VAR_7)) {
  VAR_8 = FUNC_4(VAR_6, VAR_3,
   FUNC_0(VAR_3));
 } else {
  VAR_8 = FUNC_4(VAR_6, VAR_4,
   FUNC_0(VAR_4));
 }

 if (VAR_7->clk_src != VAR_0)
  FUNC_4(VAR_6, &VAR_1, 1);

 return VAR_8;
}
