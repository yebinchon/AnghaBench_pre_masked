
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_6__ {scalar_t__ iImage; int const* pszText; int cxy; int lParam; int fmt; int hbm; } ;
struct TYPE_5__ {scalar_t__ iImage; int callbackMask; int * pszText; int cxy; int lParam; int fmt; int hbm; } ;
typedef int const* LPCWSTR ;
typedef int LPCSTR ;
typedef TYPE_1__ HEADER_ITEM ;
typedef TYPE_2__ HDITEMW ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int const* VAR_8 ;
 int FUNC_1 (int **,int ) ;
 int FUNC_2 (int **,int const*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(HEADER_ITEM *VAR_9, UINT VAR_10, const HDITEMW *VAR_11, BOOL VAR_12)
{
    if (VAR_10 & VAR_5)
        FUNC_0("unsupported header fields %x\n", (VAR_10 & VAR_5));

    if (VAR_10 & VAR_0)
        VAR_9->hbm = VAR_11->hbm;

    if (VAR_10 & VAR_1)
        VAR_9->fmt = VAR_11->fmt;

    if (VAR_10 & VAR_3)
        VAR_9->lParam = VAR_11->lParam;

    if (VAR_10 & VAR_6)
        VAR_9->cxy = VAR_11->cxy;

    if (VAR_10 & VAR_2)
    {
        VAR_9->iImage = VAR_11->iImage;
        if (VAR_11->iImage == VAR_7)
            VAR_9->callbackMask |= VAR_2;
        else
            VAR_9->callbackMask &= ~VAR_2;
    }

    if (VAR_10 & VAR_4)
    {
        FUNC_3(VAR_9->pszText);
        VAR_9->pszText = ((void*)0);

        if (VAR_11->pszText != VAR_8)
        {
            static const WCHAR VAR_13[] = {0};

            LPCWSTR VAR_14 = (VAR_11->pszText != ((void*)0) ? VAR_11->pszText : VAR_13);
            if (VAR_12)
                FUNC_2(&VAR_9->pszText, VAR_14);
            else
                FUNC_1(&VAR_9->pszText, (LPCSTR)VAR_14);
            VAR_9->callbackMask &= ~VAR_4;
        }
        else
        {
            VAR_9->pszText = ((void*)0);
            VAR_9->callbackMask |= VAR_4;
        }
    }
}
