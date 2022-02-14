
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {scalar_t__ cpumask; int list; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct clock_event_device*,int ) ;
 int VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 () ;
 int FUNC_10 (struct clock_event_device*) ;

void FUNC_11(struct clock_event_device *VAR_5)
{
 unsigned long VAR_6;


 FUNC_2(VAR_5, VAR_0);

 if (!VAR_5->cpumask) {
  FUNC_1(FUNC_6() > 1);
  VAR_5->cpumask = FUNC_4(FUNC_9());
 }

 if (VAR_5->cpumask == VAR_3) {
  FUNC_0(1, "%s cpumask == cpu_all_mask, using cpu_possible_mask instead\n",
       VAR_5->name);
  VAR_5->cpumask = VAR_4;
 }

 FUNC_7(&VAR_2, VAR_6);

 FUNC_5(&VAR_5->list, &VAR_1);
 FUNC_10(VAR_5);
 FUNC_3();

 FUNC_8(&VAR_2, VAR_6);
}
