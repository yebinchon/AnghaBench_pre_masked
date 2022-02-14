
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_13__ {int CurrentPsp; } ;
struct TYPE_10__ {int Length; int Buffer; } ;
struct TYPE_12__ {int DeviceAttributes; TYPE_1__ Name; int Driver; int (* OpenRoutine ) (TYPE_3__*) ;} ;
struct TYPE_11__ {int DeviceInfo; int OwnerPsp; scalar_t__ Win32Handle; int Size; int Attributes; int FileName; int DevicePointer; } ;
typedef TYPE_2__* PDOS_FILE_DESCRIPTOR ;
typedef TYPE_3__* PDOS_DEVICE_NODE ;
typedef scalar_t__* LPWORD ;
typedef int LPCSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int,int *,int ,scalar_t__,int *) ;
 int FUNC_2 (char*,int ,int ,scalar_t__) ;
 int FUNC_3 () ;
 TYPE_3__* FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int *) ;
 int FUNC_9 () ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int,char) ;
 int FUNC_13 (TYPE_2__*,int) ;
 TYPE_6__* VAR_10 ;
 int FUNC_14 (int ,TYPE_2__*) ;
 int FUNC_15 (TYPE_3__*) ;

WORD FUNC_16(LPWORD VAR_11,
                   LPCSTR VAR_12,
                   DWORD VAR_13,
                   WORD VAR_14)
{
    HANDLE VAR_15;
    PDOS_DEVICE_NODE VAR_16;
    WORD VAR_17;
    BYTE VAR_18;
    PDOS_FILE_DESCRIPTOR VAR_19;

    FUNC_2("DosCreateFile: FilePath \"%s\", CreationDisposition 0x%04X, Attributes 0x%04X\n",
           VAR_12, VAR_13, VAR_14);

    VAR_16 = FUNC_4(VAR_12);
    if (VAR_16 != ((void*)0))
    {
        if (VAR_16->OpenRoutine) VAR_16->OpenRoutine(VAR_16);
    }
    else
    {

        VAR_15 = FUNC_1(VAR_12,
                                 VAR_6 | VAR_7,
                                 VAR_4 | VAR_5 | VAR_3,
                                 ((void*)0),
                                 VAR_13,
                                 VAR_14,
                                 ((void*)0));
        if (VAR_15 == VAR_9)
        {

            return (WORD)FUNC_9();
        }
    }

    VAR_18 = FUNC_3();
    if (VAR_18 == 0xFF)
    {

        FUNC_0(VAR_15);
        return VAR_1;
    }


    VAR_19 = FUNC_5(VAR_18);
    FUNC_13(VAR_19, sizeof(*VAR_19));
    FUNC_12(VAR_19->FileName, sizeof(VAR_19->FileName), ' ');

    if (VAR_16 != ((void*)0))
    {
        VAR_19->DevicePointer = VAR_16->Driver;
        VAR_19->DeviceInfo = VAR_16->DeviceAttributes | VAR_2;
        FUNC_11(VAR_19->FileName, VAR_16->Name.Buffer, VAR_16->Name.Length);
    }
    else
    {
        VAR_19->Attributes = FUNC_10(FUNC_7(VAR_12));
        VAR_19->Size = FUNC_8(VAR_15, ((void*)0));
        VAR_19->Win32Handle = VAR_15;
        FUNC_14(VAR_12, VAR_19);
    }

    VAR_19->OwnerPsp = VAR_10->CurrentPsp;


    VAR_17 = FUNC_6(VAR_18);
    if (VAR_17 == VAR_8)
    {

        FUNC_0(VAR_15);
        return VAR_1;
    }


    *VAR_11 = VAR_17;
    return VAR_0;
}
