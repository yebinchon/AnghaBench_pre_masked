
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct pcm186x_priv {TYPE_1__* supplies; struct regmap* regmap; } ;
struct device {int dummy; } ;
typedef enum pcm186x_type { ____Placeholder_pcm186x_type } pcm186x_type ;
struct TYPE_5__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,struct pcm186x_priv*) ;
 struct pcm186x_priv* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int,TYPE_1__*) ;
 int FUNC_5 (struct device*,int *,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_6 (struct regmap*,int ,int ) ;
 int FUNC_7 (int,TYPE_1__*) ;
 int FUNC_8 (int,TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_9(struct device *VAR_9, enum pcm186x_type VAR_10, int VAR_11,
    struct regmap *VAR_12)
{
 struct pcm186x_priv *VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = FUNC_3(VAR_9, sizeof(struct pcm186x_priv), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 FUNC_2(VAR_9, VAR_13);
 VAR_13->regmap = VAR_12;

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_13->supplies); VAR_14++)
  VAR_13->supplies[VAR_14].supply = VAR_6[VAR_14];

 VAR_15 = FUNC_4(VAR_9, FUNC_0(VAR_13->supplies),
          VAR_13->supplies);
 if (VAR_15) {
  FUNC_1(VAR_9, "failed to request supplies: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_8(FUNC_0(VAR_13->supplies),
        VAR_13->supplies);
 if (VAR_15) {
  FUNC_1(VAR_9, "failed enable supplies: %d\n", VAR_15);
  return VAR_15;
 }


 VAR_15 = FUNC_6(VAR_12, VAR_2, VAR_3);
 if (VAR_15) {
  FUNC_1(VAR_9, "failed to write device: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_7(FUNC_0(VAR_13->supplies),
         VAR_13->supplies);
 if (VAR_15) {
  FUNC_1(VAR_9, "failed disable supplies: %d\n", VAR_15);
  return VAR_15;
 }

 switch (VAR_10) {
 case 128:
 case 129:
  VAR_15 = FUNC_5(VAR_9, &VAR_8,
          &VAR_5, 1);
  break;
 case 130:
 case 131:
 default:
  VAR_15 = FUNC_5(VAR_9, &VAR_7,
          &VAR_4, 1);
 }
 if (VAR_15) {
  FUNC_1(VAR_9, "failed to register CODEC: %d\n", VAR_15);
  return VAR_15;
 }

 return 0;
}
