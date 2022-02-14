
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6asm_dai_data {int sid; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct of_phandle_args {int* args; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,struct q6asm_dai_data*) ;
 struct q6asm_dai_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,int *,int ,int ) ;
 int FUNC_4 (struct device_node*,char*,int,int ,struct of_phandle_args*) ;
 int FUNC_5 (struct device*,struct q6asm_dai_data*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct device_node *VAR_7 = VAR_6->of_node;
 struct of_phandle_args VAR_8;
 struct q6asm_dai_data *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_6, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_7, "iommus", 1, 0, &VAR_8);
 if (VAR_10 < 0)
  VAR_9->sid = -1;
 else
  VAR_9->sid = VAR_8.args[0] & VAR_2;

 FUNC_1(VAR_6, VAR_9);

 FUNC_5(VAR_6, VAR_9);

 return FUNC_3(VAR_6, &VAR_3,
     VAR_4,
     FUNC_0(VAR_4));
}
