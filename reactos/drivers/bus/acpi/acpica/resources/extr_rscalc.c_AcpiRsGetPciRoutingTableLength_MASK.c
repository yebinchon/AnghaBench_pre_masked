
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_10__ {scalar_t__ Class; int Node; } ;
struct TYPE_9__ {scalar_t__ Length; } ;
struct TYPE_8__ {scalar_t__ Type; } ;
struct TYPE_7__ {scalar_t__ Count; TYPE_5__** Elements; } ;
struct TYPE_11__ {TYPE_4__ Reference; TYPE_3__ String; TYPE_2__ Common; TYPE_1__ Package; } ;
typedef scalar_t__ BOOLEAN ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_SIZE ;
typedef int ACPI_PCI_ROUTING_TABLE ;
typedef TYPE_5__ ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ) ;

ACPI_STATUS
FUNC_4 (
    ACPI_OPERAND_OBJECT *VAR_9,
    ACPI_SIZE *VAR_10)
{
    UINT32 VAR_11;
    ACPI_SIZE VAR_12 = 0;
    ACPI_OPERAND_OBJECT **VAR_13;
    UINT32 VAR_14;
    ACPI_OPERAND_OBJECT *VAR_15;
    ACPI_OPERAND_OBJECT **VAR_16;
    BOOLEAN VAR_17;
    UINT32 VAR_18;


    FUNC_0 (VAR_7);


    VAR_11 = VAR_9->Package.Count;
    VAR_13 = VAR_9->Package.Elements;

    for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
    {


        VAR_15 = *VAR_13;



        if (!VAR_15 ||
            (VAR_15->Common.Type != VAR_2))
        {
            FUNC_3 (VAR_4);
        }





        VAR_16 = VAR_15->Package.Elements;



        VAR_17 = VAR_6;

        for (VAR_18 = 0;
             VAR_18 < VAR_15->Package.Count && !VAR_17;
             VAR_18++)
        {
            if (*VAR_16 &&

                ((VAR_3 ==
                    (*VAR_16)->Common.Type) ||

                ((VAR_1 ==
                    (*VAR_16)->Common.Type) &&

                    ((*VAR_16)->Reference.Class ==
                        VAR_0))))
            {
                VAR_17 = VAR_8;
            }
            else
            {


                VAR_16++;
            }
        }

        VAR_12 += (sizeof (ACPI_PCI_ROUTING_TABLE) - 4);



        if (VAR_17)
        {
            if ((*VAR_16)->Common.Type == VAR_3)
            {




                VAR_12 += ((ACPI_SIZE)
                    (*VAR_16)->String.Length + 1);
            }
            else
            {
                VAR_12 += FUNC_2 (
                    (*VAR_16)->Reference.Node);
            }
        }
        else
        {




            VAR_12 += sizeof (UINT32);
        }



        VAR_12 = FUNC_1 (VAR_12);



        VAR_13++;
    }





    *VAR_10 = VAR_12 + sizeof (ACPI_PCI_ROUTING_TABLE);
    FUNC_3 (VAR_5);
}
