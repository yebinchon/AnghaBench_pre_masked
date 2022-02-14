
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ (* lexical_function ) (int const) ;
typedef int WORD ;
typedef int WCHAR ;
struct TYPE_4__ {scalar_t__ blwf; scalar_t__ base; int end; } ;
typedef TYPE_1__ IndicSyllable ;


 int FUNC_0 (char*,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1(const WCHAR *VAR_3, const IndicSyllable *VAR_4,
        WORD *VAR_5, const IndicSyllable *VAR_6, lexical_function VAR_7)
{
    if (VAR_4->blwf >= 0 && VAR_6->blwf > VAR_6->base)
    {
        int VAR_8,VAR_9;
        int VAR_10;
        for (VAR_9 = VAR_4->end; VAR_9 > VAR_4->blwf; VAR_9--)
            if (VAR_7(VAR_3[VAR_9]) == VAR_1 || VAR_7(VAR_3[VAR_9]) == VAR_0
                    || VAR_7(VAR_3[VAR_9]) == VAR_2)
                break;

        VAR_10 = (VAR_9 - VAR_4->blwf) - 1;

        if (VAR_9 != VAR_4->blwf)
        {
            WORD VAR_11 = VAR_5[VAR_6->blwf];
            FUNC_0("Doing reorder of Below-base to %i (glyph offset %i)\n",VAR_9,VAR_10);

            for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++)
                VAR_5[VAR_6->blwf + VAR_8] = VAR_5[VAR_6->blwf + VAR_8 + 1];
            VAR_5[VAR_6->blwf + VAR_10] = VAR_11;
        }
    }
}
