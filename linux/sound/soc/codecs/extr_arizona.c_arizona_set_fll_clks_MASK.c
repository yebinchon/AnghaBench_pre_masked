
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;
struct arizona_fll {struct arizona* arizona; } ;
struct arizona {struct clk** mclk; int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;


 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct arizona_fll*,char*,int) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (int ,int,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct arizona_fll *VAR_4, int VAR_5, bool VAR_6)
{
 struct arizona *VAR_7 = VAR_4->arizona;
 unsigned int VAR_8;
 struct clk *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_7->regmap, VAR_5 + 6, &VAR_8);
 if (VAR_10 != 0) {
  FUNC_0(VAR_4, "Failed to read current source: %d\n",
    VAR_10);
  return VAR_10;
 }

 VAR_8 &= VAR_0;
 VAR_8 >>= VAR_1;

 switch (VAR_8) {
 case 129:
  VAR_9 = VAR_7->mclk[VAR_2];
  break;
 case 128:
  VAR_9 = VAR_7->mclk[VAR_3];
  break;
 default:
  return 0;
 }

 if (VAR_6) {
  return FUNC_2(VAR_9);
 } else {
  FUNC_1(VAR_9);
  return 0;
 }
}
