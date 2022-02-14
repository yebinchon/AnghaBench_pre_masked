
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tscs42xx {int regmap; } ;
struct snd_soc_component {int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int *,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 struct tscs42xx* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_6, u8 *VAR_7,
 unsigned int VAR_8, unsigned int VAR_9)
{
 struct tscs42xx *VAR_10 = FUNC_3(VAR_6);
 int VAR_11;
 int VAR_12;
 int VAR_13;

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++, VAR_8++) {

  for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
   VAR_13 = FUNC_4(VAR_6, VAR_4);
   if (VAR_13 < 0) {
    FUNC_0(VAR_6->dev,
     "Failed to read stat (%d)\n", VAR_13);
    return VAR_13;
   }
   if (!VAR_13)
    break;
  }

  if (VAR_12 == VAR_1) {
   VAR_13 = -VAR_2;
   FUNC_0(VAR_6->dev,
    "dac coefficient write error (%d)\n", VAR_13);
   return VAR_13;
  }

  VAR_13 = FUNC_2(VAR_10->regmap, VAR_3, VAR_8);
  if (VAR_13 < 0) {
   FUNC_0(VAR_6->dev,
    "Failed to write dac ram address (%d)\n", VAR_13);
   return VAR_13;
  }

  VAR_13 = FUNC_1(VAR_10->regmap, VAR_5,
   &VAR_7[VAR_8 * VAR_0],
   VAR_0);
  if (VAR_13 < 0) {
   FUNC_0(VAR_6->dev,
    "Failed to write dac ram (%d)\n", VAR_13);
   return VAR_13;
  }
 }

 return 0;
}
