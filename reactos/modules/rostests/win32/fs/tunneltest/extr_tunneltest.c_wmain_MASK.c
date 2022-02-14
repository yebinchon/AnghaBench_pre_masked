
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_4__ {int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int ULONG ;
typedef int TempPath ;
typedef scalar_t__ HANDLE ;
typedef int FileSystemName ;
typedef int File2 ;
typedef int FILETIME ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__,int *,int *,int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int,char*) ;
 scalar_t__ FUNC_6 (char*,int *,int ,int *,int *,int *,char*,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int *,int *,int) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;

int FUNC_16(int VAR_12, WCHAR * VAR_13[])
{
    WCHAR VAR_14[VAR_7 + 1];
    WCHAR VAR_15[VAR_7 + 1];
    WCHAR VAR_16[] = {'A', ':', '\\', '\0'};
    WCHAR VAR_17[sizeof("FAT32")];
    UNICODE_STRING VAR_18;
    WCHAR VAR_19[] = {'\\', 'f', 'i', 'l', 'e', '1', '\0'};
    WCHAR VAR_20[] = {'\\', 'f', 'i', 'l', 'e', '2', '\0'};
    ULONG VAR_21;
    HANDLE VAR_22;
    FILETIME VAR_23, VAR_24;


    if (FUNC_5(sizeof(VAR_14) / sizeof(VAR_14[0]), VAR_14) == 0)
    {
        FUNC_12(VAR_10, "Failed to get temp path\n");
        return FUNC_4();
    }


    VAR_16[0] = VAR_14[0];


    if (FUNC_6(VAR_16, ((void*)0), 0, ((void*)0), ((void*)0), ((void*)0), VAR_17, sizeof(VAR_17) / sizeof(VAR_17[0])) == 0)
    {
        FUNC_12(VAR_10, "Failed to get volume info\n");
        return FUNC_4();
    }


    FUNC_10(&VAR_18, VAR_17);


    if (FUNC_9(&VAR_18, &VAR_4, VAR_1) != 0 &&
        FUNC_9(&VAR_18, &VAR_3, VAR_1) != 0 &&
        FUNC_9(&VAR_18, &VAR_8, VAR_1) != 0)
    {
        FUNC_12(VAR_10, "!(FAT, FAT32, NTFS): \'%d\'\n", VAR_18.Buffer);
        return 0;
    }


    VAR_21 = FUNC_15(VAR_14);
    if (VAR_21 > VAR_7 - sizeof(VAR_20) / sizeof(WCHAR))
    {
        FUNC_12(VAR_10, "Files won't fit\n");
        return 0;
    }


    FUNC_13(VAR_14, VAR_19);
    VAR_22 = FUNC_1(VAR_14, 0, 0, ((void*)0), VAR_0, VAR_2, ((void*)0));
    if (VAR_22 == VAR_6)
    {
        FUNC_12(VAR_10, "Failed to create file1\n");
        return FUNC_4();
    }



    if (FUNC_3(VAR_22, &VAR_23, ((void*)0), ((void*)0)) == VAR_1)
    {
        FUNC_12(VAR_10, "Failed to read creation time\n");
        FUNC_0(VAR_22);
        return FUNC_4();
    }

    FUNC_0(VAR_22);



    FUNC_11(1000);



    VAR_14[VAR_21 - 1] = 0;
    FUNC_13(VAR_14, VAR_20);
    VAR_22 = FUNC_1(VAR_14, 0, 0, ((void*)0), VAR_0, VAR_2, ((void*)0));
    if (VAR_22 == VAR_6)
    {
        FUNC_12(VAR_10, "Failed to create file2\n");
        return FUNC_4();
    }
    FUNC_0(VAR_22);


    VAR_14[VAR_21] = 0;
    FUNC_13(VAR_14, VAR_19);
    FUNC_14(VAR_15, VAR_14);

    VAR_15[FUNC_15(VAR_14) - 1] = 0;
    if (FUNC_7(VAR_14, VAR_15) == 0)
    {
        FUNC_12(VAR_10, "Failed to rename file1\n");
        return FUNC_4();
    }


    FUNC_14(VAR_15, VAR_14);

    VAR_15[FUNC_15(VAR_14) - 1] = L'2';
    if (FUNC_7(VAR_15, VAR_14) == 0)
    {
        FUNC_12(VAR_10, "Failed to rename file2\n");
        return FUNC_4();
    }


    VAR_22 = FUNC_1(VAR_14, VAR_5, 0, ((void*)0), VAR_9, VAR_2, ((void*)0));
    if (VAR_22 == VAR_6)
    {
        FUNC_12(VAR_10, "Failed to open file1\n");
        return FUNC_4();
    }
    if (FUNC_3(VAR_22, &VAR_24, ((void*)0), ((void*)0)) == VAR_1)
    {
        FUNC_12(VAR_10, "Failed to read creation time\n");
        FUNC_0(VAR_22);
        return FUNC_4();
    }
    FUNC_0(VAR_22);


    VAR_15[FUNC_15(VAR_14) - 1] = 0;
    FUNC_2(VAR_14);
    FUNC_2(VAR_15);


    if (FUNC_8(&VAR_23, &VAR_24, sizeof(FILETIME)) == sizeof(FILETIME))
    {
        FUNC_12(VAR_11, "Tunnel cache in action\n");
        return 0;
    }

    FUNC_12(VAR_11, "Tunnel cache NOT in action\n");
    return 0;
}
