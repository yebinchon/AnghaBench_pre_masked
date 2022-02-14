
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct hmm_vma_walk {int flags; struct hmm_range* range; } ;
struct hmm_range {int pfn_flags_mask; int default_flags; int* flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static inline void FUNC_0(const struct hmm_vma_walk *VAR_4,
          uint64_t VAR_5, uint64_t VAR_6,
          bool *VAR_7, bool *VAR_8)
{
 struct hmm_range *VAR_9 = VAR_4->range;

 if (VAR_4->flags & VAR_0)
  return;
 VAR_5 = (VAR_5 & VAR_9->pfn_flags_mask) | VAR_9->default_flags;


 if (!(VAR_5 & VAR_9->flags[VAR_2]))
  return;

 if ((VAR_6 & VAR_9->flags[VAR_1])) {

  if (VAR_5 & VAR_9->flags[VAR_1]) {
   *VAR_8 = VAR_5 & VAR_9->flags[VAR_3];
   *VAR_7 = 1;
  }
  return;
 }


 *VAR_7 = !(VAR_6 & VAR_9->flags[VAR_2]);

 if ((VAR_5 & VAR_9->flags[VAR_3]) &&
     !(VAR_6 & VAR_9->flags[VAR_3])) {
  *VAR_8 = 1;
  *VAR_7 = 1;
 }
}
