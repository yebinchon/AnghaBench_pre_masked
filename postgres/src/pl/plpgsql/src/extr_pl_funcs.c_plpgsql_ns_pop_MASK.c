
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ itemtype; struct TYPE_2__* prev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

void
FUNC_1(void)
{
 FUNC_0(VAR_1 != ((void*)0));
 while (VAR_1->itemtype != VAR_0)
  VAR_1 = VAR_1->prev;
 VAR_1 = VAR_1->prev;
}
