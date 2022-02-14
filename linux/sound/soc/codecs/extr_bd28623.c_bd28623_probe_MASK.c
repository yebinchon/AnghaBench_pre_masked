
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct bd28623_priv {struct device* dev; void* mute_gpio; void* reset_gpio; TYPE_1__* supplies; } ;
struct TYPE_3__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int * VAR_3 ;
 int FUNC_3 (struct device*,char*,int) ;
 void* FUNC_4 (struct device*,char*,int ) ;
 struct bd28623_priv* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int,TYPE_1__*) ;
 int FUNC_7 (struct device*,int *,int *,int) ;
 int FUNC_8 (struct platform_device*,struct bd28623_priv*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_6)
{
 struct bd28623_priv *VAR_7;
 struct device *VAR_8 = &VAR_6->dev;
 int VAR_9, VAR_10;

 VAR_7 = FUNC_5(&VAR_6->dev, sizeof(struct bd28623_priv), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7->supplies); VAR_9++)
  VAR_7->supplies[VAR_9].supply = VAR_3[VAR_9];

 VAR_10 = FUNC_6(VAR_8, FUNC_0(VAR_7->supplies),
          VAR_7->supplies);
 if (VAR_10) {
  FUNC_3(VAR_8, "Failed to get supplies: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_7->reset_gpio = FUNC_4(VAR_8, "reset",
       VAR_2);
 if (FUNC_1(VAR_7->reset_gpio)) {
  FUNC_3(VAR_8, "Failed to request reset_gpio: %ld\n",
   FUNC_2(VAR_7->reset_gpio));
  return FUNC_2(VAR_7->reset_gpio);
 }

 VAR_7->mute_gpio = FUNC_4(VAR_8, "mute",
      VAR_2);
 if (FUNC_1(VAR_7->mute_gpio)) {
  FUNC_3(VAR_8, "Failed to request mute_gpio: %ld\n",
   FUNC_2(VAR_7->mute_gpio));
  return FUNC_2(VAR_7->mute_gpio);
 }

 FUNC_8(VAR_6, VAR_7);
 VAR_7->dev = VAR_8;

 return FUNC_7(VAR_8, &VAR_4,
            &VAR_5, 1);
}
