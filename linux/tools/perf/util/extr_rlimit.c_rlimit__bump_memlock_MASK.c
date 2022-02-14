
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_cur; int rlim_max; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct rlimit*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,struct rlimit*) ;

void FUNC_3(void)
{
 struct rlimit VAR_1;

 if (FUNC_0(VAR_0, &VAR_1) == 0) {
  VAR_1.rlim_cur *= 4;
  VAR_1.rlim_max *= 4;

  if (FUNC_2(VAR_0, &VAR_1) < 0) {
   VAR_1.rlim_cur /= 2;
   VAR_1.rlim_max /= 2;

   if (FUNC_2(VAR_0, &VAR_1) < 0)
    FUNC_1("Couldn't bump rlimit(MEMLOCK), failures may take place when creating BPF maps, etc\n");
  }
 }
}
