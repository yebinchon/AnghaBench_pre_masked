
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tas2552_data {int pll_clk_id; unsigned int pll_clkin; int pdm_clk_id; unsigned int pdm_clk; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 struct tas2552_data* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (struct snd_soc_component*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_5, int VAR_6,
      unsigned int VAR_7, int VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_5->component;
 struct tas2552_data *VAR_10 = FUNC_1(VAR_9->dev);
 u8 VAR_11, VAR_12, VAR_13;

 switch (VAR_6) {
 case 128:
 case 129:
  if (VAR_7 < 512000 || VAR_7 > 24576000) {

   FUNC_2(VAR_9->dev, "Out of range PLL_CLKIN: %u\n",
     VAR_7);
   VAR_6 = 130;
   VAR_7 = 0;
  }

 case 130:
 case 131:
  VAR_12 = VAR_4;
  VAR_13 = (VAR_6 << 3) & VAR_12;
  VAR_11 = VAR_1;
  VAR_10->pll_clk_id = VAR_6;
  VAR_10->pll_clkin = VAR_7;
  break;
 case 132:
 case 134:
 case 135:
 case 133:
  VAR_12 = VAR_3;
  VAR_13 = (VAR_6 >> 1) & VAR_12;
  VAR_11 = VAR_2;
  VAR_10->pdm_clk_id = VAR_6;
  VAR_10->pdm_clk = VAR_7;
  break;
 default:
  FUNC_0(VAR_9->dev, "Invalid clk id: %d\n", VAR_6);
  return -VAR_0;
 }

 FUNC_3(VAR_9, VAR_11, VAR_12, VAR_13);

 return 0;
}
