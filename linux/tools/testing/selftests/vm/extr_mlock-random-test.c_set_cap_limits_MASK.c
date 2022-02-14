
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {void* rlim_max; void* rlim_cur; } ;
typedef void* rlim_t ;
typedef int cap_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,struct rlimit*) ;

int FUNC_4(rlim_t VAR_1)
{
 struct rlimit VAR_2;
 cap_t VAR_3 = FUNC_0();

 VAR_2.rlim_cur = VAR_1;
 VAR_2.rlim_max = VAR_1;
 if (FUNC_3(VAR_0, &VAR_2)) {
  FUNC_2("setrlimit() returns error\n");
  return -1;
 }


 if (FUNC_1(VAR_3)) {
  FUNC_2("cap_set_proc() returns error\n");
  return -2;
 }

 return 0;
}
