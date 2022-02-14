
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ left; scalar_t__ right; } ;
struct TYPE_10__ {int cx; int cy; } ;
struct TYPE_9__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_13__ {TYPE_3__ rcView; scalar_t__ nAvailWidth; TYPE_2__ dpi; TYPE_1__ pt; TYPE_4__* editor; scalar_t__ hDC; } ;
struct TYPE_12__ {scalar_t__ nAvailWidth; TYPE_3__ rcFormat; } ;
typedef TYPE_4__ ME_TextEditor ;
typedef TYPE_5__ ME_Context ;
typedef scalar_t__ HDC ;


 void* FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_5__*,scalar_t__) ;

void FUNC_2(ME_Context *VAR_2, ME_TextEditor *VAR_3, HDC VAR_4)
{
  VAR_2->hDC = VAR_4;
  VAR_2->editor = VAR_3;
  VAR_2->pt.x = 0;
  VAR_2->pt.y = 0;
  VAR_2->rcView = VAR_3->rcFormat;
  if (VAR_4) {
      VAR_2->dpi.cx = FUNC_0(VAR_4, VAR_0);
      VAR_2->dpi.cy = FUNC_0(VAR_4, VAR_1);
  } else {
      VAR_2->dpi.cx = VAR_2->dpi.cy = 96;
  }
  if (VAR_3->nAvailWidth)
      VAR_2->nAvailWidth = FUNC_1(VAR_2, VAR_3->nAvailWidth);
  else
      VAR_2->nAvailWidth = VAR_2->rcView.right - VAR_2->rcView.left;
}
