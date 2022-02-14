
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int ScriptList; } ;
struct TYPE_7__ {int ScriptList; } ;
struct TYPE_6__ {scalar_t__ scripts_initialized; TYPE_3__* GPOS_Table; TYPE_2__* GSUB_Table; } ;
typedef TYPE_1__ ScriptCache ;
typedef int OT_ScriptList ;
typedef TYPE_2__ GSUB_Header ;
typedef TYPE_3__ GPOS_Header ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int const*) ;

__attribute__((used)) static void FUNC_2(ScriptCache *VAR_3)
{
    const GPOS_Header *VAR_4;
    const GSUB_Header *VAR_5;

    if (VAR_3->scripts_initialized)
        return;

    if ((VAR_5 = VAR_3->GSUB_Table))
        FUNC_1(VAR_3, VAR_2,
                (const OT_ScriptList *)((const BYTE *)VAR_5 + FUNC_0(VAR_5->ScriptList)));

    if ((VAR_4 = VAR_3->GPOS_Table))
        FUNC_1(VAR_3, VAR_1,
                (const OT_ScriptList *)((const BYTE *)VAR_4 + FUNC_0(VAR_4->ScriptList)));

    VAR_3->scripts_initialized = VAR_0;
}
