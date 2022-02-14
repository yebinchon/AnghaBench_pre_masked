
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_cur; int rlim_max; } ;
typedef int rlim_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct rlimit*) ;
 scalar_t__ FUNC_1 (int ,struct rlimit*) ;

__attribute__((used)) static rlim_t FUNC_2(void)
{
 struct rlimit VAR_1;
 rlim_t VAR_2 = FUNC_0(VAR_0, &VAR_1);

 if (VAR_2 != 0)
  return 32;

 VAR_2 = VAR_1.rlim_cur;
 VAR_1.rlim_cur = VAR_1.rlim_max;


 if (FUNC_1(VAR_0, &VAR_1) == 0) {
  VAR_2 = VAR_1.rlim_max - (VAR_1.rlim_max >> 2);




  return VAR_2 > 20480 ? 20480 : VAR_2;
 }

 return VAR_2;
}
