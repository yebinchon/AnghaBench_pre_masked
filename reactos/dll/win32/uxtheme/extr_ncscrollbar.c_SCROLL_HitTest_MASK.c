
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum SCROLL_HITTEST { ____Placeholder_SCROLL_HITTEST } SCROLL_HITTEST ;
struct TYPE_11__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_10__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_9__ {scalar_t__ dxyLineButton; scalar_t__ xyThumbTop; scalar_t__ xyThumbBottom; TYPE_3__ rcScrollBar; } ;
typedef TYPE_1__ SCROLLBARINFO ;
typedef TYPE_2__ POINT ;
typedef int HWND ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_3__*,TYPE_2__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum SCROLL_HITTEST FUNC_2( HWND VAR_6, SCROLLBARINFO* VAR_7, BOOL VAR_8,
                                           POINT VAR_9, BOOL VAR_10 )
{
    if ( (VAR_10 && !FUNC_1( &VAR_7->rcScrollBar, VAR_9, VAR_8 )) ||
      (!FUNC_0( &VAR_7->rcScrollBar, VAR_9 )) )
    {
         return VAR_2;
    }

    if (VAR_8)
    {
        if (VAR_9.y < VAR_7->rcScrollBar.top + VAR_7->dxyLineButton)
            return VAR_4;
        if (VAR_9.y >= VAR_7->rcScrollBar.bottom - VAR_7->dxyLineButton)
            return VAR_0;
        if (!VAR_7->xyThumbTop)
            return VAR_5;
        VAR_9.y -= VAR_7->rcScrollBar.top;
        if (VAR_9.y < VAR_7->xyThumbTop)
            return VAR_5;
        if (VAR_9.y >= VAR_7->xyThumbBottom)
            return VAR_1;
    }
    else
    {
        if (VAR_9.x < VAR_7->rcScrollBar.left + VAR_7->dxyLineButton)
            return VAR_4;
        if (VAR_9.x >= VAR_7->rcScrollBar.right - VAR_7->dxyLineButton)
            return VAR_0;
        if (!VAR_7->xyThumbTop)
            return VAR_5;
        VAR_9.x -= VAR_7->rcScrollBar.left;
        if (VAR_9.x < VAR_7->xyThumbTop)
            return VAR_5;
        if (VAR_9.x >= VAR_7->xyThumbBottom)
            return VAR_1;
    }
    return VAR_3;
}
