
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int BOOLEAN ;
typedef scalar_t__ ACPI_SIZE ;
typedef int ACPI_NAMESPACE_NODE ;


 char* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *,char*,scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_5 (char*) ;

char *
FUNC_6 (
    ACPI_NAMESPACE_NODE *VAR_4,
    BOOLEAN VAR_5)
{
    char *VAR_6;
    ACPI_SIZE VAR_7;


    FUNC_3 (VAR_3, VAR_4);




    VAR_7 = FUNC_4 (VAR_4, ((void*)0), 0, VAR_5);
    if (!VAR_7)
    {
        FUNC_5 (((void*)0));
    }



    VAR_6 = FUNC_0 (VAR_7);
    if (!VAR_6)
    {
        FUNC_2 ((VAR_2,
            "Could not allocate %u bytes", (UINT32) VAR_7));
        FUNC_5 (((void*)0));
    }



    (void) FUNC_4 (VAR_4, VAR_6, VAR_7, VAR_5);

    FUNC_1 ((VAR_0, "%s: Path \"%s\"\n",
        VAR_1, VAR_6));

    FUNC_5 (VAR_6);
}
