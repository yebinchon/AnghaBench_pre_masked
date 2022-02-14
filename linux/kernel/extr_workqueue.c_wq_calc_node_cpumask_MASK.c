
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_attrs {int cpumask; scalar_t__ no_numa; } ;
typedef int cpumask_t ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static bool FUNC_7(const struct workqueue_attrs *VAR_2, int VAR_3,
     int VAR_4, cpumask_t *VAR_5)
{
 if (!VAR_0 || VAR_2->no_numa)
  goto use_dfl;


 FUNC_0(VAR_5, FUNC_5(VAR_3), VAR_2->cpumask);
 if (VAR_4 >= 0)
  FUNC_1(VAR_4, VAR_5);

 if (FUNC_3(VAR_5))
  goto use_dfl;


 FUNC_0(VAR_5, VAR_2->cpumask, VAR_1[VAR_3]);

 if (FUNC_3(VAR_5)) {
  FUNC_6("WARNING: workqueue cpumask: online intersect > "
    "possible intersect\n");
  return 0;
 }

 return !FUNC_4(VAR_5, VAR_2->cpumask);

use_dfl:
 FUNC_2(VAR_5, VAR_2->cpumask);
 return 0;
}
