
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {int Integer; } ;
struct TYPE_28__ {int OwnerId; TYPE_1__ Name; } ;
struct TYPE_24__ {int AmlLength; int AmlStart; } ;
struct TYPE_27__ {TYPE_3__ Method; } ;
struct TYPE_23__ {TYPE_7__* Node; } ;
struct TYPE_26__ {TYPE_2__ Common; } ;
struct TYPE_25__ {int DescendingCallback; } ;
typedef TYPE_4__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_5__ ACPI_PARSE_OBJECT ;
typedef TYPE_6__ ACPI_OPERAND_OBJECT ;
typedef TYPE_7__ ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_7__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_3 (int ,int *,int *,int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*,TYPE_7__*,int ,int ,int *,int ) ;
 TYPE_5__* FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_5__*,int ) ;
 int FUNC_11 (TYPE_7__*) ;
 int VAR_4 ;
 int FUNC_12 (int ) ;

ACPI_STATUS
FUNC_13 (
    ACPI_NAMESPACE_NODE *VAR_5,
    ACPI_OPERAND_OBJECT *VAR_6)
{
    ACPI_STATUS VAR_7;
    ACPI_PARSE_OBJECT *VAR_8 = ((void*)0);
    ACPI_WALK_STATE *VAR_9;


    FUNC_2 (VAR_4, VAR_5);


    FUNC_0 ((VAR_0,
        "Method auto-serialization parse [%4.4s] %p\n",
        FUNC_11 (VAR_5), VAR_5));



    VAR_8 = FUNC_6 (VAR_2, VAR_6->Method.AmlStart);
    if (!VAR_8)
    {
        FUNC_12 (VAR_1);
    }

    FUNC_10 (VAR_8, VAR_5->Name.Integer);
    VAR_8->Common.Node = VAR_5;



    VAR_9 = FUNC_3 (VAR_5->OwnerId, ((void*)0), ((void*)0), ((void*)0));
    if (!VAR_9)
    {
        FUNC_8 (VAR_8);
        FUNC_12 (VAR_1);
    }

    VAR_7 = FUNC_5 (VAR_9, VAR_8, VAR_5,
        VAR_6->Method.AmlStart, VAR_6->Method.AmlLength, ((void*)0), 0);
    if (FUNC_1 (VAR_7))
    {
        FUNC_4 (VAR_9);
        FUNC_8 (VAR_8);
        FUNC_12 (VAR_7);
    }

    VAR_9->DescendingCallback = VAR_3;



    VAR_7 = FUNC_9 (VAR_9);

    FUNC_7 (VAR_8);
    FUNC_12 (VAR_7);
}
