
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct idletimer_tg {int work; TYPE_2__ attr; } ;


 struct idletimer_tg* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 struct idletimer_tg* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_1)
{
 struct idletimer_tg *VAR_2 = FUNC_0(VAR_2, VAR_1, VAR_2);

 FUNC_1("timer %s expired\n", VAR_2->attr.attr.name);

 FUNC_2(&VAR_2->work);
}
