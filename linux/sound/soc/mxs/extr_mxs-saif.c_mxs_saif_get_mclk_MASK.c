
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxs_saif {int mclk_in_use; scalar_t__ base; int clk; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 struct mxs_saif** VAR_10 ;
 struct mxs_saif* FUNC_4 (struct mxs_saif*) ;
 int FUNC_5 (struct mxs_saif*,unsigned int,unsigned int) ;

int FUNC_6(unsigned int VAR_11, unsigned int VAR_12,
     unsigned int VAR_13)
{
 struct mxs_saif *VAR_14 = VAR_10[VAR_11];
 u32 VAR_15;
 int VAR_16;
 struct mxs_saif *VAR_17;

 if (!VAR_14)
  return -VAR_5;


 FUNC_1(VAR_2,
  VAR_14->base + VAR_8 + VAR_6);


 FUNC_1(VAR_0,
  VAR_14->base + VAR_8 + VAR_6);

 VAR_17 = FUNC_4(VAR_14);
 if (VAR_14 != VAR_17) {
  FUNC_3(VAR_14->dev, "can not get mclk from a non-master saif\n");
  return -VAR_5;
 }

 VAR_15 = FUNC_0(VAR_14->base + VAR_9);
 if (VAR_15 & VAR_3) {
  FUNC_3(VAR_14->dev, "error: busy\n");
  return -VAR_4;
 }

 VAR_14->mclk_in_use = 1;
 VAR_16 = FUNC_5(VAR_14, VAR_12, VAR_13);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_2(VAR_14->clk);
 if (VAR_16)
  return VAR_16;


 FUNC_1(VAR_1,
  VAR_14->base + VAR_8 + VAR_7);

 return 0;
}
