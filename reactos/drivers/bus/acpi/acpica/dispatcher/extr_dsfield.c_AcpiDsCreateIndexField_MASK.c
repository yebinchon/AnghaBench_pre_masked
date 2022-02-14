
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_17__ {int * RegionNode; int FieldType; scalar_t__ FieldFlags; int DataRegisterNode; int RegisterNode; } ;
struct TYPE_13__ {scalar_t__ Integer; int String; TYPE_4__* Arg; } ;
struct TYPE_14__ {TYPE_4__* Next; TYPE_1__ Value; } ;
struct TYPE_16__ {TYPE_2__ Common; } ;
struct TYPE_15__ {int ScopeInfo; } ;
typedef TYPE_3__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;
typedef TYPE_5__ ACPI_CREATE_FIELD_INFO ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_5__*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (int ,int ,int ,int ,int ,TYPE_3__*,int *) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;

ACPI_STATUS
FUNC_6 (
    ACPI_PARSE_OBJECT *VAR_5,
    ACPI_NAMESPACE_NODE *VAR_6,
    ACPI_WALK_STATE *VAR_7)
{
    ACPI_STATUS VAR_8;
    ACPI_PARSE_OBJECT *VAR_9;
    ACPI_CREATE_FIELD_INFO VAR_10;


    FUNC_2 (VAR_4, VAR_5);




    VAR_9 = VAR_5->Common.Value.Arg;
    VAR_8 = FUNC_4 (VAR_7->ScopeInfo, VAR_9->Common.Value.String,
        VAR_2, VAR_0,
        VAR_1, VAR_7, &VAR_10.RegisterNode);
    if (FUNC_1 (VAR_8))
    {
        FUNC_0 (VAR_7->ScopeInfo,
            VAR_9->Common.Value.String, VAR_8);
        FUNC_5 (VAR_8);
    }



    VAR_9 = VAR_9->Common.Next;
    VAR_8 = FUNC_4 (VAR_7->ScopeInfo, VAR_9->Common.Value.String,
        VAR_2, VAR_0,
        VAR_1, VAR_7, &VAR_10.DataRegisterNode);
    if (FUNC_1 (VAR_8))
    {
        FUNC_0 (VAR_7->ScopeInfo,
            VAR_9->Common.Value.String, VAR_8);
        FUNC_5 (VAR_8);
    }



    VAR_9 = VAR_9->Common.Next;
    VAR_10.FieldFlags = (UINT8) VAR_9->Common.Value.Integer;



    VAR_10.FieldType = VAR_3;
    VAR_10.RegionNode = VAR_6;

    VAR_8 = FUNC_3 (&VAR_10, VAR_7, VAR_9->Common.Next);
    FUNC_5 (VAR_8);
}
