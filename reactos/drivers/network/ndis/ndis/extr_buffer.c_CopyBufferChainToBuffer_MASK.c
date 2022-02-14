
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ UINT ;
typedef int PVOID ;
typedef scalar_t__ PUCHAR ;
typedef int PNDIS_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,scalar_t__*) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__*,scalar_t__*) ;

UINT FUNC_6(
    PUCHAR VAR_1,
    PNDIS_BUFFER VAR_2,
    UINT VAR_3,
    UINT VAR_4)
{
    UINT VAR_5, VAR_6, VAR_7;
    PUCHAR VAR_8;

    FUNC_1(VAR_0, ("DstData 0x%X  SrcBuffer 0x%X  SrcOffset 0x%X  Length %d\n",VAR_1,VAR_2, VAR_3, VAR_4));


    if (FUNC_5(VAR_2, VAR_3, &VAR_8, &VAR_7) == 0xFFFFFFFF)
        return 0;


    VAR_5 = 0;
    for (;;) {
        VAR_6 = FUNC_0(VAR_7, VAR_4);

        FUNC_1(VAR_0, ("Copying (%d) bytes from 0x%X to 0x%X\n", VAR_6, VAR_8, VAR_1));

        FUNC_4((PVOID)VAR_1, (PVOID)VAR_8, VAR_6);
        VAR_5 += VAR_6;
        VAR_1 = (PUCHAR)((ULONG_PTR) VAR_1 + VAR_6);

        VAR_4 -= VAR_6;
        if (VAR_4 == 0)
            break;

        VAR_7 -= VAR_6;
        if (VAR_7 == 0) {


            FUNC_2(VAR_2, &VAR_2);
            if (!VAR_2)
                break;

            FUNC_3(VAR_2, (PVOID)&VAR_8, &VAR_7);
        }
    }

    return VAR_5;
}
