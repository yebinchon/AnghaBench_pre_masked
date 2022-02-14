
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_6__ {int ClassFormat; int * ClassValueArray; int GlyphCount; int StartGlyph; } ;
struct TYPE_5__ {TYPE_1__* ClassRangeRecord; int ClassRangeCount; } ;
struct TYPE_4__ {int Class; int End; int Start; } ;
typedef TYPE_2__ OT_ClassDefFormat2 ;
typedef TYPE_3__ OT_ClassDefFormat1 ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static WORD FUNC_2(const void *VAR_0, WORD VAR_1)
{
    WORD VAR_2 = 0;
    const OT_ClassDefFormat1 *VAR_3 = VAR_0;

    if (!VAR_0) return 0;

    if (FUNC_1(VAR_3->ClassFormat) == 1)
    {
        if (VAR_1 >= FUNC_1(VAR_3->StartGlyph))
        {
            int VAR_4 = VAR_1 - FUNC_1(VAR_3->StartGlyph);
            if (VAR_4 < FUNC_1(VAR_3->GlyphCount))
                VAR_2 = FUNC_1(VAR_3->ClassValueArray[VAR_4]);
        }
    }
    else if (FUNC_1(VAR_3->ClassFormat) == 2)
    {
        const OT_ClassDefFormat2 *VAR_5 = VAR_0;
        int VAR_6, VAR_7;
        VAR_7 = FUNC_1(VAR_5->ClassRangeCount);
        for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
        {
            if (VAR_1 >= FUNC_1(VAR_5->ClassRangeRecord[VAR_6].Start) &&
                VAR_1 <= FUNC_1(VAR_5->ClassRangeRecord[VAR_6].End))
            {
                VAR_2 = FUNC_1(VAR_5->ClassRangeRecord[VAR_6].Class);
                break;
            }
        }
    }
    else
        FUNC_0("Unknown Class Format %i\n",FUNC_1(VAR_3->ClassFormat));

    return VAR_2;
}
