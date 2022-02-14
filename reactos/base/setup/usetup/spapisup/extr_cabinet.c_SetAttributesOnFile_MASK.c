
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_7__ {int FileAttributes; } ;
struct TYPE_6__ {int Attributes; } ;
typedef TYPE_1__* PCFFILE ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef TYPE_2__ FILE_BASIC_INFORMATION ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,TYPE_2__*,int,int ) ;
 int FUNC_3 (int ,int *,TYPE_2__*,int,int ) ;

__attribute__((used)) static BOOL
FUNC_4(PCFFILE VAR_11,
                    HANDLE VAR_12)
{
    FILE_BASIC_INFORMATION VAR_13;
    IO_STATUS_BLOCK VAR_14;
    NTSTATUS VAR_15;
    ULONG VAR_16 = 0;

    if (VAR_11->Attributes & VAR_3)
        VAR_16 |= VAR_8;

    if (VAR_11->Attributes & VAR_2)
        VAR_16 |= VAR_7;

    if (VAR_11->Attributes & VAR_4)
        VAR_16 |= VAR_9;

    if (VAR_11->Attributes & VAR_1)
        VAR_16 |= VAR_6;

    if (VAR_11->Attributes & VAR_0)
        VAR_16 |= VAR_5;

    VAR_15 = FUNC_2(VAR_12,
                                      &VAR_14,
                                      &VAR_13,
                                      sizeof(FILE_BASIC_INFORMATION),
                                      VAR_10);
    if (!FUNC_1(VAR_15))
    {
        FUNC_0("NtQueryInformationFile() failed (%x)\n", VAR_15);
    }
    else
    {
        VAR_13.FileAttributes = VAR_16;

        VAR_15 = FUNC_3(VAR_12,
                                        &VAR_14,
                                        &VAR_13,
                                        sizeof(FILE_BASIC_INFORMATION),
                                        VAR_10);
        if (!FUNC_1(VAR_15))
        {
            FUNC_0("NtSetInformationFile() failed (%x)\n", VAR_15);
        }
    }

    return FUNC_1(VAR_15);
}
