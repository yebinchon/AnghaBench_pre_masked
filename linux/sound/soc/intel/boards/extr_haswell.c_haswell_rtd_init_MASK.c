
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_pdata {struct sst_hsw* dsp; } ;
struct sst_hsw {int dummy; } ;
struct snd_soc_pcm_runtime {int dev; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct sst_pdata* FUNC_1 (int ) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_3 (struct sst_hsw*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_pcm_runtime *VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_2(VAR_4, VAR_0);
 struct sst_pdata *VAR_6 = FUNC_1(VAR_5->dev);
 struct sst_hsw *VAR_7 = VAR_6->dsp;
 int VAR_8;


 VAR_8 = FUNC_3(VAR_7, VAR_3,
  VAR_2,
  VAR_1, 9);
 if (VAR_8 < 0) {
  FUNC_0(VAR_4->dev, "failed to set device config\n");
  return VAR_8;
 }

 return 0;
}
