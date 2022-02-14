
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int uid_map; } ;
struct seq_file {struct user_namespace* private; } ;
typedef int loff_t ;


 void* FUNC_0 (struct seq_file*,int *,int *) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_0, loff_t *VAR_1)
{
 struct user_namespace *VAR_2 = VAR_0->private;

 return FUNC_0(VAR_0, VAR_1, &VAR_2->uid_map);
}
