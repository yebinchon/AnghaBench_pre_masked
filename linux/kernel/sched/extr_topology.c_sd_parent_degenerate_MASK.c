
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sched_domain {unsigned long flags; TYPE_1__* groups; } ;
struct TYPE_2__ {struct TYPE_2__* next; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int VAR_10 ;
 int FUNC_1 (struct sched_domain*) ;
 scalar_t__ FUNC_2 (struct sched_domain*) ;

__attribute__((used)) static int
FUNC_3(struct sched_domain *VAR_11, struct sched_domain *VAR_12)
{
 unsigned long VAR_13 = VAR_11->flags, VAR_14 = VAR_12->flags;

 if (FUNC_2(VAR_12))
  return 1;

 if (!FUNC_0(FUNC_1(VAR_11), FUNC_1(VAR_12)))
  return 0;


 if (VAR_12->groups == VAR_12->groups->next) {
  VAR_14 &= ~(VAR_4 |
    VAR_3 |
    VAR_2 |
    VAR_1 |
    VAR_0 |
    VAR_7 |
    VAR_8 |
    VAR_5 |
    VAR_9);
  if (VAR_10 == 1)
   VAR_14 &= ~VAR_6;
 }
 if (~VAR_13 & VAR_14)
  return 0;

 return 1;
}
