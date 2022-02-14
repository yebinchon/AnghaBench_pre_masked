
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exclusive; int pinned; } ;
struct event {TYPE_1__ attr; } ;


 int FUNC_0 (struct event*) ;

void FUNC_1(struct event *VAR_0)
{
 FUNC_0(VAR_0);

 VAR_0->attr.exclusive = 1;
 VAR_0->attr.pinned = 1;
}
