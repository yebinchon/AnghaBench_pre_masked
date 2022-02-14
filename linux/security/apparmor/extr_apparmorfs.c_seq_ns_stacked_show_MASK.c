
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct aa_label {int size; } ;


 struct aa_label* FUNC_0 () ;
 int FUNC_1 (struct aa_label*) ;
 int FUNC_2 (struct seq_file*,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct aa_label *VAR_2;

 VAR_2 = FUNC_0();
 FUNC_2(VAR_0, "%s\n", VAR_2->size > 1 ? "yes" : "no");
 FUNC_1(VAR_2);

 return 0;
}
