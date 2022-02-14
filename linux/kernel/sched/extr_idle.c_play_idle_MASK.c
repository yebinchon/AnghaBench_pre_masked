
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int function; } ;
struct idle_timer {scalar_t__ done; TYPE_1__ timer; } ;
struct TYPE_5__ {scalar_t__ policy; int nr_cpus_allowed; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_3__* VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int VAR_9 ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;

void FUNC_11(unsigned long VAR_10)
{
 struct idle_timer VAR_11;





 FUNC_1(VAR_8->policy != VAR_7);
 FUNC_1(VAR_8->nr_cpus_allowed != 1);
 FUNC_1(!(VAR_8->flags & VAR_5));
 FUNC_1(!(VAR_8->flags & VAR_6));
 FUNC_1(!VAR_10);

 FUNC_10();
 FUNC_7();
 VAR_8->flags |= VAR_4;
 FUNC_2(1);

 VAR_11.done = 0;
 FUNC_4(&VAR_11.timer, VAR_0, VAR_1);
 VAR_11.timer.function = VAR_9;
 FUNC_5(&VAR_11.timer, FUNC_6(VAR_10 * VAR_3),
        VAR_2);

 while (!FUNC_0(VAR_11.done))
  FUNC_3();

 FUNC_2(0);
 VAR_8->flags &= ~VAR_4;

 FUNC_9();
 FUNC_8();
}
