
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_31__ {TYPE_8__* RegionNode; int FieldType; scalar_t__ Attribute; scalar_t__ FieldFlags; } ;
struct TYPE_30__ {TYPE_5__* Object; } ;
struct TYPE_23__ {scalar_t__ Integer; int Name; TYPE_7__* Arg; } ;
struct TYPE_24__ {TYPE_7__* Next; TYPE_1__ Value; } ;
struct TYPE_29__ {TYPE_2__ Common; } ;
struct TYPE_28__ {int ScopeInfo; } ;
struct TYPE_26__ {scalar_t__ SpaceId; int Length; } ;
struct TYPE_25__ {int InternalPccBuffer; } ;
struct TYPE_27__ {TYPE_4__ Region; TYPE_3__ Field; } ;
typedef TYPE_6__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_7__ ACPI_PARSE_OBJECT ;
typedef TYPE_8__ ACPI_NAMESPACE_NODE ;
typedef TYPE_9__ ACPI_CREATE_FIELD_INFO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_7__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,TYPE_7__*,int ,TYPE_6__*,TYPE_8__**) ;
 int FUNC_5 (TYPE_9__*,TYPE_6__*,TYPE_7__*) ;
 int FUNC_6 (int ,int ,int ,int ,int ,TYPE_6__*,TYPE_8__**) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_9__*,int ,int) ;
 int FUNC_8 (int ) ;

ACPI_STATUS
FUNC_9 (
    ACPI_PARSE_OBJECT *VAR_7,
    ACPI_NAMESPACE_NODE *VAR_8,
    ACPI_WALK_STATE *VAR_9)
{
    ACPI_STATUS VAR_10;
    ACPI_PARSE_OBJECT *VAR_11;
    ACPI_CREATE_FIELD_INFO VAR_12;


    FUNC_3 (VAR_6, VAR_7);




    VAR_11 = VAR_7->Common.Value.Arg;

    if (!VAR_8)
    {
        VAR_10 = FUNC_6 (VAR_9->ScopeInfo, VAR_11->Common.Value.Name,
            VAR_4, VAR_1,
            VAR_2, VAR_9, &VAR_8);




        if (FUNC_2 (VAR_10))
        {
            FUNC_1 (VAR_9->ScopeInfo,
                VAR_11->Common.Value.Name, VAR_10);
            FUNC_8 (VAR_10);
        }
    }

    FUNC_7 (&VAR_12, 0, sizeof (ACPI_CREATE_FIELD_INFO));



    VAR_11 = VAR_11->Common.Next;
    VAR_12.FieldFlags = (UINT8) VAR_11->Common.Value.Integer;
    VAR_12.Attribute = 0;



    VAR_12.FieldType = VAR_3;
    VAR_12.RegionNode = VAR_8;

    VAR_10 = FUNC_5 (&VAR_12, VAR_9, VAR_11->Common.Next);
    if (VAR_12.RegionNode->Object->Region.SpaceId == VAR_0 &&
        !(VAR_8->Object->Field.InternalPccBuffer
        = FUNC_0(VAR_12.RegionNode->Object->Region.Length)))
    {
        FUNC_8 (VAR_5);
    }
    FUNC_8 (VAR_10);
}
