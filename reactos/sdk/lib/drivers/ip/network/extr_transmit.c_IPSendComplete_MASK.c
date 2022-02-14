
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_2__ {int Event; int Status; } ;
typedef int PVOID ;
typedef int PNDIS_PACKET ;
typedef TYPE_1__* PIPFRAGMENT_CONTEXT ;
typedef int NDIS_STATUS ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;

VOID FUNC_2
(PVOID VAR_2, PNDIS_PACKET VAR_3, NDIS_STATUS VAR_4)
{
    PIPFRAGMENT_CONTEXT VAR_5 = (PIPFRAGMENT_CONTEXT)VAR_2;

    FUNC_1
 (VAR_1,
  ("Called. Context (0x%X)  NdisPacket (0x%X)  NdisStatus (0x%X)\n",
   VAR_2, VAR_3, VAR_4));

 VAR_5->Status = VAR_4;
 FUNC_0(&VAR_5->Event, 0, VAR_0);
}
