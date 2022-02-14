
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct aa_ns* private; } ;
typedef void aa_profile ;
struct aa_ns {int level; int lock; } ;
typedef scalar_t__ loff_t ;


 void* FUNC_0 (struct aa_ns*,struct aa_ns*) ;
 struct aa_ns* FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 void* FUNC_3 (struct aa_ns*,void*) ;

__attribute__((used)) static void *FUNC_4(struct seq_file *VAR_0, loff_t *VAR_1)
{
 struct aa_profile *VAR_2 = ((void*)0);
 struct aa_ns *VAR_3 = FUNC_1();
 loff_t VAR_4 = *VAR_1;
 VAR_0->private = VAR_3;


 FUNC_2(&VAR_3->lock, VAR_3->level);
 VAR_2 = FUNC_0(VAR_3, VAR_3);


 for (; VAR_2 && VAR_4 > 0; VAR_4--)
  VAR_2 = FUNC_3(VAR_3, VAR_2);

 return VAR_2;
}
