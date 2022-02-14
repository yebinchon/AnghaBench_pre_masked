
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_5__ {int BitLength; int AccessByteWidth; int StartFieldBitOffset; } ;
struct TYPE_6__ {TYPE_1__ CommonField; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (TYPE_2__*,int,int*,int ) ;
 int VAR_5 ;
 int FUNC_9 (char*,int*,int) ;
 int FUNC_10 (void*,int ,int) ;
 int FUNC_11 (int ) ;

ACPI_STATUS
FUNC_12 (
    ACPI_OPERAND_OBJECT *VAR_6,
    void *VAR_7,
    UINT32 VAR_8)
{
    ACPI_STATUS VAR_9;
    UINT64 VAR_10;
    UINT64 VAR_11;
    UINT32 VAR_12 = 0;
    UINT32 VAR_13 = 0;
    UINT32 VAR_14;
    UINT32 VAR_15;
    UINT32 VAR_16;
    UINT32 VAR_17;
    UINT32 VAR_18;


    FUNC_2 (VAR_5);




    if (VAR_8 <
        FUNC_6 (VAR_6->CommonField.BitLength))
    {
        FUNC_0 ((VAR_3,
            "Field size %u (bits) is too large for buffer (%u)",
            VAR_6->CommonField.BitLength, VAR_8));

        FUNC_11 (VAR_2);
    }

    FUNC_10 (VAR_7, 0, VAR_8);
    VAR_17 = FUNC_5 (VAR_6->CommonField.AccessByteWidth);



    if ((VAR_6->CommonField.StartFieldBitOffset == 0) &&
        (VAR_6->CommonField.BitLength == VAR_17))
    {
        if (VAR_8 >= sizeof (UINT64))
        {
            VAR_9 = FUNC_8 (VAR_6, 0, VAR_7, VAR_1);
        }
        else
        {


            VAR_9 = FUNC_8 (VAR_6, 0, &VAR_10, VAR_1);
            FUNC_9 (VAR_7, &VAR_10, VAR_8);
        }

        FUNC_11 (VAR_9);
    }





    if (VAR_6->CommonField.AccessByteWidth > sizeof (UINT64))
    {
        VAR_6->CommonField.AccessByteWidth = sizeof (UINT64);
        VAR_17 = sizeof (UINT64) * 8;
    }



    VAR_15 = FUNC_7 (
        VAR_6->CommonField.BitLength, VAR_17);

    VAR_16 = FUNC_7 (
        VAR_6->CommonField.BitLength +
        VAR_6->CommonField.StartFieldBitOffset, VAR_17);



    VAR_9 = FUNC_8 (VAR_6, VAR_12, &VAR_10, VAR_1);
    if (FUNC_1 (VAR_9))
    {
        FUNC_11 (VAR_9);
    }
    VAR_11 = VAR_10 >> VAR_6->CommonField.StartFieldBitOffset;



    for (VAR_18 = 1; VAR_18 < VAR_16; VAR_18++)
    {


        VAR_12 += VAR_6->CommonField.AccessByteWidth;
        VAR_9 = FUNC_8 (
            VAR_6, VAR_12, &VAR_10, VAR_1);
        if (FUNC_1 (VAR_9))
        {
            FUNC_11 (VAR_9);
        }
        if (VAR_17 - VAR_6->CommonField.StartFieldBitOffset <
            VAR_0)
        {
            VAR_11 |= VAR_10 <<
                (VAR_17 - VAR_6->CommonField.StartFieldBitOffset);
        }

        if (VAR_18 == VAR_15)
        {
            break;
        }



        FUNC_9 (((char *) VAR_7) + VAR_13, &VAR_11,
            FUNC_4(VAR_6->CommonField.AccessByteWidth,
                VAR_8 - VAR_13));

        VAR_13 += VAR_6->CommonField.AccessByteWidth;
        VAR_11 = VAR_10 >> VAR_6->CommonField.StartFieldBitOffset;
    }



    VAR_14 = VAR_6->CommonField.BitLength % VAR_17;
    if (VAR_14)
    {
        VAR_11 &= FUNC_3 (VAR_14);
    }



    FUNC_9 (((char *) VAR_7) + VAR_13, &VAR_11,
        FUNC_4(VAR_6->CommonField.AccessByteWidth,
            VAR_8 - VAR_13));

    FUNC_11 (VAR_4);
}
