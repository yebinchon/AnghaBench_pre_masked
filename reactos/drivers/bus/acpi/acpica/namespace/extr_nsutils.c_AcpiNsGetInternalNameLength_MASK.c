
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_3__ {char* ExternalName; int NumSegments; char const* NextExternalChar; scalar_t__ NumCarats; scalar_t__ Length; int FullyQualified; } ;
typedef TYPE_1__ ACPI_NAMESTRING_INFO ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_4 (
    ACPI_NAMESTRING_INFO *VAR_3)
{
    const char *VAR_4;
    UINT32 VAR_5;


    FUNC_0 ();


    VAR_4 = VAR_3->ExternalName;
    VAR_3->NumCarats = 0;
    VAR_3->NumSegments = 0;
    VAR_3->FullyQualified = VAR_1;
    if (FUNC_3 (*VAR_4))
    {
        VAR_3->FullyQualified = VAR_2;
        VAR_4++;



        while (FUNC_3 (*VAR_4))
        {
            VAR_4++;
        }
    }
    else
    {


        while (FUNC_1 (*VAR_4))
        {
            VAR_3->NumCarats++;
            VAR_4++;
        }
    }






    if (*VAR_4)
    {
        VAR_3->NumSegments = 1;
        for (VAR_5 = 0; VAR_4[VAR_5]; VAR_5++)
        {
            if (FUNC_2 (VAR_4[VAR_5]))
            {
                VAR_3->NumSegments++;
            }
        }
    }

    VAR_3->Length = (VAR_0 * VAR_3->NumSegments) +
        4 + VAR_3->NumCarats;

    VAR_3->NextExternalChar = VAR_4;
}
