
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int d_parent; } ;
struct batadv_hard_iface {struct dentry* debug_dir; TYPE_1__* net_dev; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (int ,struct dentry*,int ,char const*) ;

void FUNC_1(struct batadv_hard_iface *VAR_0)
{
 const char *VAR_1 = VAR_0->net_dev->name;
 struct dentry *VAR_2;

 VAR_2 = VAR_0->debug_dir;
 if (!VAR_2)
  return;

 FUNC_0(VAR_2->d_parent, VAR_2, VAR_2->d_parent, VAR_1);
}
