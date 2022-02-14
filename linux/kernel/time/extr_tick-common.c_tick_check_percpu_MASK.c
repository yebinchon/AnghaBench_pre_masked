
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {scalar_t__ irq; int cpumask; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static bool FUNC_4(struct clock_event_device *VAR_0,
         struct clock_event_device *VAR_1, int VAR_2)
{
 if (!FUNC_2(VAR_2, VAR_1->cpumask))
  return 0;
 if (FUNC_0(VAR_1->cpumask, FUNC_1(VAR_2)))
  return 1;

 if (VAR_1->irq >= 0 && !FUNC_3(VAR_1->irq))
  return 0;

 if (VAR_0 && FUNC_0(VAR_0->cpumask, FUNC_1(VAR_2)))
  return 0;
 return 1;
}
