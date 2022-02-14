
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct jz4740_i2s {int clk_i2s; } ;
struct clk {int dummy; } ;


 int VAR_0 ;


 struct clk* FUNC_0 (int *,char*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (int ,struct clk*) ;
 int FUNC_3 (int ,unsigned int) ;
 struct jz4740_i2s* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_1, int VAR_2,
 unsigned int VAR_3, int VAR_4)
{
 struct jz4740_i2s *VAR_5 = FUNC_4(VAR_1);
 struct clk *VAR_6;
 int VAR_7 = 0;

 switch (VAR_2) {
 case 129:
  VAR_6 = FUNC_0(((void*)0), "ext");
  FUNC_2(VAR_5->clk_i2s, VAR_6);
  break;
 case 128:
  VAR_6 = FUNC_0(((void*)0), "pll half");
  FUNC_2(VAR_5->clk_i2s, VAR_6);
  VAR_7 = FUNC_3(VAR_5->clk_i2s, VAR_3);
  break;
 default:
  return -VAR_0;
 }
 FUNC_1(VAR_6);

 return VAR_7;
}
