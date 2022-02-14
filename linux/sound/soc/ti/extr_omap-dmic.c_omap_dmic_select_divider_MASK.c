
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dmic {int fclk_freq; int out_freq; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int FUNC_1(struct omap_dmic *VAR_1, int VAR_2)
{
 int VAR_3 = -VAR_0;





 if (VAR_2 == 192000) {
  if (VAR_1->fclk_freq == 19200000 && VAR_1->out_freq == 3840000)
   VAR_3 = 0x6;
  else
   FUNC_0(VAR_1->dev,
    "invalid clock configuration for 192KHz\n");

  return VAR_3;
 }

 switch (VAR_1->out_freq) {
 case 1536000:
  if (VAR_1->fclk_freq != 24576000)
   goto div_err;
  VAR_3 = 0x4;
  break;
 case 2400000:
  switch (VAR_1->fclk_freq) {
  case 12000000:
   VAR_3 = 0x5;
   break;
  case 19200000:
   VAR_3 = 0x0;
   break;
  case 24000000:
   VAR_3 = 0x2;
   break;
  default:
   goto div_err;
  }
  break;
 case 3072000:
  if (VAR_1->fclk_freq != 24576000)
   goto div_err;
  VAR_3 = 0x3;
  break;
 case 3840000:
  if (VAR_1->fclk_freq != 19200000)
   goto div_err;
  VAR_3 = 0x1;
  break;
 default:
  FUNC_0(VAR_1->dev, "invalid out frequency: %dHz\n",
   VAR_1->out_freq);
  break;
 }

 return VAR_3;

div_err:
 FUNC_0(VAR_1->dev, "invalid out frequency %dHz for %dHz input\n",
  VAR_1->out_freq, VAR_1->fclk_freq);
 return -VAR_0;
}
