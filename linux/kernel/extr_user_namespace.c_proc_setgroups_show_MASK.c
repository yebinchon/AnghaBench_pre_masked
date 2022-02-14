
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int flags; } ;
struct seq_file {struct user_namespace* private; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int FUNC_1 (struct seq_file*,char*,char*) ;

int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct user_namespace *VAR_3 = VAR_1->private;
 unsigned long VAR_4 = FUNC_0(VAR_3->flags);

 FUNC_1(VAR_1, "%s\n",
     (VAR_4 & VAR_0) ?
     "allow" : "deny");
 return 0;
}
