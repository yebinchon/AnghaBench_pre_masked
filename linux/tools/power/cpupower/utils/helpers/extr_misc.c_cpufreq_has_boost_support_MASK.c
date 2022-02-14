
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpupower_cpu_info {int family; } ;
struct TYPE_2__ {int caps; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (struct cpupower_cpu_info*) ;
 int FUNC_2 (unsigned int,int ,unsigned long long*) ;

int FUNC_3(unsigned int VAR_5, int *VAR_6, int *VAR_7,
   int *VAR_8)
{
 struct cpupower_cpu_info VAR_9;
 int VAR_10;
 unsigned long long VAR_11;

 *VAR_6 = *VAR_7 = *VAR_8 = 0;

 VAR_10 = FUNC_1(&VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_4.caps & VAR_1) {
  *VAR_6 = 1;






  if (VAR_9.family == 0x17 || VAR_9.family == 0x18) {
   if (!FUNC_2(VAR_5, VAR_3, &VAR_11)) {
    if (!(VAR_11 & VAR_0))
     *VAR_7 = 1;
   }
  } else {
   VAR_10 = FUNC_0(VAR_7, VAR_8);
   if (VAR_10)
    return VAR_10;
  }
 } else if (VAR_4.caps & VAR_2)
  *VAR_6 = *VAR_7 = 1;
 return 0;
}
