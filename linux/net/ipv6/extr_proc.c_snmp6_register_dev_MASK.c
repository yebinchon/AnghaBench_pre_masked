
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct proc_dir_entry {int dummy; } ;
struct TYPE_5__ {int proc_net_devsnmp6; } ;
struct net {TYPE_2__ mib; } ;
struct TYPE_4__ {struct proc_dir_entry* proc_dir_entry; } ;
struct inet6_dev {TYPE_1__ stats; TYPE_3__* dev; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net* FUNC_0 (TYPE_3__*) ;
 struct proc_dir_entry* FUNC_1 (int ,int,int ,int ,struct inet6_dev*) ;
 int VAR_3 ;

int FUNC_2(struct inet6_dev *VAR_4)
{
 struct proc_dir_entry *VAR_5;
 struct net *VAR_6;

 if (!VAR_4 || !VAR_4->dev)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_4->dev);
 if (!VAR_6->mib.proc_net_devsnmp6)
  return -VAR_1;

 VAR_5 = FUNC_1(VAR_4->dev->name, 0444,
   VAR_6->mib.proc_net_devsnmp6, VAR_3, VAR_4);
 if (!VAR_5)
  return -VAR_2;

 VAR_4->stats.proc_dir_entry = VAR_5;
 return 0;
}
