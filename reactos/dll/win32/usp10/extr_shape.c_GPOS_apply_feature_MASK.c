
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_7__ {unsigned int lookup_count; int * lookups; } ;
struct TYPE_6__ {scalar_t__ fRTL; scalar_t__ fLogicalOrder; } ;
typedef int ScriptCache ;
typedef TYPE_1__ SCRIPT_ANALYSIS ;
typedef int OUTLINETEXTMETRICW ;
typedef TYPE_2__ LoadedFeature ;
typedef int LOGFONTW ;
typedef int GOFFSET ;


 scalar_t__ FUNC_0 (int const*,int const*,int const*,TYPE_1__ const*,int*,int ,int const*,unsigned int,int,int *) ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static void FUNC_2(const ScriptCache *VAR_0, const OUTLINETEXTMETRICW *VAR_1,
        const LOGFONTW *VAR_2, const SCRIPT_ANALYSIS *VAR_3, int *VAR_4,
        const LoadedFeature *VAR_5, const WORD *VAR_6, int VAR_7, GOFFSET *VAR_8)
{
    int VAR_9 = VAR_3->fLogicalOrder && VAR_3->fRTL ? -1 : 1;
    unsigned int VAR_10, VAR_11, VAR_12;

    FUNC_1("%i lookups\n", VAR_5->lookup_count);

    VAR_10 = VAR_9 < 0 ? VAR_7 - 1 : 0;
    for (VAR_11 = 0; VAR_11 < VAR_5->lookup_count; VAR_11++)
    {
        for (VAR_12 = 0; VAR_12 < VAR_7; )
            VAR_12 += FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
                    VAR_5->lookups[VAR_11], VAR_6, VAR_10 + VAR_9 * VAR_12, VAR_7, VAR_8);
    }
}
