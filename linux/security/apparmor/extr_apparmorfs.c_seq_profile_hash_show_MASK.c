
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct aa_proxy* private; } ;
struct aa_proxy {int label; } ;
struct aa_profile {int * hash; } ;
struct aa_label {int dummy; } ;


 struct aa_label* FUNC_0 (int *) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (struct aa_label*) ;
 struct aa_profile* FUNC_3 (struct aa_label*) ;
 int FUNC_4 (struct seq_file*,char*,int ) ;
 int FUNC_5 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_0, void *VAR_1)
{
 struct aa_proxy *VAR_2 = VAR_0->private;
 struct aa_label *VAR_3 = FUNC_0(&VAR_2->label);
 struct aa_profile *VAR_4 = FUNC_3(VAR_3);
 unsigned int VAR_5, VAR_6 = FUNC_1();

 if (VAR_4->hash) {
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
   FUNC_4(VAR_0, "%.2x", VAR_4->hash[VAR_5]);
  FUNC_5(VAR_0, '\n');
 }
 FUNC_2(VAR_3);

 return 0;
}
