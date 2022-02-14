
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_driver {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct axg_tdm_iface {int * mclk; int * lrclk; int * sclk; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_3 (struct device*,char*,int) ;
 void* FUNC_4 (struct device*,char*) ;
 struct snd_soc_dai_driver* FUNC_5 (struct device*,int,int,int ) ;
 struct axg_tdm_iface* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int *,struct snd_soc_dai_driver*,int) ;
 int FUNC_8 (struct snd_soc_dai_driver*,int *,int) ;
 int FUNC_9 (struct platform_device*,struct axg_tdm_iface*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct snd_soc_dai_driver *VAR_8;
 struct axg_tdm_iface *VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = FUNC_6(VAR_7, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_1;
 FUNC_9(VAR_6, VAR_9);






 VAR_8 = FUNC_5(VAR_7, FUNC_0(VAR_5),
          sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_1;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); VAR_11++)
  FUNC_8(&VAR_8[VAR_11], &VAR_5[VAR_11],
         sizeof(*VAR_8));


 VAR_9->sclk = FUNC_4(VAR_7, "sclk");
 if (FUNC_1(VAR_9->sclk)) {
  VAR_10 = FUNC_2(VAR_9->sclk);
  if (VAR_10 != -VAR_2)
   FUNC_3(VAR_7, "failed to get sclk: %d\n", VAR_10);
  return VAR_10;
 }


 VAR_9->lrclk = FUNC_4(VAR_7, "lrclk");
 if (FUNC_1(VAR_9->lrclk)) {
  VAR_10 = FUNC_2(VAR_9->lrclk);
  if (VAR_10 != -VAR_2)
   FUNC_3(VAR_7, "failed to get lrclk: %d\n", VAR_10);
  return VAR_10;
 }







 VAR_9->mclk = FUNC_4(VAR_7, "mclk");
 if (FUNC_1(VAR_9->mclk)) {
  VAR_10 = FUNC_2(VAR_9->mclk);
  if (VAR_10 == -VAR_0) {
   VAR_9->mclk = ((void*)0);
  } else {
   if (VAR_10 != -VAR_2)
    FUNC_3(VAR_7, "failed to get mclk: %d\n", VAR_10);
   return VAR_10;
  }
 }

 return FUNC_7(VAR_7,
     &VAR_4, VAR_8,
     FUNC_0(VAR_5));
}
