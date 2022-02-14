
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lexical_function ;
typedef int WORD ;
typedef int WCHAR ;
struct TYPE_4__ {scalar_t__ pref; int base; } ;
typedef TYPE_1__ IndicSyllable ;


 int FUNC_0 (char*,size_t,int) ;

__attribute__((used)) static void FUNC_1(const IndicSyllable *VAR_0,
        WORD *VAR_1, const IndicSyllable *VAR_2, lexical_function VAR_3)
{
    if (VAR_0->pref >= 0 && VAR_2->pref > VAR_2->base)
    {
        int VAR_4;
        WCHAR VAR_5 = VAR_1[VAR_2->pref];
        FUNC_0("Doing reorder of pref from %i to %i\n",VAR_2->pref,VAR_2->base);
        for (VAR_4 = VAR_2->pref; VAR_4 > VAR_2->base; VAR_4--)
            VAR_1[VAR_4] = VAR_1[VAR_4-1];
        VAR_1[VAR_2->base] = VAR_5;
    }
}
