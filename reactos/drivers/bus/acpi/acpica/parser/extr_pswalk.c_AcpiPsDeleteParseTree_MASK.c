
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_11__ {int String; } ;
struct TYPE_12__ {TYPE_4__* Parent; TYPE_4__* Next; TYPE_2__ Value; int AmlOpcode; } ;
struct TYPE_10__ {scalar_t__ AmlOpcode; } ;
struct TYPE_13__ {TYPE_3__ Common; TYPE_1__ Named; } ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_4__*) ;
 TYPE_4__* FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_7 (
    ACPI_PARSE_OBJECT *VAR_7)
{
    ACPI_PARSE_OBJECT *VAR_8 = VAR_7;
    ACPI_PARSE_OBJECT *VAR_9 = ((void*)0);
    ACPI_PARSE_OBJECT *VAR_10 = ((void*)0);
    UINT32 VAR_11 = 0;


    FUNC_1 (VAR_4, VAR_7);

    FUNC_0 ((VAR_0,
        " root %p\n", VAR_7));



    while (VAR_8)
    {
        if (VAR_8 != VAR_10)
        {


            if (FUNC_2 (VAR_1, VAR_5))
            {


                FUNC_3 ("        %*.s%s %p", (VAR_11 * 4), " ",
                    FUNC_6 (VAR_8->Common.AmlOpcode), VAR_8);

                if (VAR_8->Named.AmlOpcode == VAR_2)
                {
                    FUNC_3 ("    %4.4s", VAR_8->Common.Value.String);
                }
                if (VAR_8->Named.AmlOpcode == VAR_3)
                {
                    FUNC_3 ("    %s", VAR_8->Common.Value.String);
                }
                FUNC_3 ("\n");
            }



            VAR_9 = FUNC_5 (VAR_8, 0);
            if (VAR_9)
            {


                VAR_8 = VAR_9;
                VAR_11++;
                continue;
            }
        }



        VAR_9 = VAR_8->Common.Next;
        VAR_10 = VAR_8->Common.Parent;

        FUNC_4 (VAR_8);



        if (VAR_8 == VAR_7)
        {
            VAR_6;
        }

        if (VAR_9)
        {
            VAR_8 = VAR_9;
        }
        else
        {
            VAR_11--;
            VAR_8 = VAR_10;
        }
    }

    VAR_6;
}
