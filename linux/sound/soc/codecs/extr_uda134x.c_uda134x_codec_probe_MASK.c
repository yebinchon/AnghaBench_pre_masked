
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct uda134x_priv {int regmap; struct uda134x_platform_data* pd; } ;
struct TYPE_8__ {scalar_t__ use_gpios; } ;
struct uda134x_platform_data {TYPE_2__ l3; } ;
struct TYPE_7__ {struct uda134x_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct uda134x_priv* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int *,struct uda134x_platform_data*,int *) ;
 int FUNC_5 (TYPE_1__*,int *,int *,int) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (struct platform_device*,struct uda134x_priv*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6)
{
 struct uda134x_platform_data *VAR_7 = VAR_6->dev.platform_data;
 struct uda134x_priv *VAR_8;
 int VAR_9;

 if (!VAR_7) {
  FUNC_2(&VAR_6->dev, "Missing L3 bitbang function\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_3(&VAR_6->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->pd = VAR_7;
 FUNC_7(VAR_6, VAR_8);

 if (VAR_7->l3.use_gpios) {
  VAR_9 = FUNC_6(&VAR_6->dev, &VAR_8->pd->l3);
  if (VAR_9 < 0)
   return VAR_9;
 }

 VAR_8->regmap = FUNC_4(&VAR_6->dev, ((void*)0), VAR_7,
  &VAR_5);
 if (FUNC_0(VAR_8->regmap))
  return FUNC_1(VAR_8->regmap);

 return FUNC_5(&VAR_6->dev,
   &VAR_3, &VAR_4, 1);
}
