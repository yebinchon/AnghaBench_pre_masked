
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ip_addr {scalar_t__ addr; } ;
typedef int VOID ;
struct TYPE_4__ {int TCPContext; } ;
typedef TYPE_1__* PIP_INTERFACE ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ip_addr*,struct ip_addr*,struct ip_addr*,TYPE_1__*,int ,int ) ;
 int VAR_1 ;

VOID
FUNC_1(PIP_INTERFACE VAR_2)
{
    struct ip_addr VAR_3;
    struct ip_addr VAR_4;
    struct ip_addr VAR_5;

    VAR_5.addr = 0;
    VAR_3.addr = 0;
    VAR_4.addr = 0;

    VAR_2->TCPContext = FUNC_0(VAR_2->TCPContext,
                               &VAR_3,
                               &VAR_4,
                               &VAR_5,
                               VAR_2,
                               VAR_0,
                               VAR_1);
}
