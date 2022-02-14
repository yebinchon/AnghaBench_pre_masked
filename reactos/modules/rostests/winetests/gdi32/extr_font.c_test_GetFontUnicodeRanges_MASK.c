
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int lf ;
struct TYPE_11__ {size_t cRanges; TYPE_1__* ranges; } ;
struct TYPE_10__ {int lfFaceName; } ;
struct TYPE_9__ {int cGlyphs; int wcLow; } ;
typedef TYPE_2__ LOGFONTA ;
typedef int HFONT ;
typedef int * HDC ;
typedef TYPE_3__ GLYPHSET ;
typedef size_t DWORD ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_3__* FUNC_3 (int ,int ,size_t) ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char*,TYPE_2__*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 int FUNC_10 (size_t,char*) ;
 size_t FUNC_11 (int *,TYPE_3__*) ;
 int FUNC_12 (char*,size_t,...) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(void)
{
    LOGFONTA VAR_0;
    HDC VAR_1;
    HFONT VAR_2, VAR_3;
    DWORD VAR_4;
    GLYPHSET *VAR_5;
    DWORD VAR_6;

    if (!&FUNC_11)
    {
        FUNC_13("GetFontUnicodeRanges not available before W2K\n");
        return;
    }

    FUNC_9(&VAR_0, 0, sizeof(VAR_0));
    FUNC_8(VAR_0.lfFaceName, "Arial");
    VAR_2 = FUNC_7("Arial", &VAR_0);

    VAR_1 = FUNC_1(0);
    VAR_3 = FUNC_6(VAR_1, VAR_2);

    VAR_4 = FUNC_11(((void*)0), ((void*)0));
    FUNC_10(!VAR_4, "GetFontUnicodeRanges succeeded unexpectedly\n");

    VAR_4 = FUNC_11(VAR_1, ((void*)0));
    FUNC_10(VAR_4, "GetFontUnicodeRanges failed unexpectedly\n");

    VAR_5 = FUNC_3(FUNC_2(), 0, VAR_4);

    VAR_4 = FUNC_11(VAR_1, VAR_5);
    FUNC_10(VAR_4, "GetFontUnicodeRanges failed\n");

    if (0)
        for (VAR_6 = 0; VAR_6 < VAR_5->cRanges; VAR_6++)
            FUNC_12("%03d wcLow %04x cGlyphs %u\n", VAR_6, VAR_5->ranges[VAR_6].wcLow, VAR_5->ranges[VAR_6].cGlyphs);
    FUNC_12("found %u ranges\n", VAR_5->cRanges);

    FUNC_4(FUNC_2(), 0, VAR_5);

    FUNC_6(VAR_1, VAR_3);
    FUNC_0(VAR_2);
    FUNC_5(((void*)0), VAR_1);
}
