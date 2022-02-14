
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lexical_function ;
typedef int WORD ;
typedef int WCHAR ;
struct TYPE_3__ {scalar_t__ ralf; size_t start; int end; int base; scalar_t__ blwf; scalar_t__ pref; } ;
typedef TYPE_1__ IndicSyllable ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(WCHAR *VAR_0, IndicSyllable *VAR_1, lexical_function VAR_2)
{
    if (VAR_1->ralf >= 0)
    {
        int VAR_3;
        WORD VAR_4 = VAR_0[VAR_1->start];
        WORD VAR_5 = VAR_0[VAR_1->start+1];

        FUNC_0("Doing reorder of Ra to %i\n",VAR_1->end-1);
        for (VAR_3 = VAR_1->start; VAR_3 < VAR_1->end-1; VAR_3++)
            VAR_0[VAR_3] = VAR_0[VAR_3+2];
        VAR_0[VAR_1->end-1] = VAR_4;
        VAR_0[VAR_1->end] = VAR_5;

        VAR_1->ralf = VAR_1->end-1;
        VAR_1->base -= 2;
        if (VAR_1->blwf >= 0) VAR_1->blwf -= 2;
        if (VAR_1->pref >= 0) VAR_1->pref -= 2;
    }
}
