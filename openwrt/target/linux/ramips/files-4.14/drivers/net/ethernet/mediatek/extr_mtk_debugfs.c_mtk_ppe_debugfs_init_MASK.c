
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_eth {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtk_eth* VAR_2 ;
 struct dentry* FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int ,struct dentry*,struct mtk_eth*,int *) ;
 int VAR_3 ;

int FUNC_2(struct mtk_eth *VAR_4)
{
 struct dentry *VAR_5;

 VAR_2 = VAR_4;

 VAR_5 = FUNC_0("mtk_ppe", ((void*)0));
 if (!VAR_5)
  return -VAR_0;

 FUNC_1("all_entry", VAR_1, VAR_5, VAR_4, &VAR_3);

 return 0;
}
