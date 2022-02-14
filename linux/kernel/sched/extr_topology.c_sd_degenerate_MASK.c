
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sched_domain {int flags; TYPE_1__* groups; } ;
struct TYPE_2__ {struct TYPE_2__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sched_domain*) ;

__attribute__((used)) static int FUNC_2(struct sched_domain *VAR_9)
{
 if (FUNC_0(FUNC_1(VAR_9)) == 1)
  return 1;


 if (VAR_9->flags & (VAR_4 |
    VAR_3 |
    VAR_2 |
    VAR_1 |
    VAR_5 |
    VAR_0 |
    VAR_6 |
    VAR_7)) {
  if (VAR_9->groups != VAR_9->groups->next)
   return 0;
 }


 if (VAR_9->flags & (VAR_8))
  return 0;

 return 1;
}
