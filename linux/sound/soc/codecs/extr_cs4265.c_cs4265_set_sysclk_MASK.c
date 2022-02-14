
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct cs4265_private {unsigned int sysclk; } ;
struct TYPE_3__ {unsigned int mclk; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 struct cs4265_private* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_2, int VAR_3,
   unsigned int VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_2->component;
 struct cs4265_private *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;

 if (VAR_3 != 0) {
  FUNC_1(VAR_6->dev, "Invalid clk_id %d\n", VAR_3);
  return -VAR_0;
 }
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++) {
  if (VAR_1[VAR_8].mclk == VAR_4) {
   VAR_7->sysclk = VAR_4;
   return 0;
  }
 }
 VAR_7->sysclk = 0;
 FUNC_1(VAR_6->dev, "Invalid freq parameter %d\n", VAR_4);
 return -VAR_0;
}
