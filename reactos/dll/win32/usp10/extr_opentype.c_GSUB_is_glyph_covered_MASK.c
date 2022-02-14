
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int CoverageFormat; int * GlyphArray; int GlyphCount; } ;
struct TYPE_5__ {TYPE_1__* RangeRecord; int RangeCount; } ;
struct TYPE_4__ {int Start; int StartCoverageIndex; int End; } ;
typedef TYPE_2__ OT_CoverageFormat2 ;
typedef TYPE_3__ OT_CoverageFormat1 ;


 int FUNC_0 (char*,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(const void *VAR_0, unsigned int VAR_1)
{
    const OT_CoverageFormat1* VAR_2;

    VAR_2 = VAR_0;

    if (FUNC_1(VAR_2->CoverageFormat) == 1)
    {
        int VAR_3 = FUNC_1(VAR_2->GlyphCount);
        int VAR_4;
        FUNC_2("Coverage Format 1, %i glyphs\n",VAR_3);
        for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
            if (VAR_1 == FUNC_1(VAR_2->GlyphArray[VAR_4]))
                return VAR_4;
        return -1;
    }
    else if (FUNC_1(VAR_2->CoverageFormat) == 2)
    {
        const OT_CoverageFormat2* VAR_5;
        int VAR_6;
        int VAR_7;
        VAR_5 = (const OT_CoverageFormat2*)VAR_2;

        VAR_7 = FUNC_1(VAR_5->RangeCount);
        FUNC_2("Coverage Format 2, %i ranges\n",VAR_7);
        for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
        {
            if (VAR_1 < FUNC_1(VAR_5->RangeRecord[VAR_6].Start))
                return -1;
            if ((VAR_1 >= FUNC_1(VAR_5->RangeRecord[VAR_6].Start)) &&
                (VAR_1 <= FUNC_1(VAR_5->RangeRecord[VAR_6].End)))
            {
                return (FUNC_1(VAR_5->RangeRecord[VAR_6].StartCoverageIndex) +
                    VAR_1 - FUNC_1(VAR_5->RangeRecord[VAR_6].Start));
            }
        }
        return -1;
    }
    else
        FUNC_0("Unknown CoverageFormat %i\n",FUNC_1(VAR_2->CoverageFormat));

    return -1;
}
