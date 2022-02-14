
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t mixer_mask; } ;
typedef TYPE_1__ obs_output_t ;


 size_t VAR_0 ;

__attribute__((used)) static inline size_t FUNC_0(const obs_output_t *VAR_1)
{
 for (size_t VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if ((((size_t)1 << VAR_2) & VAR_1->mixer_mask) != 0) {
   return VAR_2;
  }
 }

 return 0;
}
