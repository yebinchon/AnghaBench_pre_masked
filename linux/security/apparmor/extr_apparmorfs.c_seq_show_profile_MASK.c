
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct aa_ns* private; } ;
struct aa_profile {int label; } ;
struct aa_ns {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct seq_file*,struct aa_ns*,int *,int,int ) ;
 int FUNC_1 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_3, void *VAR_4)
{
 struct aa_profile *VAR_5 = (struct aa_profile *)VAR_4;
 struct aa_ns *VAR_6 = VAR_3->private;

 FUNC_0(VAR_3, VAR_6, &VAR_5->label,
       VAR_0 | VAR_1, VAR_2);
 FUNC_1(VAR_3, '\n');

 return 0;
}
