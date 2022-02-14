
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_34__ {int NodeFlags; int FullPathname; TYPE_7__* Predefined; } ;
struct TYPE_30__ {int Length; } ;
struct TYPE_29__ {size_t Count; TYPE_8__** Elements; } ;
struct TYPE_28__ {int Type; } ;
struct TYPE_27__ {int Value; } ;
struct TYPE_33__ {TYPE_5__ Buffer; TYPE_4__ Package; TYPE_3__ Common; TYPE_2__ Integer; } ;
struct TYPE_31__ {int Type; size_t Count1; size_t Count2; int ObjectType2; int ObjectType1; } ;
struct TYPE_26__ {size_t Count; int TailObjectType; int * ObjectType; } ;
struct TYPE_32__ {TYPE_6__ RetInfo; TYPE_1__ RetInfo3; } ;
typedef int ACPI_STATUS ;
typedef TYPE_7__ ACPI_PREDEFINED_INFO ;
typedef TYPE_8__ ACPI_OPERAND_OBJECT ;
typedef TYPE_9__ ACPI_EVALUATE_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_9__*,TYPE_8__**,int ,size_t) ;
 int FUNC_5 (TYPE_9__*,TYPE_8__**,int ,size_t,int ,size_t,int ) ;
 int FUNC_6 (TYPE_9__*,TYPE_7__ const*,TYPE_8__**,size_t) ;
 int FUNC_7 (TYPE_9__*,TYPE_8__**,size_t) ;
 int FUNC_8 (TYPE_9__*,int,TYPE_8__*) ;
 int FUNC_9 (TYPE_9__*,TYPE_8__*,TYPE_8__**) ;
 int VAR_8 ;

