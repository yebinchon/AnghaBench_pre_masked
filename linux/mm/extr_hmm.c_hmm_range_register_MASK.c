
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hmm_range {int valid; int start; int end; int list; struct hmm* hmm; } ;
struct hmm_mirror {struct hmm* hmm; } ;
struct TYPE_2__ {int mm; } ;
struct hmm {int ranges_lock; int notifiers; int ranges; TYPE_1__ mmu_notifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct hmm_range *VAR_3, struct hmm_mirror *VAR_4)
{
 struct hmm *VAR_5 = VAR_4->hmm;
 unsigned long VAR_6;

 VAR_3->valid = 0;
 VAR_3->hmm = ((void*)0);

 if ((VAR_3->start & (VAR_2 - 1)) || (VAR_3->end & (VAR_2 - 1)))
  return -VAR_1;
 if (VAR_3->start >= VAR_3->end)
  return -VAR_1;


 if (!FUNC_1(VAR_5->mmu_notifier.mm))
  return -VAR_0;


 FUNC_2(&VAR_5->ranges_lock, VAR_6);

 VAR_3->hmm = VAR_5;
 FUNC_0(&VAR_3->list, &VAR_5->ranges);





 if (!VAR_5->notifiers)
  VAR_3->valid = 1;
 FUNC_3(&VAR_5->ranges_lock, VAR_6);

 return 0;
}
