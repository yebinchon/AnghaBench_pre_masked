
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct snd_soc_component {int dev; } ;
struct regulator {int dummy; } ;
struct da7218_priv {TYPE_1__* supplies; } ;
struct TYPE_3__ {struct regulator* consumer; int supply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int,TYPE_1__*) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (struct regulator*) ;
 struct da7218_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_8)
{
 struct da7218_priv *VAR_9 = FUNC_5(VAR_8);
 struct regulator *VAR_10;
 u8 VAR_11 = VAR_2;
 int VAR_12, VAR_13;


 for (VAR_12 = 0; VAR_12 < VAR_3; ++VAR_12)
  VAR_9->supplies[VAR_12].supply = VAR_7[VAR_12];

 VAR_13 = FUNC_2(VAR_8->dev, VAR_3,
          VAR_9->supplies);
 if (VAR_13) {
  FUNC_0(VAR_8->dev, "Failed to get supplies\n");
  return VAR_13;
 }


 VAR_10 = VAR_9->supplies[VAR_4].consumer;
 VAR_13 = FUNC_4(VAR_10);
 if (VAR_13 < 1500000)
  FUNC_1(VAR_8->dev, "Invalid VDDIO voltage\n");
 else if (VAR_13 < 2500000)
  VAR_11 = VAR_1;


 VAR_13 = FUNC_3(VAR_3, VAR_9->supplies);
 if (VAR_13) {
  FUNC_0(VAR_8->dev, "Failed to enable supplies\n");
  return VAR_13;
 }


 FUNC_6(VAR_8, VAR_5, VAR_6);


 FUNC_6(VAR_8, VAR_0, VAR_11);

 return 0;
}
