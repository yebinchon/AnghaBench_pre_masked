
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {int * dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 int VAR_2 = 0;

 VAR_0.dev = &VAR_1->dev;
 VAR_2 = FUNC_1(&VAR_1->dev, &VAR_0);
 if (VAR_2)
  FUNC_0(&VAR_1->dev, "snd_soc_register_card failed %d\n", VAR_2);

 return VAR_2;
}
