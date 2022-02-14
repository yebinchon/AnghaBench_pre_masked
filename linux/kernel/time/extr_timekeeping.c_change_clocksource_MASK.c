
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct clocksource* clock; } ;
struct timekeeper {TYPE_1__ tkr_mono; } ;
struct clocksource {scalar_t__ (* enable ) (struct clocksource*) ;int owner; int (* disable ) (struct clocksource*) ;} ;
struct TYPE_4__ {int seq; struct timekeeper timekeeper; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (struct clocksource*) ;
 int FUNC_4 (struct clocksource*) ;
 int VAR_3 ;
 int FUNC_5 (struct timekeeper*) ;
 int FUNC_6 (struct timekeeper*,int) ;
 TYPE_2__ VAR_4 ;
 int FUNC_7 (struct timekeeper*,struct clocksource*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(void *VAR_5)
{
 struct timekeeper *VAR_6 = &VAR_4.timekeeper;
 struct clocksource *VAR_7, *VAR_8;
 unsigned long VAR_9;

 VAR_7 = (struct clocksource *) VAR_5;

 FUNC_1(&VAR_3, VAR_9);
 FUNC_9(&VAR_4.seq);

 FUNC_5(VAR_6);




 if (FUNC_8(VAR_7->owner)) {
  if (!VAR_7->enable || VAR_7->enable(VAR_7) == 0) {
   VAR_8 = VAR_6->tkr_mono.clock;
   FUNC_7(VAR_6, VAR_7);
   if (VAR_8->disable)
    VAR_8->disable(VAR_8);
   FUNC_0(VAR_8->owner);
  } else {
   FUNC_0(VAR_7->owner);
  }
 }
 FUNC_6(VAR_6, VAR_0 | VAR_2 | VAR_1);

 FUNC_10(&VAR_4.seq);
 FUNC_2(&VAR_3, VAR_9);

 return 0;
}
