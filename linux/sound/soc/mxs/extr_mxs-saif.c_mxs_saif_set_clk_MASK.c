
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxs_saif {unsigned int cur_rate; scalar_t__ base; scalar_t__ mclk_in_use; int clk; int id; int dev; scalar_t__ ongoing; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*,unsigned int,...) ;
 int FUNC_7 (int ,char*,int ,unsigned int) ;
 struct mxs_saif* FUNC_8 (struct mxs_saif*) ;

__attribute__((used)) static int FUNC_9(struct mxs_saif *VAR_4,
      unsigned int VAR_5,
      unsigned int VAR_6)
{
 u32 VAR_7;
 int VAR_8;
 struct mxs_saif *VAR_9;

 FUNC_6(VAR_4->dev, "mclk %d rate %d\n", VAR_5, VAR_6);


 VAR_9 = FUNC_8(VAR_4);
 if (!VAR_9)
  return -VAR_2;

 FUNC_6(VAR_4->dev, "master saif%d\n", VAR_9->id);


 if (VAR_9->ongoing && VAR_6 != VAR_9->cur_rate) {
  FUNC_7(VAR_4->dev,
   "can not change clock, master saif%d(rate %d) is ongoing\n",
   VAR_9->id, VAR_9->cur_rate);
  return -VAR_2;
 }

 VAR_7 = FUNC_1(VAR_9->base + VAR_3);
 VAR_7 &= ~VAR_1;
 VAR_7 &= ~VAR_0;
 VAR_8 = FUNC_4(VAR_9->clk);
 if (VAR_8)
  return VAR_8;

 if (VAR_9->mclk_in_use) {
  switch (VAR_5 / VAR_6) {
  case 32:
  case 64:
  case 128:
  case 256:
  case 512:
   VAR_7 &= ~VAR_0;
   VAR_8 = FUNC_5(VAR_9->clk, 512 * VAR_6);
   break;
  case 48:
  case 96:
  case 192:
  case 384:
   VAR_7 |= VAR_0;
   VAR_8 = FUNC_5(VAR_9->clk, 384 * VAR_6);
   break;
  default:

   FUNC_3(VAR_9->clk);
   return -VAR_2;
  }
 } else {
  VAR_8 = FUNC_5(VAR_9->clk, 512 * VAR_6);
  VAR_7 &= ~VAR_0;
 }

 FUNC_3(VAR_9->clk);

 if (VAR_8)
  return VAR_8;

 VAR_9->cur_rate = VAR_6;

 if (!VAR_9->mclk_in_use) {
  FUNC_2(VAR_7, VAR_9->base + VAR_3);
  return 0;
 }







 switch (VAR_5 / VAR_6) {
 case 32:
  VAR_7 |= FUNC_0(4);
  break;
 case 64:
  VAR_7 |= FUNC_0(3);
  break;
 case 128:
  VAR_7 |= FUNC_0(2);
  break;
 case 256:
  VAR_7 |= FUNC_0(1);
  break;
 case 512:
  VAR_7 |= FUNC_0(0);
  break;
 case 48:
  VAR_7 |= FUNC_0(3);
  break;
 case 96:
  VAR_7 |= FUNC_0(2);
  break;
 case 192:
  VAR_7 |= FUNC_0(1);
  break;
 case 384:
  VAR_7 |= FUNC_0(0);
  break;
 default:
  return -VAR_2;
 }

 FUNC_2(VAR_7, VAR_9->base + VAR_3);

 return 0;
}
