
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int args; struct tep_event* format; } ;
struct tep_event {TYPE_1__ print_fmt; int format; struct tep_event* system; struct tep_event* name; } ;


 int FUNC_0 (struct tep_event*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct tep_event *VAR_0)
{
 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0->system);

 FUNC_2(&VAR_0->format);

 FUNC_0(VAR_0->print_fmt.format);
 FUNC_1(VAR_0->print_fmt.args);

 FUNC_0(VAR_0);
}
