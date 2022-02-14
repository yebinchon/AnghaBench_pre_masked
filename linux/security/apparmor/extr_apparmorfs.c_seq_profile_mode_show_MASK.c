
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct aa_proxy* private; } ;
struct aa_proxy {int label; } ;
struct aa_profile {size_t mode; } ;
struct aa_label {int dummy; } ;


 struct aa_label* FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (struct aa_label*) ;
 struct aa_profile* FUNC_2 (struct aa_label*) ;
 int FUNC_3 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 struct aa_proxy *VAR_3 = VAR_1->private;
 struct aa_label *VAR_4 = FUNC_0(&VAR_3->label);
 struct aa_profile *VAR_5 = FUNC_2(VAR_4);
 FUNC_3(VAR_1, "%s\n", VAR_0[VAR_5->mode]);
 FUNC_1(VAR_4);

 return 0;
}
