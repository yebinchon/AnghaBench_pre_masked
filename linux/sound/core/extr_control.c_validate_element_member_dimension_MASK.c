
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* d; } ;
struct snd_ctl_elem_info {unsigned int count; TYPE_1__ dimen; } ;


 unsigned int FUNC_0 (unsigned int*) ;

__attribute__((used)) static bool FUNC_1(struct snd_ctl_elem_info *VAR_0)
{
 unsigned int VAR_1;
 unsigned int VAR_2;

 if (VAR_0->dimen.d[0] == 0)
  return 1;

 VAR_1 = 1;
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->dimen.d); ++VAR_2) {
  if (VAR_0->dimen.d[VAR_2] == 0)
   break;
  VAR_1 *= VAR_0->dimen.d[VAR_2];





  if (VAR_1 > VAR_0->count)
   return 0;
 }

 for (++VAR_2; VAR_2 < FUNC_0(VAR_0->dimen.d); ++VAR_2) {
  if (VAR_0->dimen.d[VAR_2] > 0)
   return 0;
 }

 return VAR_1 == VAR_0->count;
}
