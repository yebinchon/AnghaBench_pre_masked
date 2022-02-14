
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai_driver {int dummy; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct TYPE_3__ {int name; } ;
struct au1xpsc_audio_data {int cfg; TYPE_1__ dai_drv; int * dmaids; int mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct au1xpsc_audio_data*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct au1xpsc_audio_data*) ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct au1xpsc_audio_data*) ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_4 (int ) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (unsigned long,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int *) ;
 struct au1xpsc_audio_data* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (int *,int *,TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*,int *,int) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int) ;
 int FUNC_13 (struct platform_device*,struct au1xpsc_audio_data*) ;
 int FUNC_14 () ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_13)
{
 struct resource *VAR_14;
 unsigned long VAR_15;
 struct au1xpsc_audio_data *VAR_16;

 VAR_16 = FUNC_8(&VAR_13->dev, sizeof(struct au1xpsc_audio_data),
     VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->mmio = FUNC_9(VAR_13, 0);
 if (FUNC_1(VAR_16->mmio))
  return FUNC_4(VAR_16->mmio);

 VAR_14 = FUNC_12(VAR_13, VAR_3, 0);
 if (!VAR_14)
  return -VAR_0;
 VAR_16->dmaids[VAR_10] = VAR_14->start;

 VAR_14 = FUNC_12(VAR_13, VAR_3, 1);
 if (!VAR_14)
  return -VAR_0;
 VAR_16->dmaids[VAR_9] = VAR_14->start;




 VAR_15 = FUNC_5(FUNC_3(VAR_16)) & VAR_7;
 FUNC_6(VAR_4, FUNC_2(VAR_16));
 FUNC_14();
 FUNC_6(VAR_8 | VAR_15, FUNC_3(VAR_16));
 FUNC_6(0, FUNC_0(VAR_16));
 FUNC_14();


 VAR_16->cfg |= VAR_5 | VAR_6;







 FUNC_11(&VAR_16->dai_drv, &VAR_12,
        sizeof(struct snd_soc_dai_driver));
 VAR_16->dai_drv.name = FUNC_7(&VAR_13->dev);

 FUNC_13(VAR_13, VAR_16);

 return FUNC_10(&VAR_13->dev,
    &VAR_11, &VAR_16->dai_drv, 1);
}
