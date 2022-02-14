
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UNICODE_STRING ;
typedef int * PVOID ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int *,int ,int *,int *) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int *,int *,int,int ) ;
 int FUNC_7 (int ,int *,int *,int *,int *,int *,int ,int *,int *) ;
 int VAR_7 ;
 int FUNC_8 (int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int VAR_10 ;
 int FUNC_13 (int *,int ,int ,int) ;

int FUNC_14(int VAR_11, char ** VAR_12)
{
    HANDLE VAR_13;
    NTSTATUS VAR_14;
    OBJECT_ATTRIBUTES VAR_15;
    IO_STATUS_BLOCK VAR_16;
    WCHAR VAR_17[VAR_6];
    UNICODE_STRING VAR_18;
    PVOID VAR_19;

    VAR_19 = FUNC_11(VAR_8);
    if (VAR_19 == ((void*)0))
    {
        FUNC_9(VAR_10, "Failed allocating memory!\n");
        return 0;
    }


    FUNC_13(VAR_17, VAR_0, 0, 0);
    FUNC_8(&VAR_18, VAR_17);
    FUNC_3(&VAR_15,
                               &VAR_18,
                               VAR_7,
                               ((void*)0),
                               ((void*)0));

    VAR_14 = FUNC_6(&VAR_13,
                        VAR_5 | VAR_9,
                        &VAR_15,
                        &VAR_16,
                        0,
                        VAR_4);
    if (!FUNC_4(VAR_14))
    {
        FUNC_10(VAR_19);
        FUNC_9(VAR_10, "Failed opening disk! %x\n", VAR_14);
        return 0;
    }


    VAR_14 = FUNC_7(VAR_13,
                        ((void*)0),
                        ((void*)0),
                        ((void*)0),
                        &VAR_16,
                        VAR_19,
                        VAR_8,
                        ((void*)0),
                        ((void*)0));
    FUNC_5(VAR_13);
    if (!FUNC_4(VAR_14))
    {
        FUNC_10(VAR_19);
        FUNC_9(VAR_10, "Failed reading sector 0! %x\n", VAR_14);
        return 0;
    }


    if (FUNC_0(VAR_19))
    {
        FUNC_12("Sector 0 seems to be FAT boot sector\n");
    }

    else if (FUNC_2(VAR_19))
    {
        FUNC_12("Sector 0 seems to be NTFS boot sector\n");
    }

    else if (FUNC_1(VAR_19))
    {
        FUNC_12("Sector 0 might be MBR\n");
    }

    else
    {
        FUNC_12("Sector 0 not recognized\n");
    }


    FUNC_13(VAR_17, VAR_0, 0, 1);
    FUNC_8(&VAR_18, VAR_17);
    FUNC_3(&VAR_15,
                               &VAR_18,
                               VAR_7,
                               ((void*)0),
                               ((void*)0));

    VAR_14 = FUNC_6(&VAR_13,
                        VAR_5 | VAR_9,
                        &VAR_15,
                        &VAR_16,
                        VAR_2 | VAR_3 | VAR_1,
                        VAR_4);
    if (!FUNC_4(VAR_14))
    {
        FUNC_10(VAR_19);
        FUNC_9(VAR_10, "Failed opening partition! %x\n", VAR_14);
        return 0;
    }


    VAR_14 = FUNC_7(VAR_13,
                        ((void*)0),
                        ((void*)0),
                        ((void*)0),
                        &VAR_16,
                        VAR_19,
                        VAR_8,
                        ((void*)0),
                        ((void*)0));
    if (!FUNC_4(VAR_14))
    {
        FUNC_10(VAR_19);
        FUNC_9(VAR_10, "Failed reading first sector of the partition! %x\n", VAR_14);
        return 0;
    }


    if (FUNC_0(VAR_19))
    {
        FUNC_12("Seems to be a FAT partittion\n");
    }

    else if (FUNC_2(VAR_19))
    {
        FUNC_12("Seems to be a NTFS partition\n");
    }

    else if (FUNC_1(VAR_19))
    {
        FUNC_12("Seems to be MBR\n");
    }

    else
    {
        FUNC_12("Not recognized\n");
    }

    FUNC_10(VAR_19);

    return 0;
}
