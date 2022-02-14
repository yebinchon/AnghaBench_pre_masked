
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpupri_vec {int mask; int count; } ;
struct cpupri {int* cpu_to_pri; struct cpupri_vec* pri_to_cpu; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

void FUNC_9(struct cpupri *VAR_2, int VAR_3, int VAR_4)
{
 int *VAR_5 = &VAR_2->cpu_to_pri[VAR_3];
 int VAR_6 = *VAR_5;
 int VAR_7 = 0;

 VAR_4 = FUNC_3(VAR_4);

 FUNC_0(VAR_4 >= VAR_1);

 if (VAR_4 == VAR_6)
  return;







 if (FUNC_6(VAR_4 != VAR_0)) {
  struct cpupri_vec *VAR_8 = &VAR_2->pri_to_cpu[VAR_4];

  FUNC_5(VAR_3, VAR_8->mask);





  FUNC_8();
  FUNC_2(&(VAR_8)->count);
  VAR_7 = 1;
 }
 if (FUNC_6(VAR_6 != VAR_0)) {
  struct cpupri_vec *VAR_9 = &VAR_2->pri_to_cpu[VAR_6];
  if (VAR_7)
   FUNC_7();





  FUNC_1(&(VAR_9)->count);
  FUNC_7();
  FUNC_4(VAR_3, VAR_9->mask);
 }

 *VAR_5 = VAR_4;
}
