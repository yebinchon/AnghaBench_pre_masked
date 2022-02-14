
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int * adsp; struct arizona* arizona; } ;
struct cs47l24_priv {TYPE_1__ core; } ;
struct arizona {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct arizona*,int ,struct cs47l24_priv*) ;
 int FUNC_1 (struct arizona*) ;
 int FUNC_2 (struct arizona*,int ,int ) ;
 struct cs47l24_priv* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct cs47l24_priv *VAR_2 = FUNC_3(VAR_1);
 struct arizona *VAR_3 = VAR_2->core.arizona;

 FUNC_4(&VAR_1->dev);

 FUNC_5(&VAR_2->core.adsp[1]);
 FUNC_5(&VAR_2->core.adsp[2]);

 FUNC_1(VAR_3);

 FUNC_2(VAR_3, VAR_0, 0);
 FUNC_0(VAR_3, VAR_0, VAR_2);

 return 0;
}
