
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hmm_range {int valid; struct hmm* hmm; int list; } ;
struct TYPE_2__ {int mm; } ;
struct hmm {TYPE_1__ mmu_notifier; int ranges_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hmm**,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct hmm_range *VAR_1)
{
 struct hmm *VAR_2 = VAR_1->hmm;
 unsigned long VAR_3;

 FUNC_3(&VAR_2->ranges_lock, VAR_3);
 FUNC_0(&VAR_1->list);
 FUNC_4(&VAR_2->ranges_lock, VAR_3);


 FUNC_2(VAR_2->mmu_notifier.mm);






 VAR_1->valid = 0;
 FUNC_1(&VAR_1->hmm, VAR_0, sizeof(VAR_1->hmm));
}
