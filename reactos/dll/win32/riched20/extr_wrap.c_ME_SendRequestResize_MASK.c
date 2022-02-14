
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int nEventMask; scalar_t__ nTotalLength; int texthost; int nTotalWidth; } ;
struct TYPE_10__ {scalar_t__ bottom; int right; } ;
struct TYPE_8__ {int code; scalar_t__ idFrom; int * hwndFrom; } ;
struct TYPE_9__ {TYPE_1__ nmhdr; TYPE_3__ rc; } ;
typedef TYPE_2__ REQRESIZE ;
typedef TYPE_3__ RECT ;
typedef TYPE_4__ ME_TextEditor ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;

void
FUNC_2(ME_TextEditor *VAR_2, BOOL VAR_3)
{
  if (VAR_2->nEventMask & VAR_0)
  {
    RECT VAR_4;

    FUNC_0(VAR_2->texthost, &VAR_4);

    if (VAR_3 || VAR_4.bottom != VAR_2->nTotalLength)
    {
      REQRESIZE VAR_5;

      VAR_5.nmhdr.hwndFrom = ((void*)0);
      VAR_5.nmhdr.idFrom = 0;
      VAR_5.nmhdr.code = VAR_1;
      VAR_5.rc = VAR_4;
      VAR_5.rc.right = VAR_2->nTotalWidth;
      VAR_5.rc.bottom = VAR_2->nTotalLength;

      VAR_2->nEventMask &= ~VAR_0;
      FUNC_1(VAR_2->texthost, VAR_5.nmhdr.code, &VAR_5);
      VAR_2->nEventMask |= VAR_0;
    }
  }
}
