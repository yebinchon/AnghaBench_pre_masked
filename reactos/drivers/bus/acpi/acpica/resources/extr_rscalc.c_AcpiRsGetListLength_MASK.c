
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
struct TYPE_17__ {size_t Type; size_t ResourceLength; } ;
struct TYPE_16__ {scalar_t__ VendorLength; scalar_t__ ResSourceOffset; scalar_t__ VendorOffset; } ;
struct TYPE_15__ {scalar_t__ VendorLength; scalar_t__ ResSourceOffset; scalar_t__ VendorOffset; } ;
struct TYPE_14__ {scalar_t__ VendorLength; scalar_t__ PinTableOffset; scalar_t__ VendorOffset; } ;
struct TYPE_13__ {scalar_t__ PinTableOffset; scalar_t__ VendorLength; scalar_t__ VendorOffset; } ;
struct TYPE_12__ {int ResourceLength; } ;
struct TYPE_11__ {scalar_t__ PinTableOffset; scalar_t__ VendorLength; scalar_t__ VendorOffset; } ;
struct TYPE_10__ {scalar_t__ PinTableOffset; scalar_t__ VendorLength; scalar_t__ VendorOffset; } ;
struct TYPE_18__ {TYPE_8__ CommonSerialBus; TYPE_7__ PinGroupConfig; TYPE_6__ PinGroupFunction; TYPE_5__ PinGroup; TYPE_4__ PinConfig; TYPE_3__ LargeHeader; TYPE_2__ PinFunction; TYPE_1__ Gpio; } ;
typedef int AML_RESOURCE_LARGE_HEADER ;
typedef TYPE_9__ AML_RESOURCE ;
typedef int ACPI_STATUS ;
typedef int ACPI_SIZE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,size_t*) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t* VAR_4 ;
 size_t* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (int,size_t) ;
 int FUNC_7 (size_t*) ;
 int FUNC_8 (size_t*) ;
 int FUNC_9 (size_t*) ;
 int const FUNC_10 (size_t*) ;
 int FUNC_11 (int *,size_t*,size_t*) ;
 int VAR_8 ;
 int FUNC_12 (int ) ;

ACPI_STATUS
FUNC_13 (
    UINT8 *VAR_9,
    UINT32 VAR_10,
    ACPI_SIZE *VAR_11)
{
    ACPI_STATUS VAR_12;
    UINT8 *VAR_13;
    UINT8 *VAR_14;
    UINT32 VAR_15;
    UINT16 VAR_16;
    UINT16 VAR_17;
    UINT32 VAR_18;
    UINT8 VAR_19;
    UINT8 VAR_20;
    AML_RESOURCE *VAR_21;


    FUNC_2 (VAR_8);


    *VAR_11 = VAR_1;
    VAR_13 = VAR_9 + VAR_10;



    while (VAR_9 < VAR_13)
    {


        VAR_12 = FUNC_11 (((void*)0), VAR_9, &VAR_19);
        if (FUNC_1 (VAR_12))
        {




            FUNC_12 (VAR_12);
        }

        VAR_21 = (void *) VAR_9;



        VAR_17 = FUNC_9 (VAR_9);
        VAR_20 = VAR_5[VAR_19];





        VAR_18 = 0;
        VAR_14 = VAR_9 + FUNC_8 (VAR_9);

        switch (FUNC_10 (VAR_9))
        {
        case 136:




            FUNC_3 (&VAR_16, VAR_14);
            VAR_18 = FUNC_5 (VAR_16);
            break;


        case 140:




            VAR_18 = FUNC_5 (*VAR_14);
            break;


        case 128:
        case 129:




            VAR_18 = VAR_17;






            if (VAR_18)
            {
                VAR_18--;
            }
            break;


        case 139:



            FUNC_12 (VAR_3);


        case 142:
        case 143:
        case 141:




            VAR_18 = FUNC_6 (
                VAR_17, VAR_20);
            break;


        case 138:






            VAR_18 = (VAR_14[1] - 1) * sizeof (UINT32);



            VAR_18 += FUNC_6 (
                VAR_17 - VAR_18, VAR_20);
            break;

        case 137:



            if (VAR_21->Gpio.VendorLength)
            {
                VAR_18 +=
                    VAR_21->Gpio.VendorOffset -
                    VAR_21->Gpio.PinTableOffset +
                    VAR_21->Gpio.VendorLength;
            }
            else
            {
                VAR_18 +=
                    VAR_21->LargeHeader.ResourceLength +
                    sizeof (AML_RESOURCE_LARGE_HEADER) -
                    VAR_21->Gpio.PinTableOffset;
            }
            break;

        case 134:



            if (VAR_21->PinFunction.VendorLength)
            {
                VAR_18 +=
                    VAR_21->PinFunction.VendorOffset -
                    VAR_21->PinFunction.PinTableOffset +
                    VAR_21->PinFunction.VendorLength;
            }
            else
            {
                VAR_18 +=
                    VAR_21->LargeHeader.ResourceLength +
                    sizeof (AML_RESOURCE_LARGE_HEADER) -
                    VAR_21->PinFunction.PinTableOffset;
            }
            break;

        case 130:

            VAR_20 = VAR_4[
                VAR_21->CommonSerialBus.Type];
            VAR_18 +=
                VAR_21->CommonSerialBus.ResourceLength -
                VAR_20;
            break;

        case 135:



            if (VAR_21->PinConfig.VendorLength)
            {
                VAR_18 +=
                    VAR_21->PinConfig.VendorOffset -
                    VAR_21->PinConfig.PinTableOffset +
                    VAR_21->PinConfig.VendorLength;
            }
            else
            {
                VAR_18 +=
                    VAR_21->LargeHeader.ResourceLength +
                    sizeof (AML_RESOURCE_LARGE_HEADER) -
                    VAR_21->PinConfig.PinTableOffset;
            }
            break;

        case 133:

            VAR_18 +=
                VAR_21->PinGroup.VendorOffset -
                VAR_21->PinGroup.PinTableOffset +
                VAR_21->PinGroup.VendorLength;

            break;

        case 131:

            VAR_18 +=
                VAR_21->PinGroupFunction.VendorOffset -
                VAR_21->PinGroupFunction.ResSourceOffset +
                VAR_21->PinGroupFunction.VendorLength;

            break;

        case 132:

            VAR_18 +=
                VAR_21->PinGroupConfig.VendorOffset -
                VAR_21->PinGroupConfig.ResSourceOffset +
                VAR_21->PinGroupConfig.VendorLength;

            break;

        default:

            break;
        }







        if (FUNC_10 (VAR_9) ==
            130)
        {
            VAR_15 = VAR_6[
                VAR_21->CommonSerialBus.Type] + VAR_18;
        }
        else
        {
            VAR_15 = VAR_7[VAR_19] +
                VAR_18;
        }

        VAR_15 = (UINT32) FUNC_4 (VAR_15);
        *VAR_11 += VAR_15;

        FUNC_0 ((VAR_0,
            "Type %.2X, AmlLength %.2X InternalLength %.2X\n",
            FUNC_10 (VAR_9),
            FUNC_7 (VAR_9), VAR_15));





        VAR_9 += FUNC_7 (VAR_9);
    }



    FUNC_12 (VAR_2);
}
