
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct clk_bulk_data {char* id; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (struct clk_bulk_data*) ;




 int FUNC_1 (int ,struct clk_bulk_data*) ;
 int FUNC_2 (int ,struct clk_bulk_data*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,struct clk_bulk_data*) ;
 int FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_0,
      enum snd_soc_bias_level VAR_1)
{
 int VAR_2;

 struct clk_bulk_data VAR_3[] = {
  { .id = "madc" },
  { .id = "mdac" },
  { .id = "bdiv" },
 };

 VAR_2 = FUNC_4(VAR_0->dev, FUNC_0(VAR_3), VAR_3);
 if (VAR_2)
  return VAR_2;

 switch (VAR_1) {
 case 130:
  VAR_2 = FUNC_2(FUNC_0(VAR_3), VAR_3);
  if (VAR_2) {
   FUNC_3(VAR_0->dev, "Failed to enable clocks\n");
   return VAR_2;
  }
  break;
 case 129:
  break;
 case 128:

  if (FUNC_5(VAR_0) == 131)
   break;

  FUNC_1(FUNC_0(VAR_3), VAR_3);
  break;
 case 131:
  break;
 }
 return 0;
}
