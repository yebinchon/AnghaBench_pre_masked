
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int FeatureList; } ;
struct TYPE_10__ {int FeatureList; } ;
struct TYPE_9__ {scalar_t__ features_initialized; int ** table; } ;
struct TYPE_8__ {TYPE_4__* GPOS_Table; TYPE_3__* GSUB_Table; } ;
typedef TYPE_1__ ScriptCache ;
typedef int OT_LangSys ;
typedef int OT_FeatureList ;
typedef TYPE_2__ LoadedLanguage ;
typedef TYPE_3__ GSUB_Header ;
typedef TYPE_4__ GPOS_Header ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int const*,int const*) ;

__attribute__((used)) static void FUNC_2(ScriptCache *VAR_5, LoadedLanguage *VAR_6)
{
    const GSUB_Header *VAR_7 = VAR_5->GSUB_Table;
    const GPOS_Header *VAR_8 = VAR_5->GPOS_Table;
    const OT_FeatureList *VAR_9;
    const OT_LangSys *VAR_10;

    if (VAR_6->features_initialized)
        return;

    if ((VAR_10 = VAR_6->table[VAR_4]))
    {
        VAR_9 = (const OT_FeatureList *)((const BYTE *)VAR_7 + FUNC_0(VAR_7->FeatureList));
        FUNC_1(VAR_6, VAR_1, VAR_10, VAR_9);
    }

    if ((VAR_10 = VAR_6->table[VAR_3]))
    {
        VAR_9 = (const OT_FeatureList *)((const BYTE *)VAR_8 + FUNC_0(VAR_8->FeatureList));
        FUNC_1(VAR_6, VAR_0, VAR_10, VAR_9);
    }

    VAR_6->features_initialized = VAR_2;
}
