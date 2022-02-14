
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_i2s {int rst; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 struct sun4i_i2s* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct sun4i_i2s *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_2(&VAR_0->dev);
 if (!FUNC_3(&VAR_0->dev))
  FUNC_5(&VAR_0->dev);

 if (!FUNC_0(VAR_1->rst))
  FUNC_4(VAR_1->rst);

 return 0;
}
