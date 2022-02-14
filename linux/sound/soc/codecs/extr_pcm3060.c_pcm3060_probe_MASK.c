
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm3060_priv {int regmap; scalar_t__ out_se; } ;
struct device {scalar_t__ of_node; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*,int) ;
 struct pcm3060_priv* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__,struct pcm3060_priv*) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,int ,int ) ;

int FUNC_6(struct device *VAR_5)
{
 int VAR_6;
 struct pcm3060_priv *VAR_7 = FUNC_2(VAR_5);


 VAR_6 = FUNC_5(VAR_7->regmap, VAR_0,
    VAR_1, 0);
 if (VAR_6) {
  FUNC_1(VAR_5, "failed to reset component, rc=%d\n", VAR_6);
  return VAR_6;
 }

 if (VAR_5->of_node)
  FUNC_4(VAR_5->of_node, VAR_7);

 if (VAR_7->out_se)
  FUNC_5(VAR_7->regmap, VAR_0,
       VAR_2, VAR_2);

 VAR_6 = FUNC_3(VAR_5, &VAR_4,
          VAR_3,
          FUNC_0(VAR_3));
 if (VAR_6) {
  FUNC_1(VAR_5, "failed to register component, rc=%d\n", VAR_6);
  return VAR_6;
 }

 return 0;
}
