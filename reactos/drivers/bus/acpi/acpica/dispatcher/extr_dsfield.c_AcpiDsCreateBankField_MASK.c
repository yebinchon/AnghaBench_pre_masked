
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_19__ {int * DataRegisterNode; int * RegionNode; int FieldType; scalar_t__ FieldFlags; int * RegisterNode; } ;
struct TYPE_15__ {scalar_t__ Integer; int String; int Name; TYPE_4__* Arg; } ;
struct TYPE_16__ {TYPE_4__* Next; TYPE_1__ Value; } ;
struct TYPE_18__ {TYPE_2__ Common; } ;
struct TYPE_17__ {int ScopeInfo; } ;
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
 int VAR_4 ;
 int FUNC_3 (int ,TYPE_4__*,int ,TYPE_3__*,int **) ;
 int FUNC_4 (TYPE_5__*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_5 (int ,int ,int ,int ,int ,TYPE_3__*,int **) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;

ACPI_STATUS
FUNC_7 (
    ACPI_PARSE_OBJECT *VAR_6,
    ACPI_NAMESPACE_NODE *VAR_7,
    ACPI_WALK_STATE *VAR_8)
{
    ACPI_STATUS VAR_9;
    ACPI_PARSE_OBJECT *VAR_10;
    ACPI_CREATE_FIELD_INFO VAR_11;


    FUNC_2 (VAR_5, VAR_6);




    VAR_10 = VAR_6->Common.Value.Arg;
    if (!VAR_7)
    {
        VAR_9 = FUNC_5 (VAR_8->ScopeInfo, VAR_10->Common.Value.Name,
            VAR_4, VAR_0,
            VAR_1, VAR_8, &VAR_7);




        if (FUNC_1 (VAR_9))
        {
            FUNC_0 (VAR_8->ScopeInfo,
                VAR_10->Common.Value.Name, VAR_9);
            FUNC_6 (VAR_9);
        }
    }



    VAR_10 = VAR_10->Common.Next;
    VAR_9 = FUNC_5 (VAR_8->ScopeInfo, VAR_10->Common.Value.String,
        VAR_2, VAR_0,
        VAR_1, VAR_8, &VAR_11.RegisterNode);
    if (FUNC_1 (VAR_9))
    {
        FUNC_0 (VAR_8->ScopeInfo,
            VAR_10->Common.Value.String, VAR_9);
        FUNC_6 (VAR_9);
    }






    VAR_10 = VAR_10->Common.Next;



    VAR_10 = VAR_10->Common.Next;
    VAR_11.FieldFlags = (UINT8) VAR_10->Common.Value.Integer;



    VAR_11.FieldType = VAR_3;
    VAR_11.RegionNode = VAR_7;
    VAR_11.DataRegisterNode = (ACPI_NAMESPACE_NODE*) VAR_6;

    VAR_9 = FUNC_4 (&VAR_11, VAR_8, VAR_10->Common.Next);
    FUNC_6 (VAR_9);
}
