
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ctl_table_set {int dummy; } ;
struct TYPE_6__ {TYPE_2__* nsproxy; } ;
struct TYPE_5__ {TYPE_1__* net_ns; } ;
struct TYPE_4__ {struct ctl_table_set sysctls; } ;


 TYPE_3__* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ctl_table_set *VAR_1)
{
 return &VAR_0->nsproxy->net_ns->sysctls == VAR_1;
}
