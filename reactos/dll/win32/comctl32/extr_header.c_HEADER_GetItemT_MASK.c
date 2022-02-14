
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {TYPE_2__* items; scalar_t__ uNumItem; } ;
struct TYPE_9__ {int pszText; int iOrder; int iImage; int lParam; int cxy; int fmt; int hbm; } ;
struct TYPE_8__ {int mask; int cchTextMax; scalar_t__ pszText; int iOrder; int iImage; int lParam; int cxy; int fmt; int hbm; } ;
typedef int LRESULT ;
typedef int LPSTR ;
typedef TYPE_1__* LPHDITEMW ;
typedef size_t INT ;
typedef TYPE_2__ HEADER_ITEM ;
typedef TYPE_3__ HEADER_INFO ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__ const*,size_t,int) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*,int) ;
 int VAR_10 ;

__attribute__((used)) static LRESULT
FUNC_5 (const HEADER_INFO *VAR_11, INT VAR_12, LPHDITEMW VAR_13, BOOL VAR_14)
{
    HEADER_ITEM *VAR_15;
    UINT VAR_16;

    if (!VAR_13)
 return VAR_0;

    FUNC_4("[nItem=%d]\n", VAR_12);

    VAR_16 = VAR_13->mask;
    if (VAR_16 == 0)
 return VAR_10;

    if ((VAR_12 < 0) || (VAR_12 >= (INT)VAR_11->uNumItem))
        return VAR_0;

    if (VAR_16 & VAR_8)
    {
        FUNC_4("mask %x contains unknown fields. Using only comctl32 4.0 fields\n", VAR_16);
        VAR_16 &= VAR_2;
    }

    VAR_15 = &VAR_11->items[VAR_12];
    FUNC_1(VAR_11, VAR_12, VAR_16);

    if (VAR_16 & VAR_1)
        VAR_13->hbm = VAR_15->hbm;

    if (VAR_16 & VAR_3)
        VAR_13->fmt = VAR_15->fmt;

    if (VAR_16 & VAR_9)
        VAR_13->cxy = VAR_15->cxy;

    if (VAR_16 & VAR_5)
        VAR_13->lParam = VAR_15->lParam;

    if (VAR_16 & VAR_4)
        VAR_13->iImage = VAR_15->iImage;

    if (VAR_16 & VAR_6)
        VAR_13->iOrder = VAR_15->iOrder;

    if (VAR_16 & VAR_7)
    {
        if (VAR_14)
            FUNC_2 (VAR_15->pszText, VAR_13->pszText, VAR_13->cchTextMax);
        else
            FUNC_3 (VAR_15->pszText, (LPSTR)VAR_13->pszText, VAR_13->cchTextMax);
    }

    FUNC_0(VAR_15);
    return VAR_10;
}
