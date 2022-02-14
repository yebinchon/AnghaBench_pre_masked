
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct s3c_i2sv2_info {struct clk* iis_pclk; struct clk* iis_cclk; scalar_t__ regs; } ;
struct clk {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct s3c_i2sv2_info* FUNC_1 (struct snd_soc_dai*) ;

struct clk *FUNC_2(struct snd_soc_dai *VAR_2)
{
 struct s3c_i2sv2_info *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4 = FUNC_0(VAR_3->regs + VAR_0);

 if (VAR_4 & VAR_1)
  return VAR_3->iis_cclk;
 else
  return VAR_3->iis_pclk;
}
