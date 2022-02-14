
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {struct dentry* debugfs_dentry; struct net_device* net_dev; } ;
struct net_device {char* name; } ;
struct dentry {int dummy; } ;
typedef int buf ;


 int FUNC_0 (char*,int ,struct dentry*) ;
 int VAR_0 ;
 struct dentry* FUNC_1 (char*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int,char*,char*) ;
 int VAR_6 ;

void FUNC_3(struct wimax_dev *VAR_7)
{
 struct net_device *VAR_8 = VAR_7->net_dev;
 struct dentry *VAR_9;
 char VAR_10[128];

 FUNC_2(VAR_10, sizeof(VAR_10), "wimax:%s", VAR_8->name);
 VAR_9 = FUNC_1(VAR_10, ((void*)0));
 VAR_7->debugfs_dentry = VAR_9;

 FUNC_0("wimax_dl_", VAR_0, VAR_9);
 FUNC_0("wimax_dl_", VAR_1, VAR_9);
 FUNC_0("wimax_dl_", VAR_2, VAR_9);
 FUNC_0("wimax_dl_", VAR_3, VAR_9);
 FUNC_0("wimax_dl_", VAR_4, VAR_9);
 FUNC_0("wimax_dl_", VAR_5, VAR_9);
 FUNC_0("wimax_dl_", VAR_6, VAR_9);
}
