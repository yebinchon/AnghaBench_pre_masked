
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct posix_cputimers {TYPE_1__* bases; } ;
struct TYPE_2__ {int nextevt; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(const struct posix_cputimers *VAR_3)
{
 return !(~VAR_3->bases[VAR_0].nextevt |
   ~VAR_3->bases[VAR_2].nextevt |
   ~VAR_3->bases[VAR_1].nextevt);
}
