
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ (* lexical_function ) (int ) ;
typedef int WORD ;
typedef int WCHAR ;
struct TYPE_3__ {scalar_t__ ralf; int blwf; int base; size_t start; int end; scalar_t__ pref; } ;
typedef TYPE_1__ IndicSyllable ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(WCHAR *VAR_2, IndicSyllable *VAR_3, lexical_function VAR_4)
{
    if (VAR_3->ralf >= 0)
    {
        int VAR_5,VAR_6;
        int VAR_7 = (VAR_3->blwf >=0)? VAR_3->blwf+1 : VAR_3->base;
        WORD VAR_8 = VAR_2[VAR_3->start];
        WORD VAR_9 = VAR_2[VAR_3->start+1];
        for (VAR_6 = VAR_3->end; VAR_6 > VAR_7; VAR_6--)
            if (VAR_4(VAR_2[VAR_6]) == VAR_1 || VAR_4(VAR_2[VAR_6]) == VAR_0)
                break;

        FUNC_0("Doing reorder of Ra to %i\n",VAR_6);
        for (VAR_5 = VAR_3->start; VAR_5 < VAR_6-1; VAR_5++)
            VAR_2[VAR_5] = VAR_2[VAR_5+2];
        VAR_2[VAR_6-1] = VAR_8;
        VAR_2[VAR_6] = VAR_9;

        VAR_3->ralf = VAR_6-1;
        VAR_3->base -= 2;
        if (VAR_3->blwf >= 0) VAR_3->blwf -= 2;
        if (VAR_3->pref >= 0) VAR_3->pref -= 2;
    }
}
