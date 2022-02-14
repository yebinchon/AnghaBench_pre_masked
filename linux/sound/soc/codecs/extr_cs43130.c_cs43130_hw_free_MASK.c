
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct cs43130_private {int clk_mutex; int regmap; int clk_req; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct cs43130_private* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1,
      struct snd_soc_dai *VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_2->component;
 struct cs43130_private *VAR_4 = FUNC_4(VAR_3);

 FUNC_2(&VAR_4->clk_mutex);
 VAR_4->clk_req--;
 if (!VAR_4->clk_req) {

  FUNC_0(VAR_3, VAR_0);
  FUNC_1(0, VAR_4->regmap);
 }
 FUNC_3(&VAR_4->clk_mutex);

 return 0;
}
