
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int swp_entry_t ;
struct mm_walk {int mm; struct hmm_vma_walk* private; } ;
struct hmm_vma_walk {unsigned long last; int * pgmap; struct hmm_range* range; } ;
struct hmm_range {int* values; int* flags; } ;
typedef int pte_t ;
typedef int pmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hmm_range*,int ) ;
 int FUNC_3 (struct hmm_vma_walk*,int,int,int*,int*) ;
 int FUNC_4 (unsigned long,unsigned long,int,int,struct mm_walk*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int *,unsigned long) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (struct hmm_range*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int) ;

__attribute__((used)) static int FUNC_21(struct mm_walk *VAR_9, unsigned long VAR_10,
         unsigned long VAR_11, pmd_t *VAR_12, pte_t *VAR_13,
         uint64_t *VAR_14)
{
 struct hmm_vma_walk *VAR_15 = VAR_9->private;
 struct hmm_range *VAR_16 = VAR_15->range;
 bool VAR_17, VAR_18;
 uint64_t VAR_19;
 pte_t VAR_20 = *VAR_13;
 uint64_t VAR_21 = *VAR_14;

 *VAR_14 = VAR_16->values[VAR_5];
 VAR_17 = VAR_18 = 0;

 if (FUNC_11(VAR_20)) {
  FUNC_3(VAR_15, VAR_21, 0,
       &VAR_17, &VAR_18);
  if (VAR_17 || VAR_18)
   goto fault;
  return 0;
 }

 if (!FUNC_13(VAR_20)) {
  swp_entry_t VAR_22 = FUNC_16(VAR_20);

  if (!FUNC_9(VAR_22)) {
   VAR_19 = FUNC_15(VAR_16, VAR_20);
   FUNC_3(VAR_15, VAR_21, VAR_19,
        &VAR_17, &VAR_18);
   if (VAR_17 || VAR_18)
    goto fault;
   return 0;
  }





  if (FUNC_5(VAR_22)) {
   VAR_19 = VAR_16->flags[VAR_7] |
    VAR_16->flags[VAR_3];
   VAR_19 |= FUNC_7(VAR_22) ?
    VAR_16->flags[VAR_8] : 0;
   FUNC_3(VAR_15, VAR_21, VAR_19,
        &VAR_17, &VAR_18);
   if (VAR_17 || VAR_18)
    goto fault;
   *VAR_14 = FUNC_2(VAR_16,
         FUNC_19(VAR_22));
   *VAR_14 |= VAR_19;
   return 0;
  }

  if (FUNC_6(VAR_22)) {
   if (VAR_17 || VAR_18) {
    FUNC_17(VAR_13);
    VAR_15->last = VAR_10;
    FUNC_8(VAR_9->mm, VAR_12, VAR_10);
    return -VAR_1;
   }
   return 0;
  }


  *VAR_14 = VAR_16->values[VAR_4];
  return -VAR_2;
 } else {
  VAR_19 = FUNC_15(VAR_16, VAR_20);
  FUNC_3(VAR_15, VAR_21, VAR_19,
       &VAR_17, &VAR_18);
 }

 if (VAR_17 || VAR_18)
  goto fault;

 if (FUNC_10(VAR_20)) {
  VAR_15->pgmap = FUNC_1(FUNC_12(VAR_20),
           VAR_15->pgmap);
  if (FUNC_20(!VAR_15->pgmap))
   return -VAR_1;
 } else if (FUNC_0(VAR_0) && FUNC_14(VAR_20)) {
  *VAR_14 = VAR_16->values[VAR_6];
  return -VAR_2;
 }

 *VAR_14 = FUNC_2(VAR_16, FUNC_12(VAR_20)) | VAR_19;
 return 0;

fault:
 if (VAR_15->pgmap) {
  FUNC_18(VAR_15->pgmap);
  VAR_15->pgmap = ((void*)0);
 }
 FUNC_17(VAR_13);

 return FUNC_4(VAR_10, VAR_11, VAR_17, VAR_18, VAR_9);
}
