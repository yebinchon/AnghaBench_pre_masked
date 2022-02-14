
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {scalar_t__ GDEF_Table; scalar_t__ GPOS_Table; scalar_t__ GSUB_Table; } ;
typedef TYPE_1__ ScriptCache ;
typedef int HDC ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static VOID FUNC_3(HDC VAR_0, ScriptCache *VAR_1)
{
    if (!VAR_1->GSUB_Table)
        VAR_1->GSUB_Table = FUNC_2(VAR_0);
    if (!VAR_1->GPOS_Table)
        VAR_1->GPOS_Table = FUNC_1(VAR_0);
    if (!VAR_1->GDEF_Table)
        VAR_1->GDEF_Table = FUNC_0(VAR_0);
}
