
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct hmm_range {int* flags; } ;
typedef int pte_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline uint64_t FUNC_4(struct hmm_range *VAR_2, pte_t VAR_3)
{
 if (FUNC_0(VAR_3) || !FUNC_1(VAR_3) || FUNC_2(VAR_3))
  return 0;
 return FUNC_3(VAR_3) ? VAR_2->flags[VAR_0] |
    VAR_2->flags[VAR_1] :
    VAR_2->flags[VAR_0];
}
