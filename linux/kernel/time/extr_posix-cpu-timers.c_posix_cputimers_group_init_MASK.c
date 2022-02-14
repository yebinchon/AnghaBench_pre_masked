
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct posix_cputimers {int timers_active; TYPE_1__* bases; } ;
struct TYPE_2__ {int nextevt; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct posix_cputimers*) ;

void FUNC_1(struct posix_cputimers *VAR_3, u64 VAR_4)
{
 FUNC_0(VAR_3);
 if (VAR_4 != VAR_2) {
  VAR_3->bases[VAR_0].nextevt = VAR_4 * VAR_1;
  VAR_3->timers_active = 1;
 }
}
