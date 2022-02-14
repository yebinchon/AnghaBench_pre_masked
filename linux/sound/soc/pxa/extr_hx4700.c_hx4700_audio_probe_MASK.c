
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {int * dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 () ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 int VAR_4;

 if (!FUNC_4())
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_1,
    FUNC_0(VAR_1));
 if (VAR_4)
  return VAR_4;

 VAR_2 = &VAR_3->dev;
 VAR_4 = FUNC_1(&VAR_3->dev, &VAR_2);
 if (VAR_4)
  FUNC_2(VAR_1,
    FUNC_0(VAR_1));

 return VAR_4;
}
