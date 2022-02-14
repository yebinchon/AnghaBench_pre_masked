
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct posix_cputimers {int dummy; } ;
struct signal_struct {TYPE_1__* rlim; struct posix_cputimers posix_cputimers; } ;
struct TYPE_2__ {int rlim_cur; } ;


 unsigned long FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (struct posix_cputimers*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct signal_struct *VAR_1)
{
 struct posix_cputimers *VAR_2 = &VAR_1->posix_cputimers;
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_1->rlim[VAR_0].rlim_cur);
 FUNC_1(VAR_2, VAR_3);
}
