
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct fsi_priv {int clk_master; int bit_clk_inv; int lr_clk_inv; scalar_t__ clk_cpg; } ;


 int VAR_0 ;


 unsigned int VAR_1 ;


 unsigned int VAR_2 ;
 unsigned int VAR_3 ;


 int FUNC_0 (int ,struct fsi_priv*,int,int,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct fsi_priv* FUNC_1 (struct snd_soc_dai*) ;
 scalar_t__ FUNC_2 (struct fsi_priv*) ;
 scalar_t__ FUNC_3 (struct fsi_priv*) ;
 int FUNC_4 (struct fsi_priv*,unsigned int) ;
 int FUNC_5 (struct fsi_priv*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dai *VAR_6, unsigned int VAR_7)
{
 struct fsi_priv *VAR_8 = FUNC_1(VAR_6);
 int VAR_9;


 switch (VAR_7 & VAR_3) {
 case 133:
  break;
 case 132:
  VAR_8->clk_master = 1;
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_7 & VAR_2) {
 case 129:
  VAR_8->bit_clk_inv = 0;
  VAR_8->lr_clk_inv = 1;
  break;
 case 130:
  VAR_8->bit_clk_inv = 1;
  VAR_8->lr_clk_inv = 0;
  break;
 case 131:
  VAR_8->bit_clk_inv = 1;
  VAR_8->lr_clk_inv = 1;
  break;
 case 128:
 default:
  VAR_8->bit_clk_inv = 0;
  VAR_8->lr_clk_inv = 0;
  break;
 }

 if (FUNC_2(VAR_8)) {
  if (VAR_8->clk_cpg)
   FUNC_0(VAR_6->dev, VAR_8, 0, 1, 1,
         VAR_4);
  else
   FUNC_0(VAR_6->dev, VAR_8, 1, 1, 0,
         VAR_5);
 }


 if (FUNC_3(VAR_8))
  VAR_9 = FUNC_5(VAR_8);
 else
  VAR_9 = FUNC_4(VAR_8, VAR_7 & VAR_1);

 return VAR_9;
}
