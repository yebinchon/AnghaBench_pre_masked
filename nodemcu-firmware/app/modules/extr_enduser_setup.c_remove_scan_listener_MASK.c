
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ scan_listener_t ;
struct TYPE_6__ {TYPE_1__* scan_listeners; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_2 (scan_listener_t *VAR_1)
{
  FUNC_0("remove_scan_listener");

  if (VAR_0)
  {
    scan_listener_t **VAR_2 = &VAR_0->scan_listeners;
    while (*VAR_2)
    {

      if (*VAR_2 == VAR_1)
      {
        *VAR_2 = VAR_1->next;
        FUNC_1 (VAR_1);

      }
      else
        VAR_2 = &(*VAR_2)->next;
    }
  }
}
