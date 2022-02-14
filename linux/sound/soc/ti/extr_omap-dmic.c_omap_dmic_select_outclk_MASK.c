
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dmic {unsigned int out_freq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct omap_dmic *VAR_2, int VAR_3,
        unsigned int VAR_4)
{
 int VAR_5 = 0;

 if (VAR_3 != VAR_1) {
  FUNC_0(VAR_2->dev, "output clk_id (%d) not supported\n",
   VAR_3);
  return -VAR_0;
 }

 switch (VAR_4) {
 case 1536000:
 case 2400000:
 case 3072000:
 case 3840000:
  VAR_2->out_freq = VAR_4;
  break;
 default:
  FUNC_0(VAR_2->dev, "invalid out frequency: %dHz\n", VAR_4);
  VAR_2->out_freq = 0;
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
