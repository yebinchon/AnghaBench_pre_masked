
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ScriptId; scalar_t__ uiCodePage; int wszProportionalFont; int wszFixedWidthFont; int wszDescription; } ;
typedef TYPE_1__ SCRIPTINFO ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*,...) ;

__attribute__((used)) static void FUNC_2(SCRIPTINFO *VAR_0, SCRIPTINFO *VAR_1)
{
    FUNC_1(VAR_0->ScriptId == VAR_1->ScriptId, "ScriptId mismatch: %d != %d\n", VAR_0->ScriptId, VAR_1->ScriptId);
    FUNC_1(VAR_0->uiCodePage == VAR_1->uiCodePage, "uiCodePage mismatch: %u != %u\n", VAR_0->uiCodePage, VAR_1->uiCodePage);
    FUNC_1(!FUNC_0(VAR_0->wszDescription, VAR_1->wszDescription), "wszDescription mismatch\n");
    FUNC_1(!FUNC_0(VAR_0->wszFixedWidthFont, VAR_1->wszFixedWidthFont), "wszFixedWidthFont mismatch\n");
    FUNC_1(!FUNC_0(VAR_0->wszProportionalFont, VAR_1->wszProportionalFont), "wszProportionalFont mismatch\n");
}
