
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int PVOID ;
typedef int PNDIS_PACKET ;
typedef int PNDIS_BUFFER ;
typedef scalar_t__ PCHAR ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ,scalar_t__*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (int ,char*) ;

UINT FUNC_6(
    PNDIS_BUFFER VAR_1,
    UINT VAR_2,
    PNDIS_PACKET VAR_3,
    UINT VAR_4,
    UINT VAR_5)
{
    PNDIS_BUFFER VAR_6;
    PCHAR VAR_7, VAR_8;
    UINT VAR_9, VAR_10;
    UINT VAR_11, VAR_12;

    FUNC_5(VAR_0, ("DstBuffer (0x%X)  DstOffset (0x%X)  SrcPacket (0x%X)  SrcOffset (0x%X)  Length (%d)\n", VAR_1, VAR_2, VAR_3, VAR_4, VAR_5));


    FUNC_2(VAR_1, (PVOID)&VAR_7, &VAR_9);
    if (FUNC_4(VAR_1, VAR_2, &VAR_7, &VAR_9) == -1)
        return 0;


    FUNC_0(VAR_3, &VAR_6, (PVOID)&VAR_8, &VAR_10, &VAR_12);
    if (FUNC_4(VAR_6, VAR_4, &VAR_8, &VAR_10) == -1)
        return 0;


    for (VAR_12 = 0;;) {

        if (VAR_5 < VAR_10)
            VAR_11 = VAR_5;
        else
            VAR_11 = VAR_10;
        if (VAR_9 < VAR_11)
            VAR_11 = VAR_9;

        FUNC_3((PVOID)VAR_7, (PVOID)VAR_8, VAR_11);

        VAR_12 += VAR_11;
        VAR_5 -= VAR_11;
        if (VAR_5 == 0)
            break;

        VAR_9 -= VAR_11;
        if (VAR_9 == 0) {


            FUNC_1(VAR_1, &VAR_1);
            if (!VAR_1)
                break;

            FUNC_2(VAR_1, (PVOID)&VAR_7, &VAR_9);
        }

        VAR_10 -= VAR_11;
        if (VAR_10 == 0) {


            FUNC_1(VAR_6, &VAR_6);
            if (!VAR_6)
                break;

            FUNC_2(VAR_6, (PVOID)&VAR_8, &VAR_10);
        }
    }

    return VAR_12;
}
