
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_12__ {void* LastErrorCode; } ;
struct TYPE_11__ {int DeviceAttributes; int (* OutputStatusRoutine ) (TYPE_2__*) ;int (* InputStatusRoutine ) (TYPE_2__*) ;int (* IoctlWriteRoutine ) (TYPE_2__*,int ,int*) ;int (* IoctlReadRoutine ) (TYPE_2__*,int ,int*) ;} ;
struct TYPE_10__ {int DeviceInfo; int Size; int Position; int DevicePointer; } ;
typedef int* PWORD ;
typedef TYPE_1__* PDOS_FILE_DESCRIPTOR ;
typedef TYPE_2__* PDOS_DEVICE_NODE ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int,int ,int*) ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_7__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int ,int*) ;
 int FUNC_6 (TYPE_2__*,int ,int*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

BOOLEAN FUNC_9(WORD VAR_9, BYTE VAR_10, DWORD VAR_11, PWORD VAR_12)
{
    PDOS_FILE_DESCRIPTOR VAR_13;
    PDOS_DEVICE_NODE VAR_14 = ((void*)0);

    switch (VAR_10)
    {
        case 0x04:
        case 0x05:
        case 0x08:
        case 0x09:
            return FUNC_1(VAR_9, VAR_10, VAR_11, VAR_12);
    }

    VAR_13 = FUNC_3(VAR_9);

    if (!VAR_13)
    {
        VAR_6->LastErrorCode = VAR_2;
        return VAR_4;
    }

    if (VAR_13->DeviceInfo & VAR_5)
    {
        VAR_14 = FUNC_2(VAR_13->DevicePointer);
    }

    switch (VAR_10)
    {

        case 0x00:
        {




            FUNC_4(VAR_13->DeviceInfo);
            return VAR_7;
        }


        case 0x01:
        {

            VAR_8;
            return VAR_4;
        }


        case 0x02:
        {
            if (VAR_14 == ((void*)0) || !(VAR_14->DeviceAttributes & VAR_0))
            {
                VAR_6->LastErrorCode = VAR_1;
                return VAR_4;
            }


            if (!VAR_14->IoctlReadRoutine)
            {
                *VAR_12 = 0;
                return VAR_7;
            }

            VAR_14->IoctlReadRoutine(VAR_14, VAR_11, VAR_12);
            return VAR_7;
        }


        case 0x03:
        {
            if (VAR_14 == ((void*)0) || !(VAR_14->DeviceAttributes & VAR_0))
            {
                VAR_6->LastErrorCode = VAR_1;
                return VAR_4;
            }


            if (!VAR_14->IoctlWriteRoutine)
            {
                *VAR_12 = 0;
                return VAR_7;
            }

            VAR_14->IoctlWriteRoutine(VAR_14, VAR_11, VAR_12);
            return VAR_7;
        }


        case 0x06:
        {

            if (VAR_14)
            {


                if (!VAR_14->InputStatusRoutine || VAR_14->InputStatusRoutine(VAR_14))
                {

                    *VAR_12 = 0xFF;
                }
                else
                {

                    *VAR_12 = 0;
                }
            }
            else
            {


                if (VAR_13->Position < VAR_13->Size)
                {

                    *VAR_12 = 0xFF;
                }
                else
                {

                    *VAR_12 = 0;
                }
            }

            return VAR_7;
        }


        case 0x07:
        {

            if (VAR_14)
            {


                if (!VAR_14->OutputStatusRoutine || VAR_14->OutputStatusRoutine(VAR_14))
                {

                    *VAR_12 = 0xFF;
                }
                else
                {

                    *VAR_12 = 0;
                }
            }
            else
            {

                *VAR_12 = 0xFF;
            }

            return VAR_7;
        }


        default:
        {
            FUNC_0("Unsupported IOCTL: 0x%02X\n", VAR_10);

            VAR_6->LastErrorCode = VAR_3;
            return VAR_4;
        }
    }
}
