
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wm8770_priv {int regmap; TYPE_1__* disable_nb; TYPE_2__* supplies; } ;
struct spi_device {int dev; } ;
struct TYPE_5__ {int consumer; int supply; } ;
struct TYPE_4__ {int notifier_call; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 struct wm8770_priv* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct spi_device*,int *) ;
 int FUNC_6 (int *,int,TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int *,int *,int *,int) ;
 int VAR_2 ;
 int FUNC_9 (struct spi_device*,struct wm8770_priv*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_9)
{
 struct wm8770_priv *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_4(&VAR_9->dev, sizeof(struct wm8770_priv),
         VAR_1);
 if (!VAR_10)
  return -VAR_0;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_10->supplies); VAR_12++)
  VAR_10->supplies[VAR_12].supply = VAR_8[VAR_12];

 VAR_11 = FUNC_6(&VAR_9->dev, FUNC_0(VAR_10->supplies),
          VAR_10->supplies);
 if (VAR_11) {
  FUNC_3(&VAR_9->dev, "Failed to request supplies: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_10->disable_nb[0].notifier_call = VAR_5;
 VAR_10->disable_nb[1].notifier_call = VAR_6;
 VAR_10->disable_nb[2].notifier_call = VAR_7;


 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_10->supplies); VAR_12++) {
  VAR_11 = FUNC_7(
      VAR_10->supplies[VAR_12].consumer,
      &VAR_10->disable_nb[VAR_12]);
  if (VAR_11) {
   FUNC_3(&VAR_9->dev,
    "Failed to register regulator notifier: %d\n",
    VAR_11);
  }
 }

 VAR_10->regmap = FUNC_5(VAR_9, &VAR_4);
 if (FUNC_1(VAR_10->regmap))
  return FUNC_2(VAR_10->regmap);

 FUNC_9(VAR_9, VAR_10);

 VAR_11 = FUNC_8(&VAR_9->dev,
         &VAR_2, &VAR_3, 1);

 return VAR_11;
}
