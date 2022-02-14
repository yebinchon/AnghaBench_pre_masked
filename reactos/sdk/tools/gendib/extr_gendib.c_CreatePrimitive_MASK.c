
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ RopCode; scalar_t__ UsesPattern; scalar_t__ UsesSource; } ;
typedef TYPE_1__* PROPINFO ;
typedef int FILE ;


 int FUNC_0 (int *,unsigned int,TYPE_1__*,int ) ;
 int FUNC_1 (int *,int ,int ,unsigned int) ;
 int FUNC_2 (int *,unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,unsigned int,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_6(FILE *VAR_8, unsigned VAR_9, PROPINFO VAR_10)
{
    int VAR_11;
    unsigned VAR_12;

    FUNC_3(VAR_8);
    FUNC_4(VAR_8, "\n");
    FUNC_4(VAR_8, "static void\n");
    FUNC_5(VAR_8, VAR_9, VAR_10);
    FUNC_4(VAR_8, "(PBLTINFO BltInfo)\n");
    FUNC_4(VAR_8, "{\n");
    if (VAR_1 == VAR_10->RopCode)
    {
        FUNC_4(VAR_8, "DIB_%uBPP_ColorFill(BltInfo->DestSurface, "
               "&BltInfo->DestRect, 0x0);\n", VAR_9);
    }
    else if (VAR_7 == VAR_10->RopCode)
    {
        FUNC_4(VAR_8, "DIB_%uBPP_ColorFill(BltInfo->DestSurface, "
               "&BltInfo->DestRect, ~0);\n", VAR_9);
    }
    else if (VAR_4 == VAR_10->RopCode)
    {
        FUNC_4(VAR_8, "return;\n");
    }
    else
    {
        FUNC_4(VAR_8, "ULONG LineIndex, LineCount;\n");
        FUNC_4(VAR_8, "ULONG i;\n");
        if (VAR_10->UsesPattern)
        {
            FUNC_4(VAR_8, "LONG PatternX =0, PatternY = 0, BasePatternX = 0;\n");
        }
        VAR_11 = 1;
        if (VAR_10->UsesSource)
        {
            FUNC_4(VAR_8, "ULONG Source = 0");
            VAR_11 = 0;
        }
        if (VAR_10->UsesPattern)
        {
            FUNC_4(VAR_8, "%s Pattern = 0", VAR_11 ? "ULONG" : ",");
            VAR_11 = 0;
        }
        if (! VAR_11)
        {
            FUNC_4(VAR_8, ";\n");
        }
        FUNC_4(VAR_8, "char *DestBase;\n");
        FUNC_4(VAR_8, "PULONG DestPtr;\n");
        if (VAR_10->UsesSource)
        {
            FUNC_4(VAR_8, "char *SourceBase;\n");
            FUNC_4(VAR_8, "PULONG SourcePtr;\n");
            FUNC_4(VAR_8, "ULONG RawSource;\n");
            FUNC_4(VAR_8, "unsigned SourcePixels, BaseSourcePixels;\n");
        }
        if (32 == VAR_9)
        {
            FUNC_4(VAR_8, "ULONG CenterCount;\n");
        }
        else
        {
            FUNC_4(VAR_8, "ULONG LeftCount, CenterCount, RightCount;\n");
        }
        if (VAR_2 == VAR_10->RopCode)
        {
            FUNC_4(VAR_8, "BOOLEAN UsesSource, UsesPattern;\n");
            FUNC_4(VAR_8, "\n");
            FUNC_4(VAR_8, "UsesSource = ROP4_USES_SOURCE(BltInfo->Rop4);\n");
            FUNC_4(VAR_8, "UsesPattern = ROP4_USES_PATTERN(BltInfo->Rop4);\n");
        }
        FUNC_4(VAR_8, "\n");
        if (! VAR_10->UsesSource)
        {
            FUNC_1(VAR_8, 0, 0, VAR_9);
            FUNC_2(VAR_8, VAR_9);
            FUNC_3(VAR_8);
        }
        FUNC_4(VAR_8, "LineCount = BltInfo->DestRect.bottom - BltInfo->DestRect.top;\n");

        FUNC_4(VAR_8, "\n");
        if (VAR_10->UsesPattern)
        {
            if (VAR_2 == VAR_10->RopCode)
            {
                FUNC_4(VAR_8, "if (UsesPattern && NULL != BltInfo->PatternSurface)\n");
            }
            else
            {
                FUNC_4(VAR_8, "if (NULL != BltInfo->PatternSurface)\n");
            }
            FUNC_4(VAR_8, "{\n");
            FUNC_0(VAR_8, VAR_9, VAR_10, VAR_0);
            FUNC_3(VAR_8);
            FUNC_4(VAR_8, "}\n");
            FUNC_4(VAR_8, "else\n");
            FUNC_4(VAR_8, "{\n");
            if (VAR_2 == VAR_10->RopCode)
            {
                FUNC_4(VAR_8, "if (UsesPattern)\n");
                FUNC_4(VAR_8, "{\n");
            }
            for (VAR_12 = 0; VAR_12 < 32 / VAR_9; VAR_12++)
            {
                if (0 == VAR_12)
                {
                    FUNC_4(VAR_8, "if (!BltInfo->Brush)\n");
                    FUNC_4(VAR_8, "{\n");
                    FUNC_4(VAR_8, "Pattern = 0;\n");
                    FUNC_4(VAR_8, "}\n");
                    FUNC_4(VAR_8, "else\n");
                    FUNC_4(VAR_8, "{\n");
                    FUNC_4(VAR_8, "Pattern = BltInfo->Brush->iSolidColor");
                }
                else
                {
                    FUNC_4(VAR_8, "          (BltInfo->Brush->iSolidColor << %d)",
                           VAR_12 * VAR_9);
                }
                if (32 / VAR_9 <= VAR_12 + 1)
                {
                    FUNC_4(VAR_8, ";\n");
                    FUNC_4(VAR_8, "}\n");
                }
                else
                {
                    FUNC_4(VAR_8, " |\n");
                }
            }
            if (VAR_5 == VAR_10->RopCode ||
                    VAR_3 == VAR_10->RopCode)
            {
                FUNC_4(VAR_8, "if (0 == Pattern)\n");
                FUNC_4(VAR_8, "{\n");
                if (VAR_3 == VAR_10->RopCode)
                {
                    FUNC_4(VAR_8, "DIB_%uBPP_ColorFill(BltInfo->DestSurface, "
                           "&BltInfo->DestRect, 0x0);\n", VAR_9);
                }
                FUNC_4(VAR_8, "return;\n");
                FUNC_4(VAR_8, "}\n");
            }
            else if (VAR_6 == VAR_10->RopCode)
            {
                FUNC_4(VAR_8, "if ((~0) == Pattern)\n");
                FUNC_4(VAR_8, "{\n");
                FUNC_4(VAR_8, "DIB_%uBPP_ColorFill(BltInfo->DestSurface, "
                       "&BltInfo->DestRect, ~0);\n", VAR_9);
                FUNC_4(VAR_8, "return;\n");
                FUNC_4(VAR_8, "}\n");
            }
            if (VAR_2 == VAR_10->RopCode)
            {
                FUNC_4(VAR_8, "}\n");
            }
            FUNC_0(VAR_8, VAR_9, VAR_10, 0);
            FUNC_3(VAR_8);
            FUNC_4(VAR_8, "}\n");
        }
        else
        {
            FUNC_0(VAR_8, VAR_9, VAR_10, 0);
            FUNC_3(VAR_8);
        }
    }
    FUNC_4(VAR_8, "}\n");
}
