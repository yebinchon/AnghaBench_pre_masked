
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct clocksource* clock; } ;
struct timekeeper {TYPE_1__ tkr_mono; } ;
struct clocksource {int dummy; } ;
struct TYPE_4__ {struct timekeeper timekeeper; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct clocksource*,int *) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_1 ;

int FUNC_2(struct clocksource *VAR_2)
{
 struct timekeeper *VAR_3 = &VAR_1.timekeeper;

 if (VAR_3->tkr_mono.clock == VAR_2)
  return 0;
 FUNC_0(VAR_0, VAR_2, ((void*)0));
 FUNC_1();
 return VAR_3->tkr_mono.clock == VAR_2 ? 0 : -1;
}
