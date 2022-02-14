
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int evt_id; } ;
struct TYPE_5__ {TYPE_1__ header; } ;
typedef TYPE_2__ ble_evt_t ;


 int FUNC_0 (char*) ;


 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(ble_evt_t * VAR_0)
{
  switch (VAR_0->header.evt_id)
  {
    case 129:
      FUNC_0 ("[APPL]: Connected.\r\n");
      break;
    case 128:
      FUNC_0 ("[APPL]: Disconnected.\r\n");
      FUNC_1();
      break;
    default:
      break;
  }
}
