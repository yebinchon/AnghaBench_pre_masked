
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_dai_props {int mclk_fs; } ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*,char*,int *) ;

__attribute__((used)) static void FUNC_4(struct device_node *VAR_0,
    struct device_node *VAR_1,
    struct simple_dai_props *VAR_2)
{
 struct device_node *VAR_3 = FUNC_0(VAR_1);
 struct device_node *VAR_4 = FUNC_0(VAR_3);
 struct device_node *VAR_5 = FUNC_1(VAR_1);

 FUNC_3(VAR_0, "mclk-fs", &VAR_2->mclk_fs);
 FUNC_3(VAR_4, "mclk-fs", &VAR_2->mclk_fs);
 FUNC_3(VAR_3, "mclk-fs", &VAR_2->mclk_fs);
 FUNC_3(VAR_1, "mclk-fs", &VAR_2->mclk_fs);

 FUNC_2(VAR_3);
 FUNC_2(VAR_4);
 FUNC_2(VAR_5);
}
