
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT32 ;
struct TYPE_5__ {scalar_t__ Value; } ;
struct TYPE_7__ {TYPE_1__ Integer; int Type; } ;
struct TYPE_6__ {int Count; TYPE_3__* Pointer; } ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_2__ ACPI_OBJECT_LIST ;
typedef TYPE_3__ ACPI_OBJECT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int *,char*,TYPE_2__*,int *) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_4 (
    char *VAR_5,
    UINT32 VAR_6)
{
    ACPI_OBJECT_LIST VAR_7;
    ACPI_OBJECT VAR_8;
    ACPI_STATUS VAR_9;


    FUNC_2 (VAR_3);




    VAR_7.Count = 1;
    VAR_7.Pointer = &VAR_8;
    VAR_8.Type = VAR_0;
    VAR_8.Integer.Value = (UINT64) VAR_6;

    VAR_9 = FUNC_3 (((void*)0), VAR_5, &VAR_7, ((void*)0));
    if (FUNC_1 (VAR_9) && VAR_9 != VAR_2)
    {
        FUNC_0 ((VAR_1, VAR_9, "While executing method %s",
            VAR_5));
    }

    VAR_4;
}
