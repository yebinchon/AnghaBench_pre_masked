
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* sysctl_header; } ;
struct net {TYPE_1__ sctp; } ;
struct ctl_table {int dummy; } ;
struct TYPE_4__ {struct ctl_table* ctl_table_arg; } ;


 int FUNC_0 (struct ctl_table*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(struct net *VAR_0)
{
 struct ctl_table *VAR_1;

 VAR_1 = VAR_0->sctp.sysctl_header->ctl_table_arg;
 FUNC_1(VAR_0->sctp.sysctl_header);
 FUNC_0(VAR_1);
}
