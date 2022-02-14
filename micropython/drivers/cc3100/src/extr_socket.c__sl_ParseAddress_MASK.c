
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


struct TYPE_25__ {int _S6_u32; } ;
struct TYPE_26__ {TYPE_6__ _S6_un; } ;
struct TYPE_28__ {TYPE_7__ sin6_addr; } ;
typedef TYPE_9__ sockaddr_in6 ;
struct TYPE_27__ {int address; } ;
struct TYPE_24__ {int address; } ;
struct TYPE_21__ {scalar_t__ family; int address; int port; } ;
struct TYPE_16__ {TYPE_8__ IpV6; TYPE_5__ IpV6EUI48; TYPE_2__ IpV4; } ;
typedef TYPE_10__ _SocketAddrResponse_u ;
struct TYPE_22__ {int _S6_u8; } ;
struct TYPE_23__ {TYPE_3__ _S6_un; } ;
struct TYPE_20__ {int s_addr; } ;
struct TYPE_19__ {TYPE_4__ sin6_addr; } ;
struct TYPE_18__ {TYPE_1__ sin_addr; int sin_port; } ;
struct TYPE_17__ {scalar_t__ sa_family; } ;
typedef int SlSocklen_t ;
typedef TYPE_11__ SlSockAddr_t ;
typedef TYPE_12__ SlSockAddrIn_t ;
typedef TYPE_13__ SlSockAddrIn6_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(_SocketAddrResponse_u *VAR_2, SlSockAddr_t *VAR_3, SlSocklen_t *VAR_4)
{



    VAR_3->sa_family = VAR_2->IpV4.family;
    ((SlSockAddrIn_t *)VAR_3)->sin_port = VAR_2->IpV4.port;

    *VAR_4 = (VAR_0 == VAR_3->sa_family) ? sizeof(SlSockAddrIn_t) : sizeof(SlSockAddrIn6_t);

    if(VAR_0 == VAR_3->sa_family)
    {
        ((SlSockAddrIn_t *)VAR_3)->sin_addr.s_addr = VAR_2->IpV4.address;
    }
    else if (VAR_1 == VAR_3->sa_family )
    {
        FUNC_0(((SlSockAddrIn6_t *)VAR_3)->sin6_addr._S6_un._S6_u8, VAR_2->IpV6EUI48.address, 6);
    }






}
