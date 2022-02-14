
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ RopCode; scalar_t__ UsesSource; scalar_t__ UsesPattern; } ;
typedef TYPE_1__* PROPINFO ;
typedef int FILE ;


 int FUNC_0 (int *,int,int,unsigned int) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,unsigned int,TYPE_1__*,int,unsigned int,unsigned int) ;
 int FUNC_3 (int *,unsigned int,TYPE_1__*,unsigned int,int) ;
 int FUNC_4 (int *,unsigned int,TYPE_1__*,int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,...) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_7(FILE *VAR_6, unsigned VAR_7, PROPINFO VAR_8, int VAR_9,
              unsigned VAR_10)
{
    unsigned VAR_11;

    FUNC_5(VAR_6);
    if (VAR_8->UsesSource)
    {
        if (0 == (VAR_9 & VAR_1))
        {
            FUNC_0(VAR_6, 1, VAR_9, VAR_10);
        }
        FUNC_0(VAR_6, 0, VAR_9, VAR_7);
        FUNC_1(VAR_6, VAR_7);
        FUNC_5(VAR_6);
    }
    if (VAR_8->UsesPattern && 0 != (VAR_9 & VAR_3))
    {
        if (0 == (VAR_9 & VAR_0))
        {
            FUNC_6(VAR_6, "PatternY = (BltInfo->DestRect.top - BltInfo->BrushOrigin.y) %%\n");
            FUNC_6(VAR_6, "           BltInfo->PatternSurface->sizlBitmap.cy;\n");
        }
        else
        {
            FUNC_6(VAR_6, "PatternY = (BltInfo->DestRect.bottom - 1 -\n");
            FUNC_6(VAR_6, "            BltInfo->BrushOrigin.y) %%\n");
            FUNC_6(VAR_6, "           BltInfo->PatternSurface->sizlBitmap.cy;\n");
        }
    }
    if (VAR_5 == VAR_8->RopCode &&
            0 != (VAR_9 & VAR_4) && VAR_7 == VAR_10)
    {
        FUNC_6(VAR_6, "CenterCount = %u * (BltInfo->DestRect.right -\n", VAR_7 >> 3);
        FUNC_6(VAR_6, "                   BltInfo->DestRect.left);\n");
    }
    if (VAR_8->UsesPattern && 0 != (VAR_9 & VAR_3))
    {
        FUNC_6(VAR_6, "BasePatternX = (BltInfo->DestRect.left - BltInfo->BrushOrigin.x) %%\n");
        FUNC_6(VAR_6, "           BltInfo->PatternSurface->sizlBitmap.cx;\n");
    }

    FUNC_6(VAR_6, "for (LineIndex = 0; LineIndex < LineCount; LineIndex++)\n");
    FUNC_6(VAR_6, "{\n");
    if (VAR_5 != VAR_8->RopCode ||
            0 == (VAR_9 & VAR_4) || VAR_7 != VAR_10)
    {
        if (VAR_8->UsesSource && 0 == (VAR_9 & VAR_1))
        {
            FUNC_6(VAR_6, "SourcePtr = (PULONG) SourceBase;\n");
            if (VAR_10 <= 16)
            {
                FUNC_6(VAR_6, "RawSource = *SourcePtr++;\n");
                FUNC_6(VAR_6, "SourcePixels = BaseSourcePixels;\n");
            }
        }
        FUNC_6(VAR_6, "DestPtr = (PULONG) DestBase;\n");
    }

    if (VAR_8->UsesPattern && 0 != (VAR_9 & VAR_3))
    {
        FUNC_6(VAR_6, "PatternX = BasePatternX;\n");
    }

    if (VAR_5 == VAR_8->RopCode &&
            0 != (VAR_9 & VAR_4) && VAR_7 == VAR_10)
    {
        FUNC_6(VAR_6, "RtlMoveMemory(DestBase, SourceBase, CenterCount);\n");
        FUNC_6(VAR_6, "\n");
    }
    else
    {
        FUNC_6(VAR_6, "\n");
        if (32 != VAR_7)
        {
            if (16 == VAR_7)
            {
                FUNC_6(VAR_6, "if (0 != LeftCount)\n");
            }
            else
            {
                FUNC_6(VAR_6, "for (i = 0; i < LeftCount; i++)\n");
            }
            FUNC_6(VAR_6, "{\n");
            FUNC_4(VAR_6, VAR_7, VAR_8,
                                 (16 == VAR_7 ? VAR_9 | VAR_2 :
                                  VAR_9), VAR_10);
            FUNC_5(VAR_6);
            FUNC_6(VAR_6, "}\n");
            FUNC_6(VAR_6, "\n");
        }
        FUNC_6(VAR_6, "for (i = 0; i < CenterCount; i++)\n");
        FUNC_6(VAR_6, "{\n");
        if (VAR_8->UsesSource && 0 == (VAR_9 & VAR_1))
        {
            for (VAR_11 = 0; VAR_11 < 32 / VAR_7; VAR_11++)
            {
                FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
                                VAR_11 * VAR_7);
                FUNC_5(VAR_6);
            }
            FUNC_6(VAR_6, "\n");
        }
        if (VAR_8->UsesPattern && 0 != (VAR_9 & VAR_3))
        {
            for (VAR_11 = 0; VAR_11 < 32 / VAR_7; VAR_11++)
            {
                if (0 == VAR_11)
                {
                    FUNC_6(VAR_6, "Pattern = DIB_GetSourceIndex(BltInfo->PatternSurface, PatternX, PatternY);\n");
                }
                else
                {
                    FUNC_6(VAR_6, "Pattern |= DIB_GetSourceIndex(BltInfo->PatternSurface, PatternX, PatternY) << %u;\n", VAR_11 * VAR_7);
                }
                FUNC_6(VAR_6, "if (BltInfo->PatternSurface->sizlBitmap.cx <= ++PatternX)\n");
                FUNC_6(VAR_6, "{\n");
                FUNC_6(VAR_6, "PatternX -= BltInfo->PatternSurface->sizlBitmap.cx;\n");
                FUNC_6(VAR_6, "}\n");
            }
            FUNC_6(VAR_6, "\n");
        }
        FUNC_3(VAR_6, VAR_7, VAR_8, VAR_10, 32);
        FUNC_6(VAR_6, ";\n");
        FUNC_5(VAR_6);
        FUNC_6(VAR_6, "\n");
        FUNC_6(VAR_6, "DestPtr++;\n");
        FUNC_6(VAR_6, "}\n");
        FUNC_6(VAR_6, "\n");
        if (32 != VAR_7)
        {
            if (16 == VAR_7)
            {
                FUNC_6(VAR_6, "if (0 != RightCount)\n");
            }
            else
            {
                FUNC_6(VAR_6, "for (i = 0; i < RightCount; i++)\n");
            }
            FUNC_6(VAR_6, "{\n");
            FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
            FUNC_5(VAR_6);
            FUNC_6(VAR_6, "}\n");
            FUNC_6(VAR_6, "\n");
        }
        if (VAR_8->UsesPattern && 0 != (VAR_9 & VAR_3))
        {
            if (0 == (VAR_9 & VAR_0))
            {
                FUNC_6(VAR_6, "if (BltInfo->PatternSurface->sizlBitmap.cy <= ++PatternY)\n");
                FUNC_6(VAR_6, "{\n");
                FUNC_6(VAR_6, "PatternY -= BltInfo->PatternSurface->sizlBitmap.cy;\n");
                FUNC_6(VAR_6, "}\n");
            }
            else
            {
                FUNC_6(VAR_6, "if (0 == PatternY--)\n");
                FUNC_6(VAR_6, "{\n");
                FUNC_6(VAR_6, "PatternY = BltInfo->PatternSurface->sizlBitmap.cy - 1;\n");
                FUNC_6(VAR_6, "}\n");
            }
        }
    }
    if (VAR_8->UsesSource && 0 == (VAR_9 & VAR_1))
    {
        FUNC_6(VAR_6, "SourceBase %c= BltInfo->SourceSurface->lDelta;\n",
               0 == (VAR_9 & VAR_0) ? '+' : '-');
    }
    FUNC_6(VAR_6, "DestBase %c= BltInfo->DestSurface->lDelta;\n",
           0 == (VAR_9 & VAR_0) ? '+' : '-');
    FUNC_6(VAR_6, "}\n");
}
