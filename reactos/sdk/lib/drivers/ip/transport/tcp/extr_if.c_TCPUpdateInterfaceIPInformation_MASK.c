
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ip_addr {scalar_t__ addr; } ;
typedef int VOID ;
struct TYPE_4__ {int TCPContext; } ;
typedef int PULONG ;
typedef TYPE_1__* PIP_INTERFACE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ,struct ip_addr*,struct ip_addr*,struct ip_addr*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

VOID
FUNC_5(PIP_INTERFACE VAR_2)
{
    struct ip_addr VAR_3;
    struct ip_addr VAR_4;
    struct ip_addr VAR_5;

    VAR_5.addr = 0;

    FUNC_0(VAR_2,
                            VAR_1,
                            (PULONG)&VAR_3.addr);

    FUNC_0(VAR_2,
                            VAR_0,
                            (PULONG)&VAR_4.addr);

    FUNC_1(VAR_2->TCPContext, &VAR_3, &VAR_4, &VAR_5);

    if (VAR_3.addr != 0)
    {
        FUNC_4(VAR_2->TCPContext);
        FUNC_2(VAR_2->TCPContext);
    }
    else
    {
        FUNC_3(VAR_2->TCPContext);
    }
}
