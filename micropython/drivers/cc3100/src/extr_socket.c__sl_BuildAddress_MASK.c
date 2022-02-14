
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_26__ {int _S6_u32; } ;
struct TYPE_27__ {TYPE_7__ _S6_un; } ;
struct TYPE_28__ {TYPE_8__ sin6_addr; } ;
typedef TYPE_9__ sockaddr_in6 ;
struct TYPE_25__ {int address; } ;
struct TYPE_22__ {int address; } ;
struct TYPE_20__ {int FamilyAndFlags; int address; int port; } ;
struct TYPE_16__ {TYPE_6__ IpV6; TYPE_3__ IpV6EUI48; TYPE_1__ IpV4; } ;
typedef TYPE_10__ _SocketAddrCommand_u ;
struct TYPE_23__ {int _S6_u8; } ;
struct TYPE_24__ {TYPE_4__ _S6_un; } ;
struct TYPE_21__ {int s_addr; } ;
struct TYPE_19__ {TYPE_5__ sin6_addr; } ;
struct TYPE_18__ {TYPE_2__ sin_addr; int sin_port; } ;
struct TYPE_17__ {int sa_family; } ;
typedef TYPE_11__ SlSockAddr_t ;
typedef TYPE_12__ SlSockAddrIn_t ;
typedef TYPE_13__ SlSockAddrIn6_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(const SlSockAddr_t *VAR_2, _SocketAddrCommand_u *VAR_3)
{




    VAR_3->IpV4.FamilyAndFlags = (VAR_2->sa_family << 4) & 0xF0;
    VAR_3->IpV4.port = ((SlSockAddrIn_t *)VAR_2)->sin_port;

    if(VAR_0 == VAR_2->sa_family)
    {
        VAR_3->IpV4.address = ((SlSockAddrIn_t *)VAR_2)->sin_addr.s_addr;
    }
    else if (VAR_1 == VAR_2->sa_family )
    {
        FUNC_0( VAR_3->IpV6EUI48.address,((SlSockAddrIn6_t *)VAR_2)->sin6_addr._S6_un._S6_u8, 6);
    }






}
