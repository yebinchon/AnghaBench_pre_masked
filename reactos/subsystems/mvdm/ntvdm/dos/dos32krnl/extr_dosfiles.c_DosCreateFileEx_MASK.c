
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_16__ {int CurrentPsp; } ;
struct TYPE_12__ {int Length; int Buffer; } ;
struct TYPE_15__ {int DeviceAttributes; TYPE_1__ Name; int Driver; int (* OpenRoutine ) (TYPE_4__*) ;} ;
struct TYPE_14__ {int DeviceInfo; int OpenMode; int OwnerPsp; scalar_t__ Win32Handle; int Size; int Attributes; int FileName; int DevicePointer; } ;
struct TYPE_13__ {int nLength; int bInheritHandle; int * lpSecurityDescriptor; } ;
typedef int SecurityAttributes ;
typedef TYPE_2__ SECURITY_ATTRIBUTES ;
typedef TYPE_3__* PDOS_FILE_DESCRIPTOR ;
typedef TYPE_4__* PDOS_DEVICE_NODE ;
typedef int* LPWORD ;
typedef int LPCSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;
typedef int ACCESS_MASK ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int,TYPE_2__*,int,int,int *) ;
 int FUNC_2 (char*,int ,int,int,int) ;
 int FUNC_3 () ;
 TYPE_4__* FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int *) ;
 scalar_t__ FUNC_9 () ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_10 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int,char) ;
 int FUNC_13 (TYPE_3__*,int) ;
 TYPE_7__* VAR_18 ;
 int FUNC_14 (int ,TYPE_3__*) ;
 int VAR_19 ;
 int FUNC_15 (TYPE_4__*) ;

WORD FUNC_16(LPWORD VAR_20,
                     LPWORD VAR_21,
                     LPCSTR VAR_22,
                     BYTE VAR_23,
                     WORD VAR_24,
                     WORD VAR_25)
{
    WORD VAR_26;
    HANDLE VAR_27;
    PDOS_DEVICE_NODE VAR_28;
    WORD VAR_29;
    ACCESS_MASK VAR_30 = 0;
    DWORD VAR_31 = 0;
    DWORD VAR_32 = 0;
    BOOL VAR_33 = VAR_7;
    SECURITY_ATTRIBUTES VAR_34;
    BYTE VAR_35;
    PDOS_FILE_DESCRIPTOR VAR_36;

    FUNC_2("DosCreateFileEx: FilePath \"%s\", AccessShareModes 0x%04X, CreateActionFlags 0x%04X, Attributes 0x%04X\n",
           VAR_22, VAR_23, VAR_24, VAR_25);






    VAR_28 = FUNC_4(VAR_22);
    if (VAR_28 != ((void*)0))
    {
        if (VAR_28->OpenRoutine) VAR_28->OpenRoutine(VAR_28);
    }
    else
    {

        switch (VAR_23 & 0x03)
        {

            case 0:
                VAR_30 = VAR_12;
                break;


            case 1:
                VAR_30 = VAR_13;
                break;


            case 2:
                VAR_30 = VAR_12 | VAR_13;
                break;


            default:
                return VAR_4;
        }


        switch ((VAR_23 >> 4) & 0x07)
        {

            case 0:
                VAR_31 = VAR_10 | VAR_11 | VAR_9;
                break;


            case 1:
                VAR_31 = 0;
                break;


            case 2:
                VAR_31 = VAR_10;
                break;


            case 3:
                VAR_31 = VAR_11;
                break;


            case 4:
                VAR_31 = VAR_10 | VAR_11;
                break;


            default:
                return VAR_4;
        }
        switch (VAR_24)
        {

            case 0x00:


                VAR_32 = VAR_17;
                break;


            case 0x01:
                VAR_32 = VAR_17;
                break;


            case 0x02:
                VAR_32 = VAR_19;
                break;


            case 0x10:
                VAR_32 = VAR_1;
                break;


            case 0x11:
                VAR_32 = VAR_16;
                break;


            case 0x12:
                VAR_32 = VAR_0;
                break;


            default:
                return VAR_4;
        }


        VAR_33 = ((VAR_23 & 0x80) == 0);


        VAR_34.nLength = sizeof(VAR_34);
        VAR_34.lpSecurityDescriptor = ((void*)0);
        VAR_34.bInheritHandle = VAR_33;


        VAR_27 = FUNC_1(VAR_22,
                                 VAR_30,
                                 VAR_31,
                                 &VAR_34,
                                 VAR_32,
                                 VAR_25,
                                 ((void*)0));

        VAR_26 = (WORD)FUNC_9();

        if (VAR_27 == VAR_15)
        {

            return VAR_26;
        }





        if (VAR_24 == 0)
        {

            FUNC_0(VAR_27);
            return VAR_3;
        }


        switch (VAR_24)
        {
            case 0x01:
                *VAR_21 = 0x01;
                break;

            case 0x02:
                *VAR_21 = 0x03;
                break;

            case 0x10:
                *VAR_21 = 0x02;
                break;

            case 0x11:
            {
                if (VAR_26 == VAR_2)
                    *VAR_21 = 0x01;
                else
                    *VAR_21 = 0x02;

                break;
            }

            case 0x12:
            {
                if (VAR_26 == VAR_2)
                    *VAR_21 = 0x03;
                else
                    *VAR_21 = 0x02;

                break;
            }
        }
    }

    VAR_35 = FUNC_3();
    if (VAR_35 == 0xFF)
    {

        FUNC_0(VAR_27);
        return VAR_6;
    }


    VAR_36 = FUNC_5(VAR_35);
    FUNC_13(VAR_36, sizeof(*VAR_36));
    FUNC_12(VAR_36->FileName, sizeof(VAR_36->FileName), ' ');

    if (VAR_28 != ((void*)0))
    {
        VAR_36->DevicePointer = VAR_28->Driver;
        VAR_36->DeviceInfo = VAR_28->DeviceAttributes | VAR_8;
        FUNC_11(VAR_36->FileName, VAR_28->Name.Buffer, VAR_28->Name.Length);
    }
    else
    {
        VAR_36->OpenMode = VAR_23;
        VAR_36->Attributes = FUNC_10(FUNC_7(VAR_22));
        VAR_36->Size = FUNC_8(VAR_27, ((void*)0));
        VAR_36->Win32Handle = VAR_27;
        FUNC_14(VAR_22, VAR_36);
    }

    VAR_36->OwnerPsp = VAR_18->CurrentPsp;


    VAR_29 = FUNC_6(VAR_35);
    if (VAR_29 == VAR_14)
    {

        FUNC_0(VAR_27);
        return VAR_6;
    }


    *VAR_20 = VAR_29;
    return VAR_5;
}
