
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit64 {scalar_t__ rlim_cur; scalar_t__ rlim_max; } ;
struct rlimit {scalar_t__ rlim_cur; scalar_t__ rlim_max; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(const struct rlimit *VAR_2, struct rlimit64 *VAR_3)
{
 if (VAR_2->rlim_cur == VAR_1)
  VAR_3->rlim_cur = VAR_0;
 else
  VAR_3->rlim_cur = VAR_2->rlim_cur;
 if (VAR_2->rlim_max == VAR_1)
  VAR_3->rlim_max = VAR_0;
 else
  VAR_3->rlim_max = VAR_2->rlim_max;
}
