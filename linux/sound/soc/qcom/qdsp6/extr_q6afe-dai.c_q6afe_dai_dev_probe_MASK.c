
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6afe_dai_data {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,struct q6afe_dai_data*) ;
 struct q6afe_dai_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,int *,int ,int ) ;
 int FUNC_4 (struct device*,struct q6afe_dai_data*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 struct q6afe_dai_data *VAR_5;
 struct device *VAR_6 = &VAR_4->dev;

 VAR_5 = FUNC_2(VAR_6, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(VAR_6, VAR_5);

 FUNC_4(VAR_6, VAR_5);

 return FUNC_3(VAR_6, &VAR_2,
       VAR_3, FUNC_0(VAR_3));
}
