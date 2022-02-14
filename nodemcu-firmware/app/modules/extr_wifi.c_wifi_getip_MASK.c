
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ addr; } ;
struct ip_info {TYPE_1__ gw; TYPE_1__ netmask; TYPE_1__ ip; } ;
typedef int lua_State ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,struct ip_info*) ;

__attribute__((used)) static int FUNC_5( lua_State* VAR_0, uint8_t VAR_1 )
{
  struct ip_info VAR_2;
  char VAR_3[64];
  FUNC_4(VAR_1, &VAR_2);
  if(VAR_2.ip.addr==0){
    FUNC_1(VAR_0);
    return 1;
  }
  else
  {
    FUNC_3(VAR_3, "%d.%d.%d.%d", FUNC_0(&VAR_2.ip) );
    FUNC_2( VAR_0, VAR_3 );
    FUNC_3(VAR_3, "%d.%d.%d.%d", FUNC_0(&VAR_2.netmask) );
    FUNC_2( VAR_0, VAR_3 );
    FUNC_3(VAR_3, "%d.%d.%d.%d", FUNC_0(&VAR_2.gw) );
    FUNC_2( VAR_0, VAR_3 );
    return 3;
  }
}
