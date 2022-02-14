
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct mpls_dev {TYPE_1__* sysctl; } ;
struct ctl_table {int dummy; } ;
struct TYPE_2__ {struct ctl_table* ctl_table_arg; } ;


 int VAR_0 ;
 struct net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ctl_table*) ;
 int FUNC_2 (struct net*,int ,int ,struct mpls_dev*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1,
           struct mpls_dev *VAR_2)
{
 struct net *VAR_3 = FUNC_0(VAR_1);
 struct ctl_table *VAR_4;

 VAR_4 = VAR_2->sysctl->ctl_table_arg;
 FUNC_3(VAR_2->sysctl);
 FUNC_1(VAR_4);

 FUNC_2(VAR_3, VAR_0, 0, VAR_2);
}
