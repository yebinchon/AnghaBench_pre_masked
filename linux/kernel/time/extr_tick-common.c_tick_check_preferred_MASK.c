
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int features; scalar_t__ rating; int cpumask; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static bool FUNC_2(struct clock_event_device *VAR_1,
     struct clock_event_device *VAR_2)
{

 if (!(VAR_2->features & VAR_0)) {
  if (VAR_1 && (VAR_1->features & VAR_0))
   return 0;
  if (FUNC_1())
   return 0;
 }





 return !VAR_1 ||
  VAR_2->rating > VAR_1->rating ||
        !FUNC_0(VAR_1->cpumask, VAR_2->cpumask);
}
