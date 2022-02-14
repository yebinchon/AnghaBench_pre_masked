
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int set ;
typedef int cpu_set_t ;


 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int,int *) ;

__attribute__((used)) static void FUNC_4(unsigned int *VAR_0, unsigned int *VAR_1)
{
 unsigned int VAR_2;

 *VAR_0 = -1U;
 *VAR_1 = 0;
 for (VAR_2 = 0; VAR_2 < 4096; VAR_2++) {
  cpu_set_t VAR_3;
  FUNC_1(&VAR_3);
  FUNC_0(VAR_2, &VAR_3);
  if (FUNC_3(FUNC_2(), sizeof(VAR_3), &VAR_3) == 0) {
   if (VAR_2 < *VAR_0)
    *VAR_0 = VAR_2;
   if (VAR_2 > *VAR_1)
    *VAR_1 = VAR_2;
  }
 }
}
