
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int PVOID ;
typedef int PNDIS_PACKET ;
typedef int PNDIS_BUFFER ;
typedef int PCHAR ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int *,int *,int *) ;
 int FUNC_2 (int ,char*) ;

UINT FUNC_3(
    PCHAR VAR_1,
    PNDIS_PACKET VAR_2,
    UINT VAR_3,
    UINT VAR_4)
{
    PNDIS_BUFFER VAR_5;
    PVOID VAR_6;
    UINT VAR_7;
    UINT VAR_8;

    FUNC_2(VAR_0, ("DstData (0x%X)  SrcPacket (0x%X)  SrcOffset (0x%X)  Length (%d)\n", VAR_1, VAR_2, VAR_3, VAR_4));

    FUNC_1(VAR_2,
                                 &VAR_5,
                                 &VAR_6,
                                 &VAR_7,
                                 &VAR_8);

    return FUNC_0(VAR_1, VAR_5, VAR_3, VAR_4);
}
