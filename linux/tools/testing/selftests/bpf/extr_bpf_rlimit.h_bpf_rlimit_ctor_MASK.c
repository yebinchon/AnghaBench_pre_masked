
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {scalar_t__ rlim_max; scalar_t__ rlim_cur; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct rlimit*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,struct rlimit*) ;

__attribute__((used)) static __attribute__((constructor)) void FUNC_3(void)
{
 struct rlimit VAR_2, VAR_3 = {
  .rlim_cur = VAR_1,
  .rlim_max = VAR_1,
 };

 FUNC_0(VAR_0, &VAR_2);







 if (FUNC_2(VAR_0, &VAR_3) < 0) {
  FUNC_1("Unable to lift memlock rlimit");



  VAR_3.rlim_cur = VAR_2.rlim_cur + (1UL << 20);
  VAR_3.rlim_max = VAR_2.rlim_max + (1UL << 20);
  FUNC_2(VAR_0, &VAR_3);
 }
}
