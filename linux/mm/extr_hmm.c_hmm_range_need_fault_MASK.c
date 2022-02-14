
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct hmm_vma_walk {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct hmm_vma_walk const*,int const,int ,int*,int*) ;

__attribute__((used)) static void FUNC_1(const struct hmm_vma_walk *VAR_1,
     const uint64_t *VAR_2, unsigned long VAR_3,
     uint64_t VAR_4, bool *VAR_5,
     bool *VAR_6)
{
 unsigned long VAR_7;

 if (VAR_1->flags & VAR_0) {
  *VAR_5 = *VAR_6 = 0;
  return;
 }

 *VAR_5 = *VAR_6 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
  FUNC_0(VAR_1, VAR_2[VAR_7], VAR_4,
       VAR_5, VAR_6);
  if ((*VAR_6))
   return;
 }
}
