
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai_driver {int dummy; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct TYPE_3__ {int name; } ;
struct au1xpsc_audio_data {int cfg; TYPE_1__ dai_drv; int * dmaids; int mmio; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct au1xpsc_audio_data*) ;
 unsigned long VAR_7 ;
 int FUNC_2 (struct au1xpsc_audio_data*) ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_3 (int ) ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (unsigned long,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 struct au1xpsc_audio_data* VAR_14 ;
 int FUNC_6 (int *) ;
 struct au1xpsc_audio_data* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (TYPE_1__*,int *,int) ;
 int FUNC_10 (int *) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int) ;
 int FUNC_12 (struct platform_device*,struct au1xpsc_audio_data*) ;
 int VAR_15 ;
 int FUNC_13 (int *,int *,TYPE_1__*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_16)
{
 int VAR_17;
 struct resource *VAR_18;
 unsigned long VAR_19;
 struct au1xpsc_audio_data *VAR_20;

 VAR_20 = FUNC_7(&VAR_16->dev, sizeof(struct au1xpsc_audio_data),
     VAR_2);
 if (!VAR_20)
  return -VAR_1;

 FUNC_10(&VAR_20->lock);

 VAR_20->mmio = FUNC_8(VAR_16, 0);
 if (FUNC_0(VAR_20->mmio))
  return FUNC_3(VAR_20->mmio);

 VAR_18 = FUNC_11(VAR_16, VAR_3, 0);
 if (!VAR_18)
  return -VAR_0;
 VAR_20->dmaids[VAR_11] = VAR_18->start;

 VAR_18 = FUNC_11(VAR_16, VAR_3, 1);
 if (!VAR_18)
  return -VAR_0;
 VAR_20->dmaids[VAR_10] = VAR_18->start;


 VAR_20->cfg = VAR_5 | VAR_6 |
    VAR_4;


 VAR_19 = FUNC_4(FUNC_2(VAR_20)) & VAR_8;
 FUNC_5(VAR_7, FUNC_1(VAR_20));
 FUNC_15();
 FUNC_5(0, FUNC_2(VAR_20));
 FUNC_15();
 FUNC_5(VAR_9 | VAR_19, FUNC_2(VAR_20));
 FUNC_15();


 FUNC_9(&VAR_20->dai_drv, &VAR_13,
        sizeof(struct snd_soc_dai_driver));
 VAR_20->dai_drv.name = FUNC_6(&VAR_16->dev);

 FUNC_12(VAR_16, VAR_20);

 VAR_17 = FUNC_14(&VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_13(&VAR_16->dev, &VAR_12,
      &VAR_20->dai_drv, 1);
 if (VAR_17)
  return VAR_17;

 VAR_14 = VAR_20;
 return 0;
}
