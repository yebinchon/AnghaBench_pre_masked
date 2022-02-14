
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct aa_ns* private; } ;
struct aa_profile {int dummy; } ;
struct aa_ns {int dummy; } ;
typedef int loff_t ;


 void* FUNC_0 (struct aa_ns*,struct aa_profile*) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 struct aa_profile *VAR_3 = VAR_1;
 struct aa_ns *VAR_4 = VAR_0->private;
 (*VAR_2)++;

 return FUNC_0(VAR_4, VAR_3);
}
