
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {char* name; } ;
struct dentry {int d_parent; } ;
struct batadv_priv {struct dentry* debug_dir; } ;


 int FUNC_0 (int ,struct dentry*,int ,char const*) ;
 struct batadv_priv* FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_0)
{
 struct batadv_priv *VAR_1 = FUNC_1(VAR_0);
 const char *VAR_2 = VAR_0->name;
 struct dentry *VAR_3;

 VAR_3 = VAR_1->debug_dir;
 if (!VAR_3)
  return;

 FUNC_0(VAR_3->d_parent, VAR_3, VAR_3->d_parent, VAR_2);
}
