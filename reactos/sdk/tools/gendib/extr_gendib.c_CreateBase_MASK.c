
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_1, int VAR_2, int VAR_3, unsigned VAR_4)
{
    const char *VAR_5 = (VAR_2 ? "Source" : "Dest");

    FUNC_0(VAR_1);
    FUNC_1(VAR_1, "%sBase = (char *) BltInfo->%sSurface->pvScan0 +\n", VAR_5, VAR_5);
    if (0 == (VAR_3 & VAR_0))
    {
        if (VAR_2)
        {
            FUNC_1(VAR_1, "             BltInfo->SourcePoint.y *\n");
        }
        else
        {
            FUNC_1(VAR_1, "           BltInfo->DestRect.top *\n");
        }
    }
    else
    {
        if (VAR_2)
        {
            FUNC_1(VAR_1, "             (BltInfo->SourcePoint.y +\n");
            FUNC_1(VAR_1, "              BltInfo->DestRect.bottom -\n");
            FUNC_1(VAR_1, "              BltInfo->DestRect.top - 1) *\n");
        }
        else
        {
            FUNC_1(VAR_1, "           (BltInfo->DestRect.bottom - 1) *\n");
        }
    }
    FUNC_1(VAR_1, "           %sBltInfo->%sSurface->lDelta +\n",
           VAR_2 ? "  " : "", VAR_5);
    if (VAR_2)
    {
        FUNC_1(VAR_1, "             %sBltInfo->SourcePoint.x",
               16 < VAR_4 ? "" : "((");
    }
    else
    {
        FUNC_1(VAR_1, "           BltInfo->DestRect.left");
    }
    if (VAR_4 < 8)
    {
        FUNC_1(VAR_1, " / %u", 8 / VAR_4);
    }
    else if (8 < VAR_4)
    {
        FUNC_1(VAR_1, " * %u", VAR_4 / 8);
    }
    if (VAR_2 && VAR_4 <= 16)
    {
        FUNC_1(VAR_1, ") & ~ 0x3)");
    }
    FUNC_1(VAR_1, ";\n", VAR_4 / 8);
    if (VAR_2 && VAR_4 <= 16)
    {
        FUNC_1(VAR_1, "BaseSourcePixels = %u - (BltInfo->SourcePoint.x & 0x%x);\n",
               32 / VAR_4, 32 / VAR_4 - 1);
    }
}
