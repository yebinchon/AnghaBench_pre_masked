
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_16__ {int CurrentPsp; } ;
struct TYPE_12__ {int Length; int Buffer; } ;
struct TYPE_15__ {int DeviceAttributes; TYPE_1__ Name; int Driver; int (* OpenRoutine ) (TYPE_4__*) ;} ;
struct TYPE_14__ {int DeviceInfo; int OpenMode; int OwnerPsp; scalar_t__ Win32Handle; int Size; int Attributes; int FileName; int DevicePointer; } ;
struct TYPE_13__ {int nLength; int bInheritHandle; int * lpSecurityDescriptor; } ;
typedef int SecurityAttributes ;
typedef TYPE_2__ SECURITY_ATTRIBUTES ;
typedef TYPE_3__* PDOS_FILE_DESCRIPTOR ;
typedef TYPE_4__* PDOS_DEVICE_NODE ;
typedef scalar_t__* LPWORD ;
typedef int LPCSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;
typedef int ACCESS_MASK ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int,TYPE_2__*,int ,int ,int *) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 () ;
 TYPE_4__* FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int *) ;
 int FUNC_9 () ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_10 (int ) ;
 int VAR_13 ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int,char) ;
 int FUNC_13 (TYPE_3__*,int) ;
 TYPE_7__* VAR_14 ;
 int FUNC_14 (int ,TYPE_3__*) ;
 int FUNC_15 (TYPE_4__*) ;

WORD FUNC_16(LPWORD VAR_15,
                 LPCSTR VAR_16,
                 BYTE VAR_17)
{
    HANDLE VAR_18 = ((void*)0);
    PDOS_DEVICE_NODE VAR_19;
    WORD VAR_20;
    BYTE VAR_21;
    PDOS_FILE_DESCRIPTOR VAR_22;

    FUNC_2("DosOpenFile: FilePath \"%s\", AccessShareModes 0x%04X\n",
           VAR_16, VAR_17);






    VAR_19 = FUNC_4(VAR_16);
    if (VAR_19 != ((void*)0))
    {
        if (VAR_19->OpenRoutine) VAR_19->OpenRoutine(VAR_19);
    }
    else
    {
        ACCESS_MASK VAR_23 = 0;
        DWORD VAR_24 = 0;
        BOOL VAR_25 = VAR_3;
        SECURITY_ATTRIBUTES VAR_26;


        switch (VAR_17 & 0x03)
        {

            case 0:
                VAR_23 = VAR_9;
                break;


            case 1:
                VAR_23 = VAR_10;
                break;


            case 2:
                VAR_23 = VAR_9 | VAR_10;
                break;


            default:
                return VAR_0;
        }


        switch ((VAR_17 >> 4) & 0x07)
        {

            case 0:
                VAR_24 = VAR_7 | VAR_8 | VAR_6;
                break;


            case 1:
                VAR_24 = 0;
                break;


            case 2:
                VAR_24 = VAR_7;
                break;


            case 3:
                VAR_24 = VAR_8;
                break;


            case 4:
                VAR_24 = VAR_7 | VAR_8;
                break;


            default:
                return VAR_0;
        }


        VAR_25 = ((VAR_17 & 0x80) == 0);


        VAR_26.nLength = sizeof(VAR_26);
        VAR_26.lpSecurityDescriptor = ((void*)0);
        VAR_26.bInheritHandle = VAR_25;


        VAR_18 = FUNC_1(VAR_16,
                                 VAR_23,
                                 VAR_24,
                                 &VAR_26,
                                 VAR_13,
                                 VAR_4,
                                 ((void*)0));
        if (VAR_18 == VAR_12)
        {

            return (WORD)FUNC_9();
        }
    }

    VAR_21 = FUNC_3();
    if (VAR_21 == 0xFF)
    {

        FUNC_0(VAR_18);
        return VAR_2;
    }


    VAR_22 = FUNC_5(VAR_21);
    FUNC_13(VAR_22, sizeof(*VAR_22));
    FUNC_12(VAR_22->FileName, sizeof(VAR_22->FileName), ' ');

    if (VAR_19 != ((void*)0))
    {
        VAR_22->DevicePointer = VAR_19->Driver;
        VAR_22->DeviceInfo = VAR_19->DeviceAttributes | VAR_5;
        FUNC_11(VAR_22->FileName, VAR_19->Name.Buffer, VAR_19->Name.Length);
    }
    else
    {
        VAR_22->OpenMode = VAR_17;
        VAR_22->Attributes = FUNC_10(FUNC_7(VAR_16));
        VAR_22->Size = FUNC_8(VAR_18, ((void*)0));
        VAR_22->Win32Handle = VAR_18;
        FUNC_14(VAR_16, VAR_22);
    }

    VAR_22->OwnerPsp = VAR_14->CurrentPsp;


    VAR_20 = FUNC_6(VAR_21);
    if (VAR_20 == VAR_11)
    {

        FUNC_0(VAR_18);
        return VAR_2;
    }


    *VAR_15 = VAR_20;
    return VAR_1;
}
