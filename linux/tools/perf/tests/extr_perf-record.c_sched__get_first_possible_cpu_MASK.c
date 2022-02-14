
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int cpu_set_t ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int,int *) ;

__attribute__((used)) static int FUNC_5(pid_t VAR_2, cpu_set_t *VAR_3)
{
 int VAR_4, VAR_5 = -1, VAR_6 = 1024;
realloc:
 FUNC_2(VAR_3);

 if (FUNC_4(VAR_2, sizeof(*VAR_3), VAR_3) == -1) {
  if (VAR_1 == VAR_0 && VAR_6 < (1024 << 8)) {
   VAR_6 = VAR_6 << 2;
   goto realloc;
  }
  FUNC_3("sched_getaffinity");
   return -1;
 }

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  if (FUNC_1(VAR_4, VAR_3)) {
   if (VAR_5 == -1)
    VAR_5 = VAR_4;
   else
    FUNC_0(VAR_4, VAR_3);
  }
 }

 return VAR_5;
}
