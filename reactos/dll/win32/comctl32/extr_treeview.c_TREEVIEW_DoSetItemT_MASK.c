
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_6__ {int cchTextMax; scalar_t__ cChildren; scalar_t__ iImage; scalar_t__ iSelectedImage; scalar_t__ iExpandedImage; int state; int callbackMask; int iIntegral; int lParam; int * pszText; scalar_t__ textWidth; } ;
struct TYPE_5__ {int mask; scalar_t__ cChildren; scalar_t__ iImage; scalar_t__ iSelectedImage; scalar_t__ iExpandedImage; int state; int stateMask; int uStateEx; int iIntegral; int lParam; int * pszText; } ;
typedef TYPE_1__ TVITEMEXW ;
typedef TYPE_2__ TREEVIEW_ITEM ;
typedef int TREEVIEW_INFO ;
typedef int * LPWSTR ;
typedef int LPSTR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int ,int ,int ,int,int *,int) ;
 int VAR_5 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static BOOL
FUNC_7(const TREEVIEW_INFO *VAR_16, TREEVIEW_ITEM *VAR_17,
     const TVITEMEXW *VAR_18, BOOL VAR_19)
{
    UINT VAR_20 = 0;
    UINT VAR_21 = 0;

    FUNC_2("item %p\n", VAR_17);

    if (VAR_18->mask & VAR_15)
    {
        VAR_17->textWidth = 0;
 if (VAR_18->pszText != VAR_4 && VAR_18->pszText != ((void*)0))
 {
            int VAR_22;
            LPWSTR VAR_23;
            if (VAR_19)
                VAR_22 = FUNC_6(VAR_18->pszText) + 1;
            else
                VAR_22 = FUNC_1(VAR_0, 0, (LPSTR)VAR_18->pszText, -1, ((void*)0), 0);

            VAR_23 = FUNC_4(VAR_17->pszText, VAR_22 * sizeof(WCHAR));

            if (VAR_23 == ((void*)0)) return VAR_1;

            VAR_20 |= VAR_15;

            VAR_17->pszText = VAR_23;
            VAR_17->cchTextMax = VAR_22;
            if (VAR_19)
                FUNC_5(VAR_17->pszText, VAR_18->pszText, VAR_22);
            else
                FUNC_1(VAR_0, 0, (LPSTR)VAR_18->pszText, -1,
                                    VAR_17->pszText, VAR_22);

            FUNC_2("setting text %s, item %p\n", FUNC_3(VAR_17->pszText), VAR_17);
        }
 else
 {
            VAR_21 |= VAR_15;
            VAR_17->pszText = FUNC_4(VAR_17->pszText, VAR_5 * sizeof(WCHAR));
     VAR_17->cchTextMax = VAR_5;
     FUNC_2("setting callback, item %p\n", VAR_17);
 }
    }

    if (VAR_18->mask & VAR_7)
    {
 VAR_17->cChildren = VAR_18->cChildren;

 if (VAR_17->cChildren == VAR_2)
     VAR_21 |= VAR_7;
 else
     VAR_20 |= VAR_7;
    }

    if (VAR_18->mask & VAR_9)
    {
 VAR_17->iImage = VAR_18->iImage;

 if (VAR_17->iImage == VAR_3)
     VAR_21 |= VAR_9;
 else
     VAR_20 |= VAR_9;
    }

    if (VAR_18->mask & VAR_12)
    {
 VAR_17->iSelectedImage = VAR_18->iSelectedImage;

 if (VAR_17->iSelectedImage == VAR_3)
     VAR_21 |= VAR_12;
 else
     VAR_20 |= VAR_12;
    }

    if (VAR_18->mask & VAR_8)
    {
 VAR_17->iExpandedImage = VAR_18->iExpandedImage;

 if (VAR_17->iExpandedImage == VAR_3)
     VAR_21 |= VAR_8;
 else
     VAR_20 |= VAR_8;
    }

    if (VAR_18->mask & VAR_11)
 VAR_17->lParam = VAR_18->lParam;



    if (VAR_18->mask & VAR_10)
 VAR_17->iIntegral = VAR_18->iIntegral;

    if (VAR_18->mask & VAR_13)
    {
 FUNC_2("prevstate 0x%x, state 0x%x, mask 0x%x\n", VAR_17->state, VAR_18->state,
       VAR_18->stateMask);
 VAR_17->state &= ~VAR_18->stateMask;
 VAR_17->state |= (VAR_18->state & VAR_18->stateMask);
    }

    if (VAR_18->mask & VAR_14)
    {
        FUNC_0("New extended state: 0x%x\n", VAR_18->uStateEx);
    }

    VAR_17->callbackMask |= VAR_21;
    VAR_17->callbackMask &= ~VAR_20;

    return VAR_6;
}
