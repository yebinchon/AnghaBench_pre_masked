
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct bss_info* stqe_next; } ;
struct bss_info {scalar_t__ rssi; int channel; TYPE_1__ next; } ;
typedef scalar_t__ int8_t ;
struct TYPE_4__ {int softAPchannel; } ;
typedef scalar_t__ STATUS ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_3 (void *VAR_2, STATUS VAR_3)
{
  FUNC_0("on_initial_scan_done");

  if (VAR_1 == ((void*)0))
  {
    return;
  }

  int8_t VAR_4 = -100;

  if (VAR_3 == VAR_0)
  {
    for (struct bss_info *VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->next.stqe_next)
    {
      if (VAR_5->rssi > VAR_4)
      {
        VAR_1->softAPchannel = VAR_5->channel;
        VAR_4 = VAR_5->rssi;
      }
    }
  }

  FUNC_1();
  FUNC_2();
}
