
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5640_priv {int ldo1_en; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device_node*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct rt5640_priv *VAR_1, struct device_node *VAR_2)
{
 VAR_1->ldo1_en = FUNC_1(VAR_2, "realtek,ldo1-en-gpios", 0);






 if (!FUNC_0(VAR_1->ldo1_en) &&
   (VAR_1->ldo1_en != -VAR_0))
  return VAR_1->ldo1_en;

 return 0;
}
