
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_8__ {char* Buffer; int MaximumLength; int Length; } ;
struct TYPE_10__ {int MTU; int Broadcast; int Netmask; int Unicast; TYPE_1__ Name; } ;
struct TYPE_9__ {int Transmit; scalar_t__ AddressLength; int * Address; scalar_t__ MinFrameSize; scalar_t__ HeaderSize; int * Context; } ;
typedef int PNDIS_STRING ;
typedef int PLAN_ADAPTER ;
typedef int NDIS_STATUS ;
typedef TYPE_2__ LLIP_BIND_INFO ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;

NDIS_STATUS FUNC_6(
  PNDIS_STRING VAR_9,
  PLAN_ADAPTER *VAR_10)
{
  LLIP_BIND_INFO VAR_11;

  FUNC_4(VAR_6, ("Called.\n"));


  VAR_11.Context = ((void*)0);
  VAR_11.HeaderSize = 0;
  VAR_11.MinFrameSize = 0;
  VAR_11.Address = ((void*)0);
  VAR_11.AddressLength = 0;
  VAR_11.Transmit = VAR_3;

  VAR_4 = FUNC_2(&VAR_11);
  if (!VAR_4) return VAR_7;

  VAR_4->MTU = 16384;

  VAR_4->Name.Buffer = L"Loopback";
  VAR_4->Name.MaximumLength = VAR_4->Name.Length =
      FUNC_5(VAR_4->Name.Buffer) * sizeof(WCHAR);

  FUNC_0(&VAR_4->Unicast, VAR_0);
  FUNC_0(&VAR_4->Netmask, VAR_1);
  FUNC_0(&VAR_4->Broadcast, VAR_2);

  FUNC_3(VAR_4);

  FUNC_1(VAR_4);

  FUNC_4(VAR_5, ("Leaving.\n"));

  return VAR_8;
}
