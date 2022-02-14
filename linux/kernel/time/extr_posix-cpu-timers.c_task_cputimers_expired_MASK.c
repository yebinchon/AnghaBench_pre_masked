
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct posix_cputimers {TYPE_1__* bases; } ;
struct TYPE_2__ {scalar_t__ const nextevt; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0(const u64 *VAR_1, struct posix_cputimers *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3] >= VAR_2->bases[VAR_3].nextevt)
   return 1;
 }
 return 0;
}
