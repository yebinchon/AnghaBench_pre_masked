
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mchp_i2s_mcc_dev {unsigned int sysclk; struct clk* gclk; struct clk* pclk; int dev; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int,int ) ;
 unsigned int FUNC_1 (unsigned long) ;
 unsigned int FUNC_2 (unsigned long) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,...) ;
 unsigned long FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (struct clk*,unsigned long,struct clk**,unsigned long*,unsigned long*) ;

__attribute__((used)) static int FUNC_7(struct mchp_i2s_mcc_dev *VAR_3,
        unsigned int VAR_4, unsigned int *VAR_5,
        unsigned long *VAR_6)
{
 unsigned long VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9 = ~0;
 unsigned int VAR_10;
 struct clk *VAR_11 = ((void*)0);
 int VAR_12;


 if (!VAR_3->sysclk)
  VAR_10 = VAR_4;
 else
  VAR_10 = VAR_3->sysclk;






 VAR_8 = FUNC_5(VAR_10, VAR_4);
 if ((VAR_8 / VAR_10 % 2 == 1 && VAR_8 / VAR_10 > 2) ||
     (VAR_8 / VAR_4 % 2 == 1 && VAR_8 / VAR_4 > 2))
  VAR_8 *= 2;

 for (VAR_7 = VAR_8;
      (VAR_7 == VAR_10 || VAR_7 / (VAR_10 * 2) <= FUNC_0(5, 0)) &&
      (VAR_7 == VAR_4 || VAR_7 / (VAR_4 * 2) <= FUNC_0(5, 0));
      VAR_7 += VAR_8) {
  VAR_12 = FUNC_6(VAR_3->gclk, VAR_7,
           &VAR_11, VAR_6,
           &VAR_9);
  if (VAR_12) {
   FUNC_4(VAR_3->dev, "gclk error for rate %lu: %d",
    VAR_7, VAR_12);
  } else {
   if (!VAR_9) {
    FUNC_3(VAR_3->dev, "found perfect rate on gclk: %lu\n",
     VAR_7);
    break;
   }
  }

  VAR_12 = FUNC_6(VAR_3->pclk, VAR_7,
           &VAR_11, VAR_6,
           &VAR_9);
  if (VAR_12) {
   FUNC_4(VAR_3->dev, "pclk error for rate %lu: %d",
    VAR_7, VAR_12);
  } else {
   if (!VAR_9) {
    FUNC_3(VAR_3->dev, "found perfect rate on pclk: %lu\n",
     VAR_7);
    break;
   }
  }
 }


 if (!VAR_11) {
  FUNC_4(VAR_3->dev, "unable to change rate to clocks\n");
  return -VAR_0;
 }

 FUNC_3(VAR_3->dev, "source CLK is %s with rate %lu, diff %lu\n",
  VAR_11 == VAR_3->pclk ? "pclk" : "gclk",
  *VAR_6, VAR_9);


 if (VAR_3->sysclk)
  *VAR_5 |= FUNC_1(*VAR_6 / (2 * VAR_10));
 *VAR_5 |= FUNC_2(*VAR_6 / (2 * VAR_4));

 if (VAR_11 == VAR_3->gclk)
  *VAR_5 |= VAR_1;
 else
  *VAR_5 |= VAR_2;

 return 0;
}
