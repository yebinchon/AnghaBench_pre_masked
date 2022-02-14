
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {size_t cxy; size_t iOrder; size_t mask; int iImage; int lParam; int fmt; scalar_t__ cchTextMax; int * pszText; int hbm; } ;
struct TYPE_8__ {TYPE_1__* items; } ;
struct TYPE_7__ {size_t cxy; size_t iOrder; int iImage; int lParam; int fmt; int hbm; } ;
typedef size_t INT ;
typedef TYPE_2__ HEADER_INFO ;
typedef TYPE_3__ HDITEMW ;
typedef int BOOL ;


 int FUNC_0 (char*,size_t) ;


 int FUNC_1 (TYPE_2__ const*,int ,size_t,TYPE_3__*) ;

__attribute__((used)) static BOOL
FUNC_2(const HEADER_INFO *VAR_0, UINT VAR_1, INT VAR_2, INT VAR_3, INT VAR_4)
{
    HDITEMW VAR_5;


    VAR_5.cxy = VAR_0->items[VAR_2].cxy;
    VAR_5.hbm = VAR_0->items[VAR_2].hbm;
    VAR_5.pszText = ((void*)0);
    VAR_5.cchTextMax = 0;
    VAR_5.fmt = VAR_0->items[VAR_2].fmt;
    VAR_5.lParam = VAR_0->items[VAR_2].lParam;
    VAR_5.iOrder = VAR_0->items[VAR_2].iOrder;
    VAR_5.iImage = VAR_0->items[VAR_2].iImage;

    VAR_5.mask = VAR_3;
    switch (VAR_3)
    {
 case 128:
     VAR_5.cxy = VAR_4;
     break;
 case 129:
     VAR_5.iOrder = VAR_4;
     break;
 default:
     FUNC_0("invalid mask value 0x%x\n", VAR_4);
    }

    return FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_5);
}
