
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct hsr_priv {struct dentry* node_tbl_file; struct dentry* node_tbl_root; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ,int *) ;
 struct dentry* FUNC_1 (char*,int,struct dentry*,struct hsr_priv*,int *) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

int FUNC_3(struct hsr_priv *VAR_2, struct net_device *VAR_3)
{
 int VAR_4 = -1;
 struct dentry *VAR_5 = ((void*)0);

 VAR_5 = FUNC_0(VAR_3->name, ((void*)0));
 if (!VAR_5) {
  FUNC_2("Cannot create hsr debugfs root\n");
  return VAR_4;
 }

 VAR_2->node_tbl_root = VAR_5;

 VAR_5 = FUNC_1("node_table", VAR_0 | 0444,
     VAR_2->node_tbl_root, VAR_2,
     &VAR_1);
 if (!VAR_5) {
  FUNC_2("Cannot create hsr node_table directory\n");
  return VAR_4;
 }
 VAR_2->node_tbl_file = VAR_5;

 return 0;
}
