
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct platform_device {size_t id; } ;
struct atmel_ssc_info {unsigned int daifmt; } ;


 struct atmel_ssc_info* VAR_0 ;
 struct platform_device* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_1,
  unsigned int VAR_2)
{
 struct platform_device *VAR_3 = FUNC_0(VAR_1->dev);
 struct atmel_ssc_info *VAR_4 = &VAR_0[VAR_3->id];

 VAR_4->daifmt = VAR_2;
 return 0;
}
