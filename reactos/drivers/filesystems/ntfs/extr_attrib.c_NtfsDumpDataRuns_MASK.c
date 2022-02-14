
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONGLONG ;
typedef scalar_t__* PVOID ;
typedef scalar_t__* PUCHAR ;
typedef int LONGLONG ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__* FUNC_2 (scalar_t__*,int*,int*) ;
 int FUNC_3 (scalar_t__*) ;

VOID
FUNC_4(PVOID VAR_0,
                 ULONGLONG VAR_1)
{
    PUCHAR VAR_2 = VAR_0;
    LONGLONG VAR_3;
    ULONGLONG VAR_4;

    if (VAR_1 == 0)
    {
        FUNC_0("Dumping data runs.\n\tData:\n\t\t");
        FUNC_3(VAR_0);
        FUNC_1("\n\tRuns:\n\t\tOff\t\tLCN\t\tLength\n");
    }

    VAR_2 = FUNC_2(VAR_2, &VAR_3, &VAR_4);

    if (VAR_3 != -1)
        VAR_1 += VAR_3;

    FUNC_1("\t\t%I64d\t", VAR_3);
    if (VAR_3 < 99999)
        FUNC_1("\t");
    FUNC_1("%I64u\t", VAR_1);
    if (VAR_1 < 99999)
        FUNC_1("\t");
    FUNC_1("%I64u\n", VAR_4);

    if (*VAR_2 == 0)
        FUNC_1("\t\t00\n");
    else
        FUNC_4(VAR_2, VAR_1);
}
