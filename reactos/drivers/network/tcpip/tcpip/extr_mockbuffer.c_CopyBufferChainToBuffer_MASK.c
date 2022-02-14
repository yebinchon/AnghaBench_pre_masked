
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
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ,scalar_t__*) ;

UINT FUNC_6(
    PCHAR VAR_1,
    PNDIS_BUFFER VAR_2,
    UINT VAR_3,
    UINT VAR_4)
{
    UINT VAR_5, VAR_6, VAR_7;
    PCHAR VAR_8;

    FUNC_4(VAR_0, ("DstData 0x%X  SrcBuffer 0x%X  SrcOffset 0x%X  Length %d\n",VAR_1,VAR_2, VAR_3, VAR_4));


    if (FUNC_3(VAR_2, VAR_3, &VAR_8, &VAR_7) == -1)
        return 0;


    VAR_5 = 0;
    for (;;) {
        VAR_6 = FUNC_0(VAR_7, VAR_4);

        FUNC_4(VAR_0, ("Copying (%d) bytes from 0x%X to 0x%X\n", VAR_6, VAR_8, VAR_1));

        FUNC_2((PVOID)VAR_1, (PVOID)VAR_8, VAR_6);
        VAR_5 += VAR_6;
        VAR_1 = (PCHAR)((ULONG_PTR)VAR_1 + VAR_6);

        VAR_4 -= VAR_6;
        if (VAR_4 == 0)
            break;

        VAR_7 -= VAR_6;
        if (VAR_7 == 0) {


            FUNC_1(VAR_2, &VAR_2);
            if (!VAR_2)
                break;

            FUNC_5(VAR_2, (PVOID)&VAR_8, &VAR_7);
        }
    }

    return VAR_5;
}
