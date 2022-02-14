
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_21__ {int NodeFlags; int FullPathname; TYPE_6__* ParentPackage; } ;
struct TYPE_18__ {scalar_t__ Count; TYPE_6__** Elements; } ;
struct TYPE_16__ {scalar_t__ Value; } ;
struct TYPE_20__ {TYPE_4__ Package; TYPE_2__ Integer; } ;
struct TYPE_17__ {int Type; scalar_t__ Count1; scalar_t__ Count2; int ObjectType1; int ObjectType2; } ;
struct TYPE_15__ {scalar_t__ Count; int * ObjectType; } ;
struct TYPE_19__ {TYPE_3__ RetInfo; TYPE_1__ RetInfo2; } ;
typedef int ACPI_STATUS ;
typedef TYPE_5__ ACPI_PREDEFINED_INFO ;
typedef TYPE_6__ ACPI_OPERAND_OBJECT ;
typedef TYPE_7__ ACPI_EVALUATE_INFO ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_7__*,TYPE_6__**,int ,scalar_t__) ;
 int FUNC_4 (TYPE_7__*,TYPE_6__**,int ,scalar_t__,int ,scalar_t__,int) ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    ACPI_EVALUATE_INFO *VAR_6,
    const ACPI_PREDEFINED_INFO *VAR_7,
    ACPI_OPERAND_OBJECT **VAR_8,
    UINT32 VAR_9)
{
    ACPI_OPERAND_OBJECT *VAR_10;
    ACPI_OPERAND_OBJECT **VAR_11;
    ACPI_STATUS VAR_12;
    UINT32 VAR_13;
    UINT32 VAR_14;
    UINT32 VAR_15;
    for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
    {
        VAR_10 = *VAR_8;
        VAR_11 = VAR_10->Package.Elements;
        VAR_6->ParentPackage = VAR_10;



        VAR_12 = FUNC_3 (VAR_6, &VAR_10,
            VAR_1, VAR_14);
        if (FUNC_1 (VAR_12))
        {
            return (VAR_12);
        }



        VAR_6->ParentPackage = VAR_10;
        switch (VAR_7->RetInfo.Type)
        {
        case 135:
        case 130:
        case 129:



            VAR_13 = VAR_7->RetInfo.Count1 + VAR_7->RetInfo.Count2;
            if (VAR_10->Package.Count < VAR_13)
            {
                goto PackageTooSmall;
            }

            VAR_12 = FUNC_4 (VAR_6, VAR_11,
                VAR_7->RetInfo.ObjectType1,
                VAR_7->RetInfo.Count1,
                VAR_7->RetInfo.ObjectType2,
                VAR_7->RetInfo.Count2, 0);
            if (FUNC_1 (VAR_12))
            {
                return (VAR_12);
            }
            break;

        case 132:




            VAR_13 = VAR_7->RetInfo.Count1 + VAR_7->RetInfo.Count2;
            if (VAR_10->Package.Count < VAR_13)
            {
                goto PackageTooSmall;
            }

            VAR_12 = FUNC_4 (VAR_6, VAR_11,
                VAR_7->RetInfo.ObjectType1,
                VAR_7->RetInfo.Count1,
                VAR_7->RetInfo.ObjectType2,
                VAR_10->Package.Count - VAR_7->RetInfo.Count1, 0);
            if (FUNC_1 (VAR_12))
            {
                return (VAR_12);
            }
            break;

        case 128:



            break;

        case 133:



            VAR_13 = VAR_7->RetInfo2.Count;
            if (VAR_10->Package.Count < VAR_13)
            {
                goto PackageTooSmall;
            }



            for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++)
            {
                VAR_12 = FUNC_3 (VAR_6, &VAR_11[VAR_15],
                    VAR_7->RetInfo2.ObjectType[VAR_15], VAR_15);
                if (FUNC_1 (VAR_12))
                {
                    return (VAR_12);
                }
            }
            break;

        case 131:



            VAR_13 = VAR_7->RetInfo.Count1;
            if (VAR_10->Package.Count < VAR_13)
            {
                goto PackageTooSmall;
            }



            VAR_12 = FUNC_4 (VAR_6, VAR_11,
                VAR_7->RetInfo.ObjectType1,
                VAR_10->Package.Count, 0, 0, 0);
            if (FUNC_1 (VAR_12))
            {
                return (VAR_12);
            }
            break;

        case 134:




            VAR_12 = FUNC_3 (VAR_6, VAR_11,
                VAR_0, 0);
            if (FUNC_1 (VAR_12))
            {
                return (VAR_12);
            }





            VAR_13 = (UINT32) (*VAR_11)->Integer.Value;
            if (VAR_10->Package.Count < VAR_13)
            {
                goto PackageTooSmall;
            }

            if (VAR_10->Package.Count < VAR_7->RetInfo.Count1)
            {
                VAR_13 = VAR_7->RetInfo.Count1;
                goto PackageTooSmall;
            }

            if (VAR_13 == 0)
            {






                VAR_13 = VAR_10->Package.Count;
                (*VAR_11)->Integer.Value = VAR_13;
            }



            VAR_12 = FUNC_4 (VAR_6, (VAR_11 + 1),
                VAR_7->RetInfo.ObjectType1,
                (VAR_13 - 1), 0, 0, 1);
            if (FUNC_1 (VAR_12))
            {
                return (VAR_12);
            }
            break;

        default:

            FUNC_0 ((VAR_4, "Invalid Package type: %X",
                VAR_7->RetInfo.Type));
            return (VAR_2);
        }

        VAR_8++;
    }

    return (VAR_5);


PackageTooSmall:



    FUNC_2 ((VAR_4, VAR_6->FullPathname, VAR_6->NodeFlags,
        "Return SubPackage[%u] is too small - found %u elements, expected %u",
        VAR_14, VAR_10->Package.Count, VAR_13));

    return (VAR_3);
}
