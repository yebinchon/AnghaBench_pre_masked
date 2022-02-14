
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ UINT ;
typedef int PVOID ;
typedef scalar_t__* PUINT ;
typedef int PNDIS_BUFFER ;
typedef scalar_t__ PCHAR ;
typedef int INT ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;

__inline INT FUNC_2(
    PNDIS_BUFFER VAR_0,
    UINT VAR_1,
    PCHAR *VAR_2,
    PUINT VAR_3)
{
    for (;;) {

        if (!VAR_0)
            return -1;

        FUNC_1(VAR_0, (PVOID)VAR_2, VAR_3);

        if (VAR_1 < *VAR_3) {
            *VAR_2 = (PCHAR)((ULONG_PTR) *VAR_2 + VAR_1);
            *VAR_3 -= VAR_1;
            break;
        }

        VAR_1 -= *VAR_3;

        FUNC_0(VAR_0, &VAR_0);
    }

    return VAR_1;
}
