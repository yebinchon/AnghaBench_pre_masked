
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {void* top; void* left; } ;
struct TYPE_12__ {void* top; void* left; } ;
struct TYPE_14__ {TYPE_2__ rcWindow; TYPE_1__ rcClient; } ;
struct TYPE_17__ {TYPE_3__ wi; } ;
struct TYPE_16__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_15__ {scalar_t__ dxyLineButton; scalar_t__ xyThumbBottom; scalar_t__ xyThumbTop; TYPE_5__ rcScrollBar; } ;
typedef TYPE_4__ SCROLLBARINFO ;
typedef TYPE_5__ RECT ;
typedef TYPE_6__* PDRAW_CONTEXT ;
typedef void* INT ;
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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_6__*,int ,int ,TYPE_4__*,int ,int,int,TYPE_5__*) ;

__attribute__((used)) static void FUNC_1( PDRAW_CONTEXT VAR_12, SCROLLBARINFO* VAR_13,
                                  INT VAR_14, BOOL VAR_15,
                                  int VAR_16, int VAR_17 )
{
    RECT VAR_18, VAR_19;



    VAR_18 = VAR_13->rcScrollBar;
    if (VAR_15)
    {
        if (VAR_14)
            VAR_14 += VAR_12->wi.rcClient.top - VAR_12->wi.rcWindow.top;
        VAR_18.top += VAR_13->dxyLineButton;
        VAR_18.bottom -= (VAR_13->dxyLineButton);
    }
    else
    {
        if (VAR_14)
            VAR_14 += VAR_12->wi.rcClient.left - VAR_12->wi.rcWindow.left;
        VAR_18.left += VAR_13->dxyLineButton;
        VAR_18.right -= VAR_13->dxyLineButton;
    }

    if (VAR_18.right <= VAR_18.left || VAR_18.bottom <= VAR_18.top)
        return;



    if (!VAR_14)
    {
        VAR_19 = VAR_18;
        FUNC_0(VAR_12, VAR_15 ? VAR_8: VAR_7 , VAR_0, VAR_13, VAR_10, 0, 0, &VAR_19);
        return;
    }



    if (VAR_15)
    {
        VAR_19 = VAR_18;
        VAR_19.bottom = VAR_14;
        FUNC_0(VAR_12, VAR_4, VAR_0, VAR_13, VAR_11, VAR_16, VAR_17, &VAR_19);
        VAR_18.top = VAR_19.bottom;

        VAR_19 = VAR_18;
        VAR_19.top += VAR_13->xyThumbBottom - VAR_13->xyThumbTop;
        FUNC_0(VAR_12, VAR_8, VAR_0, VAR_13, VAR_9, VAR_16, VAR_17, &VAR_19);
        VAR_18.bottom = VAR_19.top;

        FUNC_0(VAR_12, VAR_6, VAR_0, VAR_13, VAR_10, VAR_16, VAR_17, &VAR_18);
        FUNC_0(VAR_12, VAR_2, VAR_0, VAR_13, VAR_10, VAR_16, VAR_17, &VAR_18);
    }
    else
    {
        VAR_19 = VAR_18;
        VAR_19.right = VAR_14;
        FUNC_0(VAR_12, VAR_3, VAR_0, VAR_13, VAR_11, VAR_16, VAR_17, &VAR_19);
        VAR_18.left = VAR_19.right;

        VAR_19 = VAR_18;
        VAR_19.left += VAR_13->xyThumbBottom - VAR_13->xyThumbTop;
        FUNC_0(VAR_12, VAR_7, VAR_0, VAR_13, VAR_9, VAR_16, VAR_17, &VAR_19);
        VAR_18.right = VAR_19.left;

        FUNC_0(VAR_12, VAR_5, VAR_0, VAR_13, VAR_10, VAR_16, VAR_17, &VAR_18);
        FUNC_0(VAR_12, VAR_1, VAR_0, VAR_13, VAR_10, VAR_16, VAR_17, &VAR_18);
    }
}
