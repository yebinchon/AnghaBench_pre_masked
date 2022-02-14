
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rlimit {scalar_t__ rlim_cur; scalar_t__ rlim_max; } ;
struct TYPE_3__ {scalar_t__ rlim_cur; scalar_t__ rlim_max; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ,struct rlimit*) ;

__attribute__((used)) static __attribute__((constructor)) void FUNC_2(void)
{
 FUNC_0(VAR_0, &VAR_2);

 if (VAR_2.rlim_cur != VAR_1) {
  struct rlimit VAR_3;

  VAR_3.rlim_cur = VAR_2.rlim_cur + (1UL << 20);
  VAR_3.rlim_max = VAR_2.rlim_max + (1UL << 20);
  FUNC_1(VAR_0, &VAR_3);
 }
}
