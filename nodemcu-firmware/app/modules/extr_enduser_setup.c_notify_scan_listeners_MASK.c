
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ conn; struct TYPE_3__* next; } ;
typedef TYPE_1__ scan_listener_t ;
struct TYPE_4__ {TYPE_1__* scan_listeners; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,char const*,size_t,int ) ;

__attribute__((used)) static void FUNC_5 (const char *VAR_4, size_t VAR_5)
{
  FUNC_0("notify_scan_listeners");

  if (!VAR_3)
  {
    return;
  }

  for (scan_listener_t *VAR_6 = VAR_3->scan_listeners; VAR_6; VAR_6 = VAR_6->next)
  {
    if (FUNC_4 (VAR_6->conn, VAR_4, VAR_5, VAR_1) != VAR_0)
    {
      FUNC_0("failed to send wifi list");
      FUNC_2 (VAR_6->conn);
    }
    else
      FUNC_3 (VAR_6->conn, VAR_2);
    VAR_6->conn = 0;
  }

  FUNC_1 ();
}
