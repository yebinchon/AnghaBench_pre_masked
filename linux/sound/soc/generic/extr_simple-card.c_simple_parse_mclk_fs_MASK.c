
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_dai_props {int mclk_fs; } ;
struct device_node {int dummy; } ;
typedef int prop ;


 char* VAR_0 ;
 struct device_node* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*,char*,int *) ;
 int FUNC_3 (char*,int,char*,char*) ;

__attribute__((used)) static void FUNC_4(struct device_node *VAR_1,
     struct device_node *VAR_2,
     struct device_node *VAR_3,
     struct simple_dai_props *VAR_4,
     char *VAR_5)
{
 struct device_node *VAR_6 = FUNC_0(VAR_2);
 char VAR_7[128];

 FUNC_3(VAR_7, sizeof(VAR_7), "%smclk-fs", VAR_0);
 FUNC_2(VAR_1, VAR_7, &VAR_4->mclk_fs);

 FUNC_3(VAR_7, sizeof(VAR_7), "%smclk-fs", VAR_5);
 FUNC_2(VAR_6, VAR_7, &VAR_4->mclk_fs);
 FUNC_2(VAR_2, VAR_7, &VAR_4->mclk_fs);
 FUNC_2(VAR_3, VAR_7, &VAR_4->mclk_fs);

 FUNC_1(VAR_6);
}
