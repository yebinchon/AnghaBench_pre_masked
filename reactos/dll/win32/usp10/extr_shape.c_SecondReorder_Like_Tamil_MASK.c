
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ (* lexical_function ) (int const) ;
typedef int WORD ;
typedef int WCHAR ;
struct TYPE_8__ {size_t start; size_t base; size_t end; } ;
typedef TYPE_1__ IndicSyllable ;


 int FUNC_0 (int const*,TYPE_1__ const*,int *,TYPE_1__ const*,scalar_t__ (*) (int const)) ;
 int FUNC_1 (TYPE_1__ const*,int *,TYPE_1__ const*,scalar_t__ (*) (int const)) ;
 int FUNC_2 (char*,size_t,size_t,size_t) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_3(const WCHAR *VAR_1, const IndicSyllable *VAR_2,
        WORD *VAR_3, const IndicSyllable *VAR_4, lexical_function VAR_5)
{
    FUNC_2("Syllable (%i..%i..%i)\n",VAR_2->start,VAR_2->base,VAR_2->end);
    FUNC_2("Glyphs (%i..%i..%i)\n",VAR_4->start,VAR_4->base,VAR_4->end);
    if (VAR_2->start == VAR_2->base && VAR_2->base == VAR_2->end) return;
    if (VAR_5(VAR_1[VAR_2->base]) == VAR_0) return;

    FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
