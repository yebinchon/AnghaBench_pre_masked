
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mask ;
typedef int cpu_set_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (int ,int,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(int VAR_3)
{
 cpu_set_t VAR_4;

 FUNC_1(&VAR_4);
 FUNC_0(VAR_3, &VAR_4);
 if (FUNC_4(0, sizeof(VAR_4), &VAR_4)) {
  if (VAR_1 != VAR_0) {
   FUNC_3(VAR_2, "setaffinity %d\n", VAR_3);
   FUNC_2(1);
  }
  return 1;
 }

 return 0;
}
