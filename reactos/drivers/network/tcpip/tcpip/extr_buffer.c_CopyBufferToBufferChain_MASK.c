
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ UINT ;
typedef int PVOID ;
typedef int PNDIS_BUFFER ;
typedef scalar_t__ PCHAR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ,scalar_t__*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (int ,char*) ;

UINT FUNC_6(
    PNDIS_BUFFER VAR_1,
    UINT VAR_2,
    PCHAR VAR_3,
    UINT VAR_4)
{
    UINT VAR_5, VAR_6, VAR_7;
    PCHAR VAR_8;

    FUNC_5(VAR_0, ("DstBuffer (0x%X)  DstOffset (0x%X)  SrcData (0x%X)  Length (%d)\n", VAR_1, VAR_2, VAR_3, VAR_4));


    if (FUNC_4(VAR_1, VAR_2, &VAR_8, &VAR_7) == -1)
        return 0;


    VAR_5 = 0;
    for (;;) {
        VAR_6 = FUNC_0(VAR_7, VAR_4);

        FUNC_3((PVOID)VAR_8, (PVOID)VAR_3, VAR_6);
        VAR_5 += VAR_6;
        VAR_3 = (PCHAR)((ULONG_PTR)VAR_3 + VAR_6);

        VAR_4 -= VAR_6;
        if (VAR_4 == 0)
            break;

        VAR_7 -= VAR_6;
        if (VAR_7 == 0) {


            FUNC_1(VAR_1, &VAR_1);
            if (!VAR_1)
                break;

            FUNC_2(VAR_1, (PVOID)&VAR_8, &VAR_7);
        }
    }

    return VAR_5;
}
