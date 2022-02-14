
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct platform_device {size_t id; } ;
struct atmel_ssc_info {int dir_mask; int cmr_div; int tcmr_period; int rcmr_period; int forced_divider; } ;





 int FUNC_0 (int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct atmel_ssc_info* VAR_4 ;
 struct platform_device* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_5,
 int VAR_6, int VAR_7)
{
 struct platform_device *VAR_8 = FUNC_1(VAR_5->dev);
 struct atmel_ssc_info *VAR_9 = &VAR_4[VAR_8->id];

 switch (VAR_6) {
 case 130:





  if (VAR_9->dir_mask !=
   (VAR_3 | VAR_2))
   VAR_9->cmr_div = VAR_7;
  else if (VAR_9->cmr_div == 0)
   VAR_9->cmr_div = VAR_7;
  else
   if (VAR_7 != VAR_9->cmr_div)
    return -VAR_0;
  VAR_9->forced_divider |= FUNC_0(130);
  break;

 case 128:
  VAR_9->tcmr_period = VAR_7;
  VAR_9->forced_divider |= FUNC_0(128);
  break;

 case 129:
  VAR_9->rcmr_period = VAR_7;
  VAR_9->forced_divider |= FUNC_0(129);
  break;

 default:
  return -VAR_1;
 }

 return 0;
}
