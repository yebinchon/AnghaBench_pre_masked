
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int sysctls; } ;
struct ctl_table_header {int dummy; } ;
struct ctl_table {int dummy; } ;


 struct ctl_table_header* FUNC_0 (int *,char const*,struct ctl_table*) ;

struct ctl_table_header *FUNC_1(struct net *VAR_0,
 const char *VAR_1, struct ctl_table *VAR_2)
{
 return FUNC_0(&VAR_0->sysctls, VAR_1, VAR_2);
}
