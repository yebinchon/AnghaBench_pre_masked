
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32 ;
struct TYPE_3__ {int addr; } ;
struct TYPE_4__ {int addr; } ;
struct ip_info {TYPE_1__ netmask; TYPE_2__ ip; } ;
struct ip_addr {int addr; } ;
typedef int lua_State ;


 int FUNC_0 (struct ip_addr*) ;
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
    struct ip_addr VAR_4;

    uint32 VAR_5 = VAR_2.netmask.addr & VAR_2.ip.addr;
    uint32 VAR_6 = ~VAR_2.netmask.addr | VAR_5;
    VAR_4.addr = VAR_6;

    FUNC_3(VAR_3, "%d.%d.%d.%d", FUNC_0(&VAR_4) );
    FUNC_2( VAR_0, VAR_3 );

    return 1;
  }
}
