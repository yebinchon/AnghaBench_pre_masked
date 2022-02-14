
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ RopCode; scalar_t__ UsesSource; } ;
typedef int SourceBpp ;
typedef TYPE_1__* PROPINFO ;
typedef int FILE ;


 int FUNC_0 (int *,unsigned int,TYPE_1__*,int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_4, unsigned VAR_5, PROPINFO VAR_6,
                  int VAR_7)
{
    static unsigned VAR_8[ ] =
    { 1, 4, 8, 16, 24, 32 };
    unsigned VAR_9;

    FUNC_1(VAR_4);
    if (VAR_6->UsesSource)
    {
        if (VAR_3 == VAR_6->RopCode)
        {
            FUNC_2(VAR_4, "if (UsesSource)\n");
            FUNC_2(VAR_4, "{\n");
        }
        FUNC_2(VAR_4, "switch (BltInfo->SourceSurface->iBitmapFormat)\n");
        FUNC_2(VAR_4, "{\n");
        for (VAR_9 = 0;
                VAR_9 < sizeof(VAR_8) / sizeof(unsigned);
                VAR_9++)
        {
            FUNC_2(VAR_4, "case BMF_%uBPP:\n", VAR_8[VAR_9]);
            FUNC_2(VAR_4, "{\n");
            if (VAR_5 == VAR_8[VAR_9])
            {
                FUNC_2(VAR_4, "if (NULL == BltInfo->XlateSourceToDest ||\n");
                FUNC_2(VAR_4, "    0 != (BltInfo->XlateSourceToDest->flXlate & XO_TRIVIAL))\n");
                FUNC_2(VAR_4, "{\n");
                FUNC_2(VAR_4, "if (BltInfo->DestRect.top < BltInfo->SourcePoint.y)\n");
                FUNC_2(VAR_4, "{\n");
                FUNC_0(VAR_4, VAR_5, VAR_6,
                              VAR_7 | VAR_2,
                              VAR_8[VAR_9]);
                FUNC_1(VAR_4);
                FUNC_2(VAR_4, "}\n");
                FUNC_2(VAR_4, "else\n");
                FUNC_2(VAR_4, "{\n");
                FUNC_0(VAR_4, VAR_5, VAR_6,
                              VAR_7 | VAR_0 | VAR_2,
                              VAR_8[VAR_9]);
                FUNC_1(VAR_4);
                FUNC_2(VAR_4, "}\n");
                FUNC_2(VAR_4, "}\n");
                FUNC_2(VAR_4, "else\n");
                FUNC_2(VAR_4, "{\n");
                FUNC_2(VAR_4, "if (BltInfo->DestRect.top < BltInfo->SourcePoint.y)\n");
                FUNC_2(VAR_4, "{\n");
                FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8[VAR_9]);
                FUNC_1(VAR_4);
                FUNC_2(VAR_4, "}\n");
                FUNC_2(VAR_4, "else\n");
                FUNC_2(VAR_4, "{\n");
                FUNC_0(VAR_4, VAR_5, VAR_6,
                              VAR_7 | VAR_0,
                              VAR_8[VAR_9]);
                FUNC_1(VAR_4);
                FUNC_2(VAR_4, "}\n");
                FUNC_2(VAR_4, "}\n");
            }
            else
            {
                FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7,
                              VAR_8[VAR_9]);
                FUNC_1(VAR_4);
            }
            FUNC_2(VAR_4, "break;\n");
            FUNC_2(VAR_4, "}\n");
        }
        FUNC_2(VAR_4, "}\n");
        if (VAR_3 == VAR_6->RopCode)
        {
            FUNC_2(VAR_4, "}\n");
            FUNC_2(VAR_4, "else\n");
            FUNC_2(VAR_4, "{\n");
            FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7 | VAR_1, 0);
            FUNC_1(VAR_4);
            FUNC_2(VAR_4, "}\n");
        }
    }
    else
    {
        FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, 0);
    }
}
