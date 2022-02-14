
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hmm_mirror {int list; struct hmm* hmm; } ;
struct hmm {int mmu_notifier; int mirrors_sem; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct hmm_mirror *VAR_0)
{
 struct hmm *VAR_1 = VAR_0->hmm;

 FUNC_0(&VAR_1->mirrors_sem);
 FUNC_1(&VAR_0->list);
 FUNC_3(&VAR_1->mirrors_sem);
 FUNC_2(&VAR_1->mmu_notifier);
}
