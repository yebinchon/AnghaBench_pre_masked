
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {int madera; int * adsp; } ;
struct cs47l85 {TYPE_1__ core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,struct cs47l85*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ) ;
 struct cs47l85* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct cs47l85 *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;

 FUNC_5(&VAR_2->dev);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_6(&VAR_3->core.adsp[VAR_4]);

 FUNC_3(VAR_3->core.madera, VAR_1, 0);
 FUNC_1(VAR_3->core.madera, VAR_1, VAR_3);
 FUNC_2(&VAR_3->core);
 FUNC_0(&VAR_3->core);

 return 0;
}
