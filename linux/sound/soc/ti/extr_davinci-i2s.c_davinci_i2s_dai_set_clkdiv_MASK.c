
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct davinci_mcbsp_dev {int clk_div; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct davinci_mcbsp_dev* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_2,
    int VAR_3, int VAR_4)
{
 struct davinci_mcbsp_dev *VAR_5 = FUNC_0(VAR_2);

 if (VAR_3 != VAR_0)
  return -VAR_1;

 VAR_5->clk_div = VAR_4;
 return 0;
}
