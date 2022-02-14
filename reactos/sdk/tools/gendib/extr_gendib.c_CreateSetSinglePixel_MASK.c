
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ UsesPattern; scalar_t__ UsesSource; } ;
typedef TYPE_1__* PROPINFO ;
typedef int FILE ;


 int FUNC_0 (int *,unsigned int,TYPE_1__*,int,unsigned int,int ) ;
 int FUNC_1 (int *,unsigned int,TYPE_1__*,unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_2, unsigned VAR_3, PROPINFO VAR_4, int VAR_5,
                     unsigned VAR_6)
{
    if (VAR_4->UsesSource && 0 == (VAR_5 & VAR_0))
    {
        FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, 0);
        FUNC_2(VAR_2);
    }
    if (VAR_4->UsesPattern && 0 != (VAR_5 & VAR_1))
    {
        FUNC_3(VAR_2, "Pattern = DIB_GetSourceIndex(BltInfo->PatternSurface, PatternX, PatternY);\n");
        FUNC_3(VAR_2, "if (BltInfo->PatternSurface->sizlBitmap.cx <= ++PatternX)\n");
        FUNC_3(VAR_2, "{\n");
        FUNC_3(VAR_2, "PatternX -= BltInfo->PatternSurface->sizlBitmap.cx;\n");
        FUNC_3(VAR_2, "}\n");
    }
    if ((VAR_4->UsesSource && 0 == (VAR_5 & VAR_0) &&
            VAR_3 != VAR_6) ||
            (VAR_4->UsesPattern && 0 != (VAR_5 & VAR_1)))
    {
        FUNC_3(VAR_2, "\n");
    }
    FUNC_1(VAR_2, VAR_3, VAR_4, VAR_6, 16);
    FUNC_3(VAR_2, ";\n");
    FUNC_2(VAR_2);
    FUNC_3(VAR_2, "\n");
    FUNC_3(VAR_2, "DestPtr = (PULONG)((char *) DestPtr + %u);\n", VAR_3 / 8);
}
