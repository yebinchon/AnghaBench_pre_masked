
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpuset ;
typedef int cpu_set_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int,int,int *) ;

__attribute__((used)) static int FUNC_3(int VAR_1, int *VAR_2)
{
 cpu_set_t VAR_3;
 int VAR_4 = *VAR_2;
 int VAR_5 = -1;

 while (VAR_4 < VAR_0) {
  FUNC_1(&VAR_3);
  FUNC_0(VAR_4++, &VAR_3);
  if (!FUNC_2(VAR_1, sizeof(VAR_3), &VAR_3)) {
   VAR_5 = 0;
   break;
  }
 }

 *VAR_2 = VAR_4;
 return VAR_5;
}
