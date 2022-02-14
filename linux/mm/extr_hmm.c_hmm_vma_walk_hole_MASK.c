
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mm_walk {struct hmm_vma_walk* private; } ;
struct hmm_vma_walk {struct hmm_range* range; } ;
struct hmm_range {unsigned long start; int * pfns; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct hmm_vma_walk*,int *,unsigned long,int ,int*,int*) ;
 int FUNC_1 (unsigned long,unsigned long,int,int,struct mm_walk*) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_1, unsigned long VAR_2,
        struct mm_walk *VAR_3)
{
 struct hmm_vma_walk *VAR_4 = VAR_3->private;
 struct hmm_range *VAR_5 = VAR_4->range;
 bool VAR_6, VAR_7;
 unsigned long VAR_8, VAR_9;
 uint64_t *VAR_10;

 VAR_8 = (VAR_1 - VAR_5->start) >> VAR_0;
 VAR_9 = (VAR_2 - VAR_1) >> VAR_0;
 VAR_10 = &VAR_5->pfns[VAR_8];
 FUNC_0(VAR_4, VAR_10, VAR_9,
        0, &VAR_6, &VAR_7);
 return FUNC_1(VAR_1, VAR_2, VAR_6, VAR_7, VAR_3);
}
