
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct aa_ns* private; } ;
struct aa_profile {struct aa_ns* ns; } ;
struct aa_ns {int lock; struct aa_ns* parent; } ;


 int FUNC_0 (struct aa_ns*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct aa_profile *VAR_2 = VAR_1;
 struct aa_ns *VAR_3 = VAR_0->private, *VAR_4;

 if (VAR_2) {
  for (VAR_4 = VAR_2->ns; VAR_4 && VAR_4 != VAR_3; VAR_4 = VAR_4->parent)
   FUNC_1(&VAR_4->lock);
 }
 FUNC_1(&VAR_3->lock);
 FUNC_0(VAR_3);
}
