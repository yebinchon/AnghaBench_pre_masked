
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int (* lexical_function ) (int const) ;
typedef int WORD ;
typedef int WCHAR ;
struct TYPE_14__ {size_t start; int end; } ;
struct TYPE_13__ {int fCanGlyphAlone; } ;
struct TYPE_11__ {int fClusterStart; void* uJustification; void* fZeroWidth; void* fDiacritic; } ;
struct TYPE_12__ {TYPE_1__ sva; } ;
typedef int ScriptCache ;
typedef TYPE_2__ SCRIPT_GLYPHPROP ;
typedef TYPE_3__ SCRIPT_CHARPROP ;
typedef int SCRIPT_ANALYSIS ;
typedef TYPE_4__ IndicSyllable ;
typedef int INT ;
typedef int HDC ;
typedef scalar_t__ BOOL ;


 void* VAR_0 ;
 int FUNC_0 (int ,int *,int *,int const*,int const,TYPE_4__**,int*,int (*) (int const),scalar_t__) ;
 int FUNC_1 (int *,int const*,int const,int*,int const,TYPE_2__*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (int*,int const,int) ;
 int FUNC_3 (int const,int const,int*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_4__*) ;
__attribute__((used)) static void FUNC_6( HDC VAR_3, ScriptCache *VAR_4, SCRIPT_ANALYSIS *VAR_5, const WCHAR* VAR_6, const INT VAR_7, const WORD* VAR_8, const INT VAR_9, WORD *VAR_10, SCRIPT_CHARPROP *VAR_11, SCRIPT_GLYPHPROP *VAR_12, lexical_function VAR_13, BOOL VAR_14, BOOL VAR_15)
{
    int VAR_16,VAR_17;

    FUNC_1(VAR_4, VAR_8, VAR_9, VAR_10, VAR_7, VAR_12);
    for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++)
    {
        int VAR_18[20];
        int VAR_19 = 0;

        VAR_17 = FUNC_2(VAR_10, VAR_7, VAR_16);
        if (VAR_17>=0)
        {
            for (; VAR_17 < VAR_7 && VAR_10[VAR_17] == VAR_16; VAR_17++)
                VAR_18[VAR_19++] = VAR_17;
        }

        if (VAR_15)
        {

            VAR_12[VAR_16].sva.fDiacritic = VAR_0;
            VAR_12[VAR_16].sva.fZeroWidth = VAR_0;
        }

        if (VAR_19 == 0)
        {
            VAR_12[VAR_16].sva.uJustification = VAR_2;
            continue;
        }

        if (VAR_19 ==1 && VAR_6[VAR_18[0]] == 0x0020)
        {
            VAR_12[VAR_16].sva.uJustification = VAR_1;
            VAR_11[VAR_18[0]].fCanGlyphAlone = 1;
        }
        else
            VAR_12[VAR_16].sva.uJustification = VAR_2;

        VAR_12[VAR_16].sva.fClusterStart = 0;
        for (VAR_17 = 0; VAR_17 < VAR_19 && !VAR_12[VAR_16].sva.fClusterStart; VAR_17++)
            switch (VAR_13(VAR_6[VAR_18[VAR_17]]))
            {
                case 131:
                case 132:
                case 134:
                case 133:
                case 130:
                case 135:
                    break;
                case 129:
                case 128:

                    if (VAR_6[VAR_18[VAR_17]-1] == 0x0020 || VAR_6[VAR_18[VAR_17]+1] == 0x0020)
                        VAR_12[VAR_16].sva.fClusterStart = 1;
                    else
                        VAR_17 = VAR_19;
                    break;
                default:
                    VAR_12[VAR_16].sva.fClusterStart = 1;
                    break;
            }
    }

    if (VAR_14)
    {
        IndicSyllable *VAR_20 = ((void*)0);
        int VAR_21 = 0;
        BOOL VAR_22 = FUNC_4(VAR_5, VAR_4);

        FUNC_0( VAR_3, VAR_5, VAR_4, VAR_6, VAR_7, &VAR_20, &VAR_21, VAR_13, VAR_22);

        for (VAR_16 = 0; VAR_16 < VAR_21; VAR_16++)
        {
            int VAR_23;
            WORD VAR_24 = VAR_10[VAR_20[VAR_16].start];
            for (VAR_23 = VAR_20[VAR_16].start+1; VAR_23 <= VAR_20[VAR_16].end; VAR_23++)
            {
                if (VAR_10[VAR_23] != VAR_24)
                {
                    VAR_12[VAR_10[VAR_23]].sva.fClusterStart = 0;
                    VAR_10[VAR_23] = VAR_24;
                }
            }
        }

        FUNC_5(VAR_20);
    }

    FUNC_3(VAR_9, VAR_7, VAR_10, VAR_12);
}
