
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct interface_info {int dummy; } ;
struct TYPE_4__ {int dwIndex; } ;
struct TYPE_5__ {int NteInstance; int NteContext; TYPE_1__ IfMib; } ;
typedef TYPE_2__* PDHCP_ADAPTER ;


 TYPE_2__* FUNC_0 (struct interface_info*) ;
 int FUNC_1 (int ,int ,int ,int *,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;

void
FUNC_6(void *VAR_0)
{
 struct interface_info *VAR_1 = VAR_0;
        PDHCP_ADAPTER VAR_2 = FUNC_0(VAR_1);

 FUNC_4("No DHCPOFFERS received.");

        if (!VAR_2->NteContext)
        {

            FUNC_2("DHCPCSVC: Failed to receive a response from a DHCP server. An automatic private address will be assigned.\n");


            FUNC_1(FUNC_3(0xA9FE0000 | (FUNC_5() % 0xFFFF)),
                         FUNC_3(0xFFFF0000),
                         VAR_2->IfMib.dwIndex,
                         &VAR_2->NteContext,
                         &VAR_2->NteInstance);
        }
}
