
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ipv6_medium_evt_id; } ;
typedef TYPE_1__ ipv6_medium_evt_t ;


 int FUNC_0 (char*) ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(ipv6_medium_evt_t * VAR_2)
{
  switch (VAR_2->ipv6_medium_evt_id)
  {
    case 128:
      {
        FUNC_0("[APPL]: Physical layer: connected.\r\n");
        FUNC_1(VAR_0);
        FUNC_2(VAR_1);
        break;
      }
    case 129:
      {
        FUNC_0("[APPL]: Physical layer: disconnected.\r\n");
        FUNC_3();
        break;
      }
    default:
      {
        break;
      }
  }
}
