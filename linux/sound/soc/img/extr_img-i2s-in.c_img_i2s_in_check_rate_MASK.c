
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_i2s_in {int dev; int clk_sys; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct img_i2s_in *VAR_1,
  unsigned int VAR_2, unsigned int VAR_3,
  unsigned int *VAR_4,
  unsigned int *VAR_5)
{
 unsigned int VAR_6, VAR_7;

 VAR_6 = VAR_2 * VAR_3;

 VAR_7 = FUNC_0(VAR_1->clk_sys);

 if (VAR_7 >= VAR_6 * 8) {
  *VAR_4 = 1;
  *VAR_5 = 0;
 } else if (VAR_7 >= VAR_6 * 7) {
  *VAR_4 = 1;
  *VAR_5 = 1;
 } else if (VAR_7 >= VAR_6 * 6) {
  *VAR_4 = 0;
  *VAR_5 = 0;
 } else {
  FUNC_1(VAR_1->dev,
   "Sys clock rate %u insufficient for sample rate %u\n",
   VAR_7, VAR_2);
  return -VAR_0;
 }

 return 0;
}
