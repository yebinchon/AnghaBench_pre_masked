
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int s_addr; } ;
struct TYPE_6__ {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct TYPE_7__ {TYPE_2__ AddressIn; } ;
typedef TYPE_3__ sockaddr_gen ;


 int FUNC_0 (char*,char*,int ) ;

void FUNC_1(char* VAR_0, sockaddr_gen VAR_1)
{
    FUNC_0("  %s.AddressIn.sin_family %x\n", VAR_0, VAR_1.AddressIn.sin_family);
    FUNC_0("  %s.AddressIn.sin_port %x\n", VAR_0, VAR_1.AddressIn.sin_port);
    FUNC_0("  %s.AddressIn.sin_addr.s_addr %lx\n", VAR_0, VAR_1.AddressIn.sin_addr.s_addr);
}
