
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(&VAR_0);
 if (VAR_4 != 0)
  return VAR_4;

 return FUNC_1(&VAR_3->dev, &VAR_1,
       VAR_2, FUNC_0(VAR_2));
}
