
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int orig_mask ;
typedef int mask ;
typedef int cpu_set_t ;
struct TYPE_3__ {int nr_cpus; } ;
struct TYPE_4__ {TYPE_1__ p; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,int *) ;
 int FUNC_5 (int ,int,int *) ;

__attribute__((used)) static cpu_set_t FUNC_6(int VAR_2)
{
 int VAR_3 = VAR_1->p.nr_cpus / FUNC_3();
 cpu_set_t VAR_4, VAR_5;
 int VAR_6;
 int VAR_7;

 FUNC_0(VAR_3 * FUNC_3() != VAR_1->p.nr_cpus);
 FUNC_0(!VAR_3);

 VAR_7 = FUNC_4(0, sizeof(VAR_4), &VAR_4);
 FUNC_0(VAR_7);

 FUNC_2(&VAR_5);

 if (VAR_2 == VAR_0) {
  for (VAR_6 = 0; VAR_6 < VAR_1->p.nr_cpus; VAR_6++)
   FUNC_1(VAR_6, &VAR_5);
 } else {
  int VAR_8 = (VAR_2 + 0) * VAR_3;
  int VAR_9 = (VAR_2 + 1) * VAR_3;

  FUNC_0(VAR_9 > VAR_1->p.nr_cpus);

  for (VAR_6 = VAR_8; VAR_6 < VAR_9; VAR_6++)
   FUNC_1(VAR_6, &VAR_5);
 }

 VAR_7 = FUNC_5(0, sizeof(VAR_5), &VAR_5);
 FUNC_0(VAR_7);

 return VAR_4;
}
