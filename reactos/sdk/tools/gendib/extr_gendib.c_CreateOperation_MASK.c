
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ RopCode; char* Operation; } ;
typedef TYPE_1__* PROPINFO ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_1, unsigned VAR_2, PROPINFO VAR_3, unsigned VAR_4,
                unsigned VAR_5)
{
    const char *VAR_6;
    const char *VAR_7;
    const char *VAR_8;

    FUNC_0(VAR_1);
    if (32 == VAR_5)
    {
        VAR_6 = "";
        VAR_7 = "*DestPtr";
    }
    else if (16 == VAR_2)
    {
        VAR_6 = "(USHORT) ";
        VAR_7 = "*((PUSHORT) DestPtr)";
    }
    else
    {
        VAR_6 = "(UCHAR) ";
        VAR_7 = "*((PUCHAR) DestPtr)";
    }
    FUNC_1(VAR_1, "%s = ", VAR_7);
    if (VAR_0 == VAR_3->RopCode)
    {
        FUNC_1(VAR_1, "%sDIB_DoRop(BltInfo->Rop4, %s, Source, Pattern)",
               VAR_6, VAR_7);
    }
    else
    {
        VAR_8 = VAR_3->Operation;
        while ('\0' != *VAR_8)
        {
            switch(*VAR_8)
            {
            case 'S':
                FUNC_1(VAR_1, "%sSource", VAR_6);
                break;
            case 'P':
                FUNC_1(VAR_1, "%sPattern", VAR_6);
                break;
            case 'D':
                FUNC_1(VAR_1, "%s", VAR_7);
                break;
            default:
                FUNC_1(VAR_1, "%c", *VAR_8);
                break;
            }
            VAR_8++;
        }
    }
}
