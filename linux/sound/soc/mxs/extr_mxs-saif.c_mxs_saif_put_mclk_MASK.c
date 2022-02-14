
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxs_saif {scalar_t__ mclk_in_use; scalar_t__ base; int clk; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 struct mxs_saif** VAR_9 ;

int FUNC_4(unsigned int VAR_10)
{
 struct mxs_saif *VAR_11 = VAR_9[VAR_10];
 u32 VAR_12;

 if (!VAR_11)
  return -VAR_4;

 VAR_12 = FUNC_0(VAR_11->base + VAR_8);
 if (VAR_12 & VAR_2) {
  FUNC_3(VAR_11->dev, "error: busy\n");
  return -VAR_3;
 }

 FUNC_2(VAR_11->clk);


 FUNC_1(VAR_0,
  VAR_11->base + VAR_7 + VAR_6);
 FUNC_1(VAR_1,
  VAR_11->base + VAR_7 + VAR_5);

 VAR_11->mclk_in_use = 0;
 return 0;
}
