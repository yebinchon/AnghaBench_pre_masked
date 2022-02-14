
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ (* lexical_function ) (int ) ;
typedef int WCHAR ;
struct TYPE_5__ {size_t start; size_t base; size_t end; } ;
typedef TYPE_1__ IndicSyllable ;


 int FUNC_0 (int *,TYPE_1__*,scalar_t__ (*) (int )) ;
 int FUNC_1 (int *,TYPE_1__*,scalar_t__ (*) (int )) ;
 int FUNC_2 (char*,size_t,size_t,size_t) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_3(WCHAR *VAR_1, IndicSyllable *VAR_2, lexical_function VAR_3)
{
    FUNC_2("Syllable (%i..%i..%i)\n",VAR_2->start,VAR_2->base,VAR_2->end);
    if (VAR_2->start == VAR_2->base && VAR_2->base == VAR_2->end) return;
    if (VAR_3(VAR_1[VAR_2->base]) == VAR_0) return;

    FUNC_1(VAR_1, VAR_2, VAR_3);
    FUNC_0(VAR_1, VAR_2, VAR_3);
}
