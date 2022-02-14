
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT32 ;
typedef size_t UINT16 ;
typedef int INT32 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;

void
FUNC_2 (
    char *VAR_0,
    UINT16 VAR_1)
{
    UINT32 VAR_2;


    if (!VAR_0)
    {
        FUNC_0 ("<\"NULL STRING PTR\">");
        return;
    }

    FUNC_0 ("\"");
    for (VAR_2 = 0; (VAR_2 < VAR_1) && VAR_0[VAR_2]; VAR_2++)
    {


        switch (VAR_0[VAR_2])
        {
        case 0x07:

            FUNC_0 ("\\a");
            break;

        case 0x08:

            FUNC_0 ("\\b");
            break;

        case 0x0C:

            FUNC_0 ("\\f");
            break;

        case 0x0A:

            FUNC_0 ("\\n");
            break;

        case 0x0D:

            FUNC_0 ("\\r");
            break;

        case 0x09:

            FUNC_0 ("\\t");
            break;

        case 0x0B:

            FUNC_0 ("\\v");
            break;

        case '\'':
        case '\"':
        case '\\':

            FUNC_0 ("\\%c", (int) VAR_0[VAR_2]);
            break;

        default:



            if (FUNC_1 ((int) VAR_0[VAR_2]))
            {


                FUNC_0 ("%c", (int) VAR_0[VAR_2]);
            }
            else
            {


                FUNC_0 ("\\x%2.2X", (INT32) VAR_0[VAR_2]);
            }
            break;
        }
    }

    FUNC_0 ("\"");

    if (VAR_2 == VAR_1 && VAR_0[VAR_2])
    {
        FUNC_0 ("...");
    }
}