ACPI_STATUS
FUNC_10 (
    ACPI_EVALUATE_INFO *VAR_9,
    ACPI_OPERAND_OBJECT **VAR_10)
{
    ACPI_OPERAND_OBJECT *VAR_11 = *VAR_10;
    const ACPI_PREDEFINED_INFO *VAR_12;
    ACPI_OPERAND_OBJECT **VAR_13;
    ACPI_STATUS VAR_14 = VAR_7;
    UINT32 VAR_15;
    UINT32 VAR_16;
    UINT32 VAR_17;


    FUNC_2 (VAR_8);




    VAR_12 = VAR_9->Predefined + 1;

    FUNC_0 ((VAR_0,
        "%s Validating return Package of Type %X, Count %X\n",
        VAR_9->FullPathname, VAR_12->RetInfo.Type,
        VAR_11->Package.Count));





    FUNC_8 (VAR_9, VAR_12->RetInfo.Type, VAR_11);



    VAR_13 = VAR_11->Package.Elements;
    VAR_16 = VAR_11->Package.Count;





    if (!VAR_16)
    {
        if (VAR_12->RetInfo.Type == 138)
        {
            return (VAR_7);
        }

        FUNC_3 ((VAR_6, VAR_9->FullPathname, VAR_9->NodeFlags,
            "Return Package has no elements (empty)"));

        return (VAR_5);
    }







    switch (VAR_12->RetInfo.Type)
    {
    case 128:

        VAR_14 = FUNC_7 (VAR_9, VAR_13, VAR_16);
        break;

    case 140:






        VAR_15 = VAR_12->RetInfo.Count1 + VAR_12->RetInfo.Count2;
        if (VAR_16 < VAR_15)
        {
            goto PackageTooSmall;
        }
        else if (VAR_16 > VAR_15)
        {
            FUNC_0 ((VAR_1,
                "%s: Return Package is larger than needed - "
                "found %u, expected %u\n",
                VAR_9->FullPathname, VAR_16, VAR_15));
        }



        VAR_14 = FUNC_5 (VAR_9, VAR_13,
            VAR_12->RetInfo.ObjectType1, VAR_12->RetInfo.Count1,
            VAR_12->RetInfo.ObjectType2, VAR_12->RetInfo.Count2, 0);
        break;

    case 138:




        for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
        {
            VAR_14 = FUNC_4 (VAR_9, VAR_13,
                VAR_12->RetInfo.ObjectType1, VAR_17);
            if (FUNC_1 (VAR_14))
            {
                return (VAR_14);
            }

            VAR_13++;
        }
        break;

    case 139:







        VAR_15 = VAR_12->RetInfo3.Count;
        if (VAR_16 < VAR_15)
        {
            goto PackageTooSmall;
        }



        for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
        {
            if (VAR_17 < VAR_12->RetInfo3.Count)
            {


                VAR_14 = FUNC_4 (VAR_9, VAR_13,
                    VAR_12->RetInfo3.ObjectType[VAR_17], VAR_17);
                if (FUNC_1 (VAR_14))
                {
                    return (VAR_14);
                }
            }
            else
            {


                VAR_14 = FUNC_4 (VAR_9, VAR_13,
                    VAR_12->RetInfo3.TailObjectType, VAR_17);
                if (FUNC_1 (VAR_14))
                {
                    return (VAR_14);
                }
            }

            VAR_13++;
        }
        break;

    case 131:



        VAR_14 = FUNC_4 (
            VAR_9, VAR_13, VAR_2, 0);
        if (FUNC_1 (VAR_14))
        {
            return (VAR_14);
        }

        VAR_13++;
        VAR_16--;



        VAR_14 = FUNC_6 (VAR_9, VAR_12, VAR_13, VAR_16);
        break;

    case 132:



        VAR_14 = FUNC_4 (
            VAR_9, VAR_13, VAR_2, 0);
        if (FUNC_1 (VAR_14))
        {
            return (VAR_14);
        }





        VAR_15 = (UINT32) (*VAR_13)->Integer.Value;
        if (VAR_15 >= VAR_16)
        {
            goto PackageTooSmall;
        }

        VAR_16 = VAR_15;
        VAR_13++;



        VAR_14 = FUNC_6 (VAR_9, VAR_12, VAR_13, VAR_16);
        break;

    case 137:
    case 135:
    case 133:
    case 136:
    case 134:
        if (*VAR_13 && ((*VAR_13)->Common.Type != VAR_3))
        {


            VAR_14 = FUNC_9 (
                VAR_9, VAR_11, VAR_10);
            if (FUNC_1 (VAR_14))
            {
                return (VAR_14);
            }



            VAR_11 = *VAR_10;
            VAR_13 = VAR_11->Package.Elements;
            VAR_16 = 1;
        }



        VAR_14 = FUNC_6 (VAR_9, VAR_12, VAR_13, VAR_16);
        break;

    case 129:




        break;

    case 130:



        if (VAR_16 & 1)
        {
            VAR_15 = VAR_16 + 1;
            goto PackageTooSmall;
        }

        while (VAR_16 > 0)
        {
            VAR_14 = FUNC_4(VAR_9, VAR_13,
                VAR_12->RetInfo.ObjectType1, 0);
            if (FUNC_1(VAR_14))
            {
                return (VAR_14);
            }



            if ((*VAR_13)->Buffer.Length != 16)
            {
                FUNC_3 ((VAR_6, VAR_9->FullPathname,
                    VAR_9->NodeFlags, "Invalid length for UUID Buffer"));
                return (VAR_5);
            }

            VAR_14 = FUNC_4(VAR_9, VAR_13 + 1,
                VAR_12->RetInfo.ObjectType2, 0);
            if (FUNC_1(VAR_14))
            {
                return (VAR_14);
            }

            VAR_13 += 2;
            VAR_16 -= 2;
        }
        break;

    default:



        FUNC_3 ((VAR_6, VAR_9->FullPathname, VAR_9->NodeFlags,
            "Invalid internal return type in table entry: %X",
            VAR_12->RetInfo.Type));

        return (VAR_4);
    }

    return (VAR_14);


PackageTooSmall:



    FUNC_3 ((VAR_6, VAR_9->FullPathname, VAR_9->NodeFlags,
        "Return Package is too small - found %u elements, expected %u",
        VAR_16, VAR_15));

    return (VAR_5);
}
