
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {int Flags; } ;
typedef int * PVOID ;
typedef int * PUNICODE_STRING ;
typedef int PLIST_ENTRY ;
typedef TYPE_1__* PLDR_DATA_TABLE_ENTRY ;
typedef int PCSTR ;
typedef int * PCHAR ;
typedef int FullPath ;
typedef int DriverPath ;
typedef int DllName ;
typedef int CHAR ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int *,int *,int *,TYPE_1__**) ;
 scalar_t__ FUNC_2 (int ,int *,TYPE_1__**) ;
 scalar_t__ FUNC_3 (int *,int ,int **) ;
 scalar_t__ FUNC_4 (int ,int *,TYPE_1__*) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int *,int,char*,int ,...) ;
 int FUNC_7 (char*,int *,int *) ;
 scalar_t__ VAR_3 ;
 int * FUNC_8 (int *,char) ;

__attribute__((used)) static BOOLEAN
FUNC_9(PLIST_ENTRY VAR_4,
                       PCSTR VAR_5,
                       PUNICODE_STRING VAR_6,
                       ULONG VAR_7,
                       PLDR_DATA_TABLE_ENTRY *VAR_8)
{
    CHAR VAR_9[1024];
    CHAR VAR_10[1024];
    CHAR VAR_11[1024];
    PCHAR VAR_12;
    BOOLEAN VAR_13;
    PVOID VAR_14 = ((void*)0);


    FUNC_6(VAR_10, sizeof(VAR_10), "%wZ", *VAR_6);
    VAR_12 = FUNC_8(VAR_10, '\\');
    if (VAR_12 != ((void*)0))
    {

        FUNC_5(VAR_11, sizeof(VAR_11), VAR_12+1);


        *(VAR_12+1) = VAR_0;
    }
    else
    {

        FUNC_5(VAR_11, sizeof(VAR_11), VAR_10);
        *VAR_10 = VAR_0;
    }

    FUNC_7("DriverPath: '%s', DllName: '%s', LPB\n", VAR_10, VAR_11);


    VAR_13 = FUNC_2(VAR_4, VAR_11, VAR_8);
    if (VAR_13)
    {

        return VAR_3;
    }


    FUNC_6(VAR_9, sizeof(VAR_9), "%s%wZ", VAR_5, VAR_6);
    VAR_13 = FUNC_3(VAR_9, VAR_2, &VAR_14);
    if (!VAR_13)
        return VAR_1;


    VAR_13 = FUNC_1(VAR_4, VAR_11, VAR_11, VAR_14, VAR_8);
    if (!VAR_13)
    {
        FUNC_0("PeLdrAllocateDataTableEntry() failed\n");
        return VAR_1;
    }


    (*VAR_8)->Flags |= VAR_7;


    FUNC_6(VAR_9, sizeof(VAR_9), "%s%s", VAR_5, VAR_10);
    VAR_13 = FUNC_4(VAR_4, VAR_9, *VAR_8);
    if (!VAR_13)
    {
        FUNC_0("PeLdrScanImportDescriptorTable() failed for %s\n", VAR_9);
        return VAR_1;
    }

    return VAR_3;
}
