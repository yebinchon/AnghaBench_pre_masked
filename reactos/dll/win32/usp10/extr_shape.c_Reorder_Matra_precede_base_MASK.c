
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ (* lexical_function ) (int ) ;
typedef int WCHAR ;
struct TYPE_3__ {scalar_t__ end; scalar_t__ base; size_t ralf; size_t blwf; size_t pref; } ;
typedef TYPE_1__ IndicSyllable ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(WCHAR *VAR_1, IndicSyllable *VAR_2, lexical_function VAR_3)
{
    int VAR_4;


    if (VAR_2->end > VAR_2->base)
    {
        for (VAR_4 = 1; VAR_4 <= VAR_2->end-VAR_2->base; VAR_4++)
        {
            if (VAR_3(VAR_1[VAR_2->base+VAR_4]) == VAR_0)
            {
                int VAR_5;
                WCHAR VAR_6 = VAR_1[VAR_2->base+VAR_4];
                FUNC_0("Doing reorder of %x %x\n",VAR_6,VAR_1[VAR_2->base]);
                for (VAR_5 = VAR_2->base+VAR_4; VAR_5 > VAR_2->base; VAR_5--)
                    VAR_1[VAR_5] = VAR_1[VAR_5-1];
                VAR_1[VAR_2->base] = VAR_6;

                if (VAR_2->ralf >= VAR_2->base) VAR_2->ralf++;
                if (VAR_2->blwf >= VAR_2->base) VAR_2->blwf++;
                if (VAR_2->pref >= VAR_2->base) VAR_2->pref++;
                VAR_2->base ++;
            }
        }
    }
}
