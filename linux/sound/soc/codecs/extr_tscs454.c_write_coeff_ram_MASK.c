
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tscs454 {int regmap; } ;
struct snd_soc_component {int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,unsigned int,int *,unsigned int) ;
 int FUNC_2 (int ,unsigned int,unsigned int) ;
 struct tscs454* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_3, u8 *VAR_4,
  unsigned int VAR_5, unsigned int VAR_6, unsigned int VAR_7,
  unsigned int VAR_8, unsigned int VAR_9)
{
 struct tscs454 *VAR_10 = FUNC_3(VAR_3);
 unsigned int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++, VAR_8++) {

  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
   VAR_14 = FUNC_4(VAR_3, VAR_5, &VAR_11);
   if (VAR_14 < 0) {
    FUNC_0(VAR_3->dev,
     "Failed to read stat (%d)\n", VAR_14);
    return VAR_14;
   }
   if (!VAR_11)
    break;
  }

  if (VAR_13 == VAR_1) {
   VAR_14 = -VAR_2;
   FUNC_0(VAR_3->dev,
    "Coefficient write error (%d)\n", VAR_14);
   return VAR_14;
  }

  VAR_14 = FUNC_2(VAR_10->regmap, VAR_6, VAR_8);
  if (VAR_14 < 0) {
   FUNC_0(VAR_3->dev,
    "Failed to write dac ram address (%d)\n", VAR_14);
   return VAR_14;
  }

  VAR_14 = FUNC_1(VAR_10->regmap, VAR_7,
   &VAR_4[VAR_8 * VAR_0],
   VAR_0);
  if (VAR_14 < 0) {
   FUNC_0(VAR_3->dev,
    "Failed to write dac ram (%d)\n", VAR_14);
   return VAR_14;
  }
 }

 return 0;
}
