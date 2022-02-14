
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pprev; } ;
struct timer_list {void (* function ) (struct timer_list*) ;unsigned int flags; int lockdep_map; TYPE_1__ entry; } ;
struct lock_class_key {int dummy; } ;


 int FUNC_0 (int *,char const*,struct lock_class_key*,int ) ;
 unsigned int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_0,
     void (*VAR_1)(struct timer_list *),
     unsigned int VAR_2,
     const char *VAR_3, struct lock_class_key *VAR_4)
{
 VAR_0->entry.pprev = ((void*)0);
 VAR_0->function = VAR_1;
 VAR_0->flags = VAR_2 | FUNC_1();
 FUNC_0(&VAR_0->lockdep_map, VAR_3, VAR_4, 0);
}
