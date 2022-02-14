
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PKSTART_ROUTINE ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int HANDLE ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_OSD_EXEC_CALLBACK ;
typedef int ACPI_EXECUTE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int *,int *,int *,int ,void*) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;

ACPI_STATUS
FUNC_5 (
    ACPI_EXECUTE_TYPE VAR_4,
    ACPI_OSD_EXEC_CALLBACK VAR_5,
    void *VAR_6)
{
    HANDLE VAR_7;
    OBJECT_ATTRIBUTES VAR_8;
    NTSTATUS VAR_9;

    FUNC_0("AcpiOsExecute\n");

    FUNC_1(&VAR_8,
                               ((void*)0),
                               VAR_2,
                               ((void*)0),
                               ((void*)0));

    VAR_9 = FUNC_3(&VAR_7,
                                  VAR_3,
                                  &VAR_8,
                                  ((void*)0),
                                  ((void*)0),
                                  (PKSTART_ROUTINE)VAR_5,
                                  VAR_6);
    if (!FUNC_2(VAR_9))
        return VAR_0;

    FUNC_4(VAR_7);

    return VAR_1;
}
