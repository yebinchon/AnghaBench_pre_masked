
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_stat {TYPE_1__* program; } ;
struct proc_dir_entry {int dummy; } ;
struct net {int dummy; } ;
struct file_operations {int dummy; } ;
struct TYPE_2__ {int pg_name; } ;


 struct proc_dir_entry* FUNC_0 (struct net*,int ,struct svc_stat*,struct file_operations const*) ;

struct proc_dir_entry *
FUNC_1(struct net *VAR_0, struct svc_stat *VAR_1, const struct file_operations *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1->program->pg_name, VAR_1, VAR_2);
}
