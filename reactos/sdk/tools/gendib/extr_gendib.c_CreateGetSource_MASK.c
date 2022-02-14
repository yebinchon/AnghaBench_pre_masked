
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ RopCode; } ;
typedef TYPE_1__* PROPINFO ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,char*,unsigned int) ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_3, unsigned VAR_4, PROPINFO VAR_5, int VAR_6,
                unsigned VAR_7, unsigned VAR_8)
{
    const char *VAR_9;
    const char *VAR_10;
    char VAR_11[8];

    FUNC_0(VAR_3);
    if (0 == VAR_8)
    {
        VAR_9 = "=";
        VAR_10 = "";
        VAR_11[0] = '\0';
    }
    else
    {
        VAR_9 = "|=";
        VAR_10 = "(";
        FUNC_2(VAR_11, ") << %u", VAR_8);
    }

    if (VAR_2 != VAR_5->RopCode ||
            0 == (VAR_6 & VAR_1) || VAR_4 != VAR_7)
    {
        if (0 == (VAR_6 & VAR_0) && VAR_7 <= 16)
        {
            FUNC_1(VAR_3, "if (0 == SourcePixels)\n");
            FUNC_1(VAR_3, "{\n");
            FUNC_1(VAR_3, "RawSource = *SourcePtr++;\n");
            FUNC_1(VAR_3, "SourcePixels = %u;\n", 32 / VAR_7);
            FUNC_1(VAR_3, "}\n");
        }
        FUNC_1(VAR_3, "Source %s (%s", VAR_9, VAR_10);
        if (0 == (VAR_6 & VAR_1))
        {
            FUNC_1(VAR_3, "XLATEOBJ_iXlate(BltInfo->XlateSourceToDest, %s",
                   16 < VAR_7 ? "" : "(");
        }
        if (32 == VAR_7)
        {
            FUNC_1(VAR_3, "*SourcePtr++");
        }
        else if (24 == VAR_7)
        {
            FUNC_1(VAR_3, "*(PUSHORT) SourcePtr + (*((PBYTE) SourcePtr + 2) << 16)");
        }
        else
        {
            FUNC_1(VAR_3, "RawSource >> Shift%uBpp[SourcePixels]", VAR_7);
        }
        if (0 == (VAR_6 & VAR_1))
        {
            if (16 < VAR_7)
            {
                FUNC_1(VAR_3, ")");
            }
            else
            {
                FUNC_1(VAR_3, ") & 0x%x)", (1 << VAR_7) - 1);
            }
        }
        if (32 == VAR_4)
        {
            FUNC_1(VAR_3, ")%s;\n", VAR_11);
        }
        else
        {
            FUNC_1(VAR_3, " & 0x%x)%s;\n", (1 << VAR_4) - 1, VAR_11);
        }
        if (VAR_7 <= 16)
        {
            FUNC_1(VAR_3, "SourcePixels--;\n");
        }
        else if (24 == VAR_7)
        {
            FUNC_1(VAR_3, "SourcePtr = (PULONG)((char *) SourcePtr + 3);\n");
        }
    }
}
