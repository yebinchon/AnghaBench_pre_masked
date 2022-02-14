
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ctl_table_header {struct ctl_table* ctl_table_arg; } ;
struct ctl_table {int dummy; } ;
struct TYPE_3__ {struct ctl_table_header* sysheader; } ;
typedef TYPE_1__ ax25_dev ;


 int FUNC_0 (struct ctl_table*) ;
 int FUNC_1 (struct ctl_table_header*) ;

void FUNC_2(ax25_dev *VAR_0)
{
 struct ctl_table_header *VAR_1 = VAR_0->sysheader;
 struct ctl_table *VAR_2;

 if (VAR_1) {
  VAR_0->sysheader = ((void*)0);
  VAR_2 = VAR_1->ctl_table_arg;
  FUNC_1(VAR_1);
  FUNC_0(VAR_2);
 }
}
