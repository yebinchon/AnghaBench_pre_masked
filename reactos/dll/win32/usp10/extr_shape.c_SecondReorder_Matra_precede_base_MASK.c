
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ (* lexical_function ) (int const) ;
typedef int WORD ;
typedef int WCHAR ;
struct TYPE_4__ {int start; int base; } ;
typedef TYPE_1__ IndicSyllable ;


 int FUNC_0 (char*,int,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(const WCHAR *VAR_1, const IndicSyllable *VAR_2,
        WORD *VAR_3, const IndicSyllable *VAR_4, lexical_function VAR_5)
{
    int VAR_6;


    for (VAR_6 = VAR_2->start; VAR_6 < VAR_2->base; VAR_6++)
    {
        if (VAR_5(VAR_1[VAR_6]) == VAR_0)
        {
            int VAR_7;
            int VAR_8 = VAR_4->start + VAR_6 - VAR_2->start;
            if (VAR_8 < VAR_4->base -1 )
            {
                WCHAR VAR_9 = VAR_3[VAR_8];
                FUNC_0("Doing reorder of matra from %i to %i\n",VAR_8,VAR_4->base);
                for (VAR_7 = VAR_8; VAR_7 < VAR_4->base-1; VAR_7++)
                    VAR_3[VAR_7] = VAR_3[VAR_7+1];
                VAR_3[VAR_4->base-1] = VAR_9;
            }
        }
    }
}
