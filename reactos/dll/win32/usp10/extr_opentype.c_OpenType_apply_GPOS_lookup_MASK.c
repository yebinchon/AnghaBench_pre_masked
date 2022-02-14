
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_6__ {int LookupList; } ;
struct TYPE_5__ {scalar_t__ GPOS_Table; } ;
typedef TYPE_1__ ScriptCache ;
typedef int SCRIPT_ANALYSIS ;
typedef int OUTLINETEXTMETRICW ;
typedef int OT_LookupList ;
typedef int LOGFONTW ;
typedef TYPE_2__ GPOS_Header ;
typedef int GOFFSET ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (TYPE_1__ const*,int const*,int const*,int const*,int*,int const*,unsigned int,int const*,unsigned int,unsigned int,int *) ;

unsigned int FUNC_2(const ScriptCache *VAR_0, const OUTLINETEXTMETRICW *VAR_1,
        const LOGFONTW *VAR_2, const SCRIPT_ANALYSIS *VAR_3, int *VAR_4, unsigned int VAR_5,
        const WORD *VAR_6, unsigned int VAR_7, unsigned int VAR_8, GOFFSET *VAR_9)
{
    const GPOS_Header *VAR_10 = (const GPOS_Header *)VAR_0->GPOS_Table;
    const OT_LookupList *VAR_11 = (const OT_LookupList*)((const BYTE*)VAR_10 + FUNC_0(VAR_10->LookupList));

    return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_11,
            VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
