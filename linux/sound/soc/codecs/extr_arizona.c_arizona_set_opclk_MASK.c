
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct arizona_priv {int sysclk; int asyncclk; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (unsigned int*) ;
 int VAR_5 ;
 unsigned int* VAR_6 ;
 unsigned int* VAR_7 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 struct arizona_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_8,
        unsigned int VAR_9, unsigned int VAR_10)
{
 struct arizona_priv *VAR_11 = FUNC_3(VAR_8);
 unsigned int VAR_12;
 unsigned int *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 switch (VAR_9) {
 case 128:
  VAR_12 = VAR_4;
  VAR_16 = VAR_11->sysclk;
  break;
 case 129:
  VAR_12 = VAR_3;
  VAR_16 = VAR_11->asyncclk;
  break;
 default:
  return -VAR_5;
 }

 if (VAR_16 % 8000)
  VAR_13 = VAR_6;
 else
  VAR_13 = VAR_7;

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_7) &&
      VAR_13[VAR_14] <= VAR_16; VAR_14++) {
  VAR_15 = 1;
  while (VAR_13[VAR_14] / VAR_15 >= VAR_10 && VAR_15 < 32) {
   if (VAR_13[VAR_14] / VAR_15 == VAR_10) {
    FUNC_1(VAR_8->dev, "Configured %dHz OPCLK\n",
     VAR_10);
    FUNC_4(VAR_8, VAR_12,
          VAR_0 |
          VAR_2,
          (VAR_15 <<
           VAR_1) |
          VAR_14);
    return 0;
   }
   VAR_15++;
  }
 }

 FUNC_2(VAR_8->dev, "Unable to generate %dHz OPCLK\n", VAR_10);
 return -VAR_5;
}
