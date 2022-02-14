
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
 TYPE_2__* VAR_0 ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,int,int *) ;

__attribute__((used)) static cpu_set_t FUNC_5(int VAR_1)
{
 cpu_set_t VAR_2, VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(0, sizeof(VAR_2), &VAR_2);
 FUNC_0(VAR_4);

 FUNC_2(&VAR_3);

 if (VAR_1 == -1) {
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_0->p.nr_cpus; VAR_5++)
   FUNC_1(VAR_5, &VAR_3);
 } else {
  FUNC_0(VAR_1 < 0 || VAR_1 >= VAR_0->p.nr_cpus);
  FUNC_1(VAR_1, &VAR_3);
 }

 VAR_4 = FUNC_4(0, sizeof(VAR_3), &VAR_3);
 FUNC_0(VAR_4);

 return VAR_2;
}
