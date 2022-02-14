
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ SCROLL_TrackingPos; int SCROLL_MovingThumb; } ;
struct TYPE_7__ {scalar_t__ bottom; scalar_t__ top; scalar_t__ right; scalar_t__ left; } ;
struct TYPE_8__ {scalar_t__ xyThumbBottom; scalar_t__ xyThumbTop; scalar_t__ dxyLineButton; TYPE_1__ rcScrollBar; } ;
typedef TYPE_2__ SCROLLBARINFO ;
typedef TYPE_3__* PWND_DATA ;
typedef int PDRAW_CONTEXT ;
typedef scalar_t__ INT ;
typedef int BOOL ;


 int FUNC_0 (int ,TYPE_2__*,scalar_t__,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(PWND_DATA VAR_1, PDRAW_CONTEXT VAR_2, SCROLLBARINFO* VAR_3, BOOL VAR_4)
{
  INT VAR_5 = VAR_1->SCROLL_TrackingPos;
  INT VAR_6;

  if( VAR_4 )
      VAR_6 = VAR_3->rcScrollBar.bottom - VAR_3->rcScrollBar.top;
  else
      VAR_6 = VAR_3->rcScrollBar.right - VAR_3->rcScrollBar.left;

  VAR_6 -= VAR_3->xyThumbBottom - VAR_3->xyThumbTop + VAR_3->dxyLineButton;

  if( VAR_5 < (VAR_3->dxyLineButton) )
    VAR_5 = (VAR_3->dxyLineButton);
  else if( VAR_5 > VAR_6 )
    VAR_5 = VAR_6;

  FUNC_0(VAR_2, VAR_3, VAR_5, VAR_4, VAR_0, 0);

  VAR_1->SCROLL_MovingThumb = !VAR_1->SCROLL_MovingThumb;
}
