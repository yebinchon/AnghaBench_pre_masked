
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct user_namespace {struct user_namespace* parent; } ;
struct uid_gid_extent {int count; int first; int lower_first; } ;
struct seq_file {struct user_namespace* private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct user_namespace*,int ) ;
 int FUNC_2 (struct seq_file*,char*,int ,int ,int ) ;
 struct user_namespace* FUNC_3 (struct seq_file*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 struct user_namespace *VAR_2 = VAR_0->private;
 struct uid_gid_extent *VAR_3 = VAR_1;
 struct user_namespace *VAR_4;
 uid_t VAR_5;

 VAR_4 = FUNC_3(VAR_0);
 if ((VAR_4 == VAR_2) && VAR_4->parent)
  VAR_4 = VAR_4->parent;

 VAR_5 = FUNC_1(VAR_4, FUNC_0(VAR_3->lower_first));

 FUNC_2(VAR_0, "%10u %10u %10u\n",
  VAR_3->first,
  VAR_5,
  VAR_3->count);

 return 0;
}
