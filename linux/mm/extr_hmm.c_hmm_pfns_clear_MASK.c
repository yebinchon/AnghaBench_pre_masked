
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct hmm_range {int * values; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct hmm_range *VAR_2,
      uint64_t *VAR_3,
      unsigned long VAR_4,
      unsigned long VAR_5)
{
 for (; VAR_4 < VAR_5; VAR_4 += VAR_1, VAR_3++)
  *VAR_3 = VAR_2->values[VAR_0];
}
