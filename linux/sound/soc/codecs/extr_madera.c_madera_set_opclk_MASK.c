
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct madera_priv {int sysclk; int asyncclk; } ;


 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;


 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (int ,char*,unsigned int) ;
 unsigned int* VAR_6 ;
 unsigned int* VAR_7 ;
 struct madera_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_8,
       unsigned int VAR_9, unsigned int VAR_10)
{
 struct madera_priv *VAR_11 = FUNC_4(VAR_8);
 unsigned int VAR_12 = VAR_1 | VAR_3;
 unsigned int VAR_13, VAR_14;
 const unsigned int *VAR_15;
 int VAR_16, VAR_17, VAR_18;

 FUNC_1(FUNC_0(VAR_7) !=
       FUNC_0(VAR_6));

 switch (VAR_9) {
 case 128:
  VAR_13 = VAR_5;
  VAR_18 = VAR_11->sysclk;
  break;
 case 129:
  VAR_13 = VAR_4;
  VAR_18 = VAR_11->asyncclk;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_18 % 4000)
  VAR_15 = VAR_6;
 else
  VAR_15 = VAR_7;

 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_7); ++VAR_16) {
  if (VAR_15[VAR_16] > VAR_18)
   continue;

  VAR_17 = 2;
  while ((VAR_15[VAR_16] / VAR_17 >= VAR_10) && (VAR_17 <= 30)) {
   if (VAR_15[VAR_16] / VAR_17 == VAR_10) {
    FUNC_2(VAR_8->dev, "Configured %dHz OPCLK\n",
     VAR_10);

    VAR_14 = (VAR_17 << VAR_2) | VAR_16;

    FUNC_5(VAR_8, VAR_13,
             VAR_12, VAR_14);
    return 0;
   }
   VAR_17 += 2;
  }
 }

 FUNC_3(VAR_8->dev, "Unable to generate %dHz OPCLK\n", VAR_10);

 return -VAR_0;
}
