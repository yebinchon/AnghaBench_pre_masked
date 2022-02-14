
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ cbSize; int fMask; scalar_t__ lpText; } ;
struct TYPE_20__ {scalar_t__ clrFore; scalar_t__ clrBack; int iImage; int fStyle; int cyMaxChild; int lpText; scalar_t__ cyIntegral; int cyMinChild; int cyChild; } ;
struct TYPE_19__ {int uNumBands; scalar_t__ clrText; scalar_t__ clrBtnText; scalar_t__ clrBk; scalar_t__ clrBtnFace; int hwndSelf; int bands; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef TYPE_2__ REBAR_BAND ;
typedef TYPE_3__ REBARBANDINFOW ;
typedef int LRESULT ;
typedef int LPSTR ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 TYPE_2__* FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,TYPE_3__ const*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_3__ const*) ;
 TYPE_2__* FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (char*,int,...) ;
 int VAR_6 ;
 int FUNC_13 (TYPE_2__*,int ,int) ;

__attribute__((used)) static LRESULT
FUNC_14(REBAR_INFO *VAR_7, INT VAR_8, const REBARBANDINFOW *VAR_9, BOOL VAR_10)
{
    REBAR_BAND *VAR_11;

    if (!VAR_9 || VAR_9->cbSize < VAR_4)
 return VAR_1;


    FUNC_12("insert band at %d (bUnicode=%d)!\n", VAR_8, VAR_10);
    FUNC_6(VAR_9);

    if (!(VAR_11 = FUNC_0(sizeof(REBAR_BAND)))) return VAR_1;
    if ((VAR_8 == -1) || (VAR_8 > VAR_7->uNumBands))
        VAR_8 = VAR_7->uNumBands;
    if (FUNC_1(VAR_7->bands, VAR_8, VAR_11) == -1)
    {
        FUNC_2(VAR_11);
        return VAR_1;
    }
    VAR_7->uNumBands++;

    FUNC_12("index %d!\n", VAR_8);


    FUNC_13(VAR_11, 0, sizeof(*VAR_11));
    VAR_11->clrFore = VAR_7->clrText == VAR_0 ? VAR_7->clrBtnText :
                                                     VAR_7->clrText;
    VAR_11->clrBack = VAR_7->clrBk == VAR_0 ? VAR_7->clrBtnFace :
                                                   VAR_7->clrBk;
    VAR_11->iImage = -1;

    FUNC_4(VAR_7->hwndSelf, VAR_9, VAR_11);


    if (VAR_9->cbSize < VAR_5 || !(VAR_11->fStyle & VAR_3)) {
        VAR_11->cyChild = VAR_11->cyMinChild;
        VAR_11->cyMaxChild = 0x7fffffff;
        VAR_11->cyIntegral = 0;
    }

    if ((VAR_9->fMask & VAR_2) && (VAR_9->lpText)) {
        if (VAR_10)
            FUNC_11(&VAR_11->lpText, VAR_9->lpText);
        else
            FUNC_10(&VAR_11->lpText, (LPSTR)VAR_9->lpText);
    }

    FUNC_9 (VAR_7, VAR_11);

    if (VAR_7->uNumBands == 2)
 FUNC_9 (VAR_7, FUNC_7(VAR_7, 0));

    FUNC_5 (VAR_7);

    FUNC_8(VAR_7);
    FUNC_3(VAR_7->hwndSelf, ((void*)0), VAR_6);

    return VAR_6;
}
