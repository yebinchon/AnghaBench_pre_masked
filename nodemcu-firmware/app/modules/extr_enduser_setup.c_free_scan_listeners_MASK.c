
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ scan_listener_t ;
struct TYPE_5__ {TYPE_1__* scan_listeners; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_2 (void)
{
  FUNC_0("free_scan_listeners");

  if (!VAR_0 || !VAR_0->scan_listeners)
  {
    return;
  }

  scan_listener_t *VAR_1 = VAR_0->scan_listeners , *VAR_2 = 0;
  while (VAR_1)
  {
    VAR_2 = VAR_1->next;
    FUNC_1 (VAR_1);
    VAR_1 = VAR_2;
  }
  VAR_0->scan_listeners = 0;
}
