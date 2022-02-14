
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ addr; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
struct TYPE_4__ {scalar_t__ addr; } ;
struct ip_info {TYPE_3__ gw; TYPE_2__ netmask; TYPE_1__ ip; } ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (scalar_t__,struct ip_info*) ;
 int FUNC_5 (scalar_t__,struct ip_info*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9( lua_State* VAR_2, uint8_t VAR_3 )
{
  struct ip_info VAR_4;
  FUNC_4(VAR_3, &VAR_4);

  if (!FUNC_1(VAR_2, 1))
    return FUNC_0( VAR_2, "wrong arg type" );
  uint32_t VAR_5 = FUNC_3(VAR_2, "ip");
  if(VAR_5!=0)
    VAR_4.ip.addr = VAR_5;

  VAR_5 = FUNC_3(VAR_2, "netmask");
  if(VAR_5!=0)
    VAR_4.netmask.addr = VAR_5;

  VAR_5 = FUNC_3(VAR_2, "gateway");
  if(VAR_3==VAR_0 || VAR_5!=0)
    VAR_4.gw.addr = VAR_5;

  if(VAR_1 == VAR_3)
  {
    FUNC_8();
    FUNC_2(VAR_2,FUNC_5(VAR_3, &VAR_4));
  }
  else
  {
    FUNC_7();
    FUNC_2(VAR_2,FUNC_5(VAR_3, &VAR_4));
    FUNC_6();
  }

  return 1;
}
