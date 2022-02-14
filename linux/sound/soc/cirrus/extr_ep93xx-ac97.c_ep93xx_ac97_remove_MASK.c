
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct ep93xx_ac97_info {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct ep93xx_ac97_info*,int ,int ) ;
 struct ep93xx_ac97_info* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct ep93xx_ac97_info *VAR_3 = FUNC_1(VAR_2);

 FUNC_3(&VAR_2->dev);


 FUNC_0(VAR_3, VAR_0, 0);

 VAR_1 = ((void*)0);

 FUNC_2(((void*)0));

 return 0;
}
