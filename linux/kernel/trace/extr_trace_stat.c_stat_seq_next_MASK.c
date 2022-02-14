
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat_session {int stat_root; } ;
struct seq_file {struct stat_session* private; } ;
struct rb_node {int dummy; } ;
typedef int loff_t ;


 void* VAR_0 ;
 void* FUNC_0 (int *) ;
 void* FUNC_1 (struct rb_node*) ;

__attribute__((used)) static void *FUNC_2(struct seq_file *VAR_1, void *VAR_2, loff_t *VAR_3)
{
 struct stat_session *VAR_4 = VAR_1->private;
 struct rb_node *VAR_5 = VAR_2;

 (*VAR_3)++;

 if (VAR_2 == VAR_0)
  return FUNC_0(&VAR_4->stat_root);

 return FUNC_1(VAR_5);
}
