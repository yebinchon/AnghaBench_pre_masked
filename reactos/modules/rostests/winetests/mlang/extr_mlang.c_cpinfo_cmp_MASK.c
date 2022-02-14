
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dwFlags; scalar_t__ uiCodePage; scalar_t__ uiFamilyCodePage; scalar_t__ bGDICharset; int wszProportionalFont; int wszFixedWidthFont; int wszBodyCharset; int wszHeaderCharset; int wszWebCharset; int wszDescription; } ;
typedef TYPE_1__ MIMECPINFO ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*,...) ;

__attribute__((used)) static void FUNC_2(MIMECPINFO *VAR_0, MIMECPINFO *VAR_1)
{
    FUNC_1(VAR_0->dwFlags == VAR_1->dwFlags, "dwFlags mismatch: %08x != %08x\n", VAR_0->dwFlags, VAR_1->dwFlags);
    FUNC_1(VAR_0->uiCodePage == VAR_1->uiCodePage, "uiCodePage mismatch: %u != %u\n", VAR_0->uiCodePage, VAR_1->uiCodePage);
    FUNC_1(VAR_0->uiFamilyCodePage == VAR_1->uiFamilyCodePage, "uiFamilyCodePage mismatch: %u != %u\n", VAR_0->uiFamilyCodePage, VAR_1->uiFamilyCodePage);
    FUNC_1(!FUNC_0(VAR_0->wszDescription, VAR_1->wszDescription), "wszDescription mismatch\n");
    FUNC_1(!FUNC_0(VAR_0->wszWebCharset, VAR_1->wszWebCharset), "wszWebCharset mismatch\n");
    FUNC_1(!FUNC_0(VAR_0->wszHeaderCharset, VAR_1->wszHeaderCharset), "wszHeaderCharset mismatch\n");
    FUNC_1(!FUNC_0(VAR_0->wszBodyCharset, VAR_1->wszBodyCharset), "wszBodyCharset mismatch\n");
    FUNC_1(!FUNC_0(VAR_0->wszFixedWidthFont, VAR_1->wszFixedWidthFont), "wszFixedWidthFont mismatch\n");
    FUNC_1(!FUNC_0(VAR_0->wszProportionalFont, VAR_1->wszProportionalFont), "wszProportionalFont mismatch\n");
    FUNC_1(VAR_0->bGDICharset == VAR_1->bGDICharset, "bGDICharset mismatch: %d != %d\n", VAR_0->bGDICharset, VAR_1->bGDICharset);
}
