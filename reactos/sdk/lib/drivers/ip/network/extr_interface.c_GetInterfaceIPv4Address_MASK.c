
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_17__ {int IPv4Address; } ;
struct TYPE_18__ {TYPE_7__ Address; } ;
struct TYPE_15__ {int IPv4Address; } ;
struct TYPE_16__ {TYPE_5__ Address; } ;
struct TYPE_13__ {int IPv4Address; } ;
struct TYPE_14__ {TYPE_3__ Address; } ;
struct TYPE_11__ {int IPv4Address; } ;
struct TYPE_12__ {TYPE_1__ Address; } ;
struct TYPE_19__ {TYPE_8__ PointToPoint; TYPE_6__ Broadcast; TYPE_4__ Netmask; TYPE_2__ Unicast; } ;
typedef int * PULONG ;
typedef TYPE_9__* PIP_INTERFACE ;
typedef int NTSTATUS ;






 int VAR_0 ;
 int VAR_1 ;

NTSTATUS FUNC_0( PIP_INTERFACE VAR_2,
      ULONG VAR_3,
      PULONG VAR_4 ) {
    switch( VAR_3 ) {
    case 128:
 *VAR_4 = VAR_2->Unicast.Address.IPv4Address;
 break;

    case 131:
 *VAR_4 = VAR_2->Netmask.Address.IPv4Address;
 break;

    case 130:
 *VAR_4 = VAR_2->Broadcast.Address.IPv4Address;
 break;

    case 129:
 *VAR_4 = VAR_2->PointToPoint.Address.IPv4Address;
 break;

    default:
 return VAR_1;
    }

    return VAR_0;
}
