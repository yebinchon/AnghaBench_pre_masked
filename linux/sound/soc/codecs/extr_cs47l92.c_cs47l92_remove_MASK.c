
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {int madera; int * adsp; } ;
struct cs47l92 {TYPE_1__ core; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,int ,struct cs47l92*) ;
 int FUNC_3 (int ,int ,int ) ;
 struct cs47l92* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct cs47l92 *VAR_2 = FUNC_4(VAR_1);

 FUNC_5(&VAR_1->dev);

 FUNC_1(&VAR_2->core, 0);
 FUNC_6(&VAR_2->core.adsp[0]);

 FUNC_3(VAR_2->core.madera, VAR_0, 0);
 FUNC_2(VAR_2->core.madera, VAR_0, VAR_2);

 FUNC_0(&VAR_2->core);

 return 0;
}
