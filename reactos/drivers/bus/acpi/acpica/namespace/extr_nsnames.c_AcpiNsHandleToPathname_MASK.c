
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_4__ {int * Pointer; } ;
typedef int BOOLEAN ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_SIZE ;
typedef int ACPI_NAMESPACE_NODE ;
typedef int ACPI_HANDLE ;
typedef TYPE_1__ ACPI_BUFFER ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,int *,scalar_t__,int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;

ACPI_STATUS
FUNC_7 (
    ACPI_HANDLE VAR_4,
    ACPI_BUFFER *VAR_5,
    BOOLEAN VAR_6)
{
    ACPI_STATUS VAR_7;
    ACPI_NAMESPACE_NODE *VAR_8;
    ACPI_SIZE VAR_9;


    FUNC_2 (VAR_3, VAR_4);


    VAR_8 = FUNC_4 (VAR_4);
    if (!VAR_8)
    {
        FUNC_6 (VAR_1);
    }



    VAR_9 = FUNC_3 (VAR_8, ((void*)0), 0, VAR_6);
    if (!VAR_9)
    {
        FUNC_6 (VAR_1);
    }



    VAR_7 = FUNC_5 (VAR_5, VAR_9);
    if (FUNC_1 (VAR_7))
    {
        FUNC_6 (VAR_7);
    }



    (void) FUNC_3 (VAR_8, VAR_5->Pointer,
        VAR_9, VAR_6);

    FUNC_0 ((VAR_0, "%s [%X]\n",
        (char *) VAR_5->Pointer, (UINT32) VAR_9));
    FUNC_6 (VAR_2);
}
