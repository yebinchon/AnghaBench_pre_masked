
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpumask {int dummy; } ;
struct TYPE_2__ {int cpus_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpumask*,int ,int ) ;
 int FUNC_1 (struct cpumask*) ;
 int FUNC_2 (struct cpumask*,int ) ;
 int FUNC_3 (struct cpumask*) ;
 int FUNC_4 (int ,struct cpumask*) ;
 int FUNC_5 (int,struct cpumask*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_6 () ;
 int VAR_3 ;
 int FUNC_7 () ;
 struct cpumask VAR_4 ;
 int FUNC_8 (int ,struct cpumask*) ;
 int FUNC_9 () ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_10(void)
{
 struct cpumask *VAR_6 = &VAR_4;
 int VAR_7;

 if (VAR_2)
  return;





 if (!FUNC_2(VAR_6, VAR_1->cpus_ptr))
  goto disable;

 FUNC_6();
 FUNC_0(VAR_6, VAR_0, VAR_5);
 VAR_7 = FUNC_4(FUNC_9(), VAR_6);
 FUNC_7();

 if (VAR_7 >= VAR_3)
  VAR_7 = FUNC_3(VAR_6);

 if (VAR_7 >= VAR_3)
  goto disable;

 FUNC_1(VAR_6);
 FUNC_5(VAR_7, VAR_6);

 FUNC_8(0, VAR_6);
 return;

 disable:
 VAR_2 = 1;
}
