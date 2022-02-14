
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit64 {scalar_t__ rlim_max; scalar_t__ rlim_cur; } ;
struct rlimit {unsigned long rlim_cur; unsigned long rlim_max; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(const struct rlimit64 *VAR_1, struct rlimit *VAR_2)
{
 if (FUNC_0(VAR_1->rlim_cur))
  VAR_2->rlim_cur = VAR_0;
 else
  VAR_2->rlim_cur = (unsigned long)VAR_1->rlim_cur;
 if (FUNC_0(VAR_1->rlim_max))
  VAR_2->rlim_max = VAR_0;
 else
  VAR_2->rlim_max = (unsigned long)VAR_1->rlim_max;
}
