
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int * dev; } ;
struct platform_device_id {size_t driver_data; } ;
struct platform_device {int dev; } ;


 struct snd_soc_card** VAR_0 ;
 int FUNC_0 (int *,struct snd_soc_card*) ;
 struct platform_device_id* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 const struct platform_device_id *VAR_2 = FUNC_1(VAR_1);
 struct snd_soc_card *VAR_3;

 VAR_3 = VAR_0[VAR_2->driver_data];
 VAR_3->dev = &VAR_1->dev;
 return FUNC_0(&VAR_1->dev, VAR_3);
}
