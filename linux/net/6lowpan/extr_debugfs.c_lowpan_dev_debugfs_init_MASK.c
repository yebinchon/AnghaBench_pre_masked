
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {char* name; } ;
struct lowpan_dev {int ctx; void* iface_debugfs; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (char*,void*) ;
 int FUNC_1 (char*,int,struct dentry*,int *,int *) ;
 int VAR_1 ;
 void* VAR_2 ;
 struct lowpan_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,struct lowpan_dev*) ;
 int FUNC_4 (struct net_device*,struct dentry*,int) ;

void FUNC_5(struct net_device *VAR_3)
{
 struct lowpan_dev *VAR_4 = FUNC_2(VAR_3);
 struct dentry *VAR_5;
 int VAR_6;


 VAR_4->iface_debugfs = FUNC_0(VAR_3->name, VAR_2);

 VAR_5 = FUNC_0("contexts", VAR_4->iface_debugfs);

 FUNC_1("show", 0644, VAR_5, &FUNC_2(VAR_3)->ctx,
       &VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_4(VAR_3, VAR_5, VAR_6);

 FUNC_3(VAR_3, VAR_4);
}
