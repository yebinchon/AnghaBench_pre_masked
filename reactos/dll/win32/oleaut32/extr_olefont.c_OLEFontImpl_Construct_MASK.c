
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_23__ {int fStrikethrough; int fUnderline; int fItalic; int sCharset; int sWeight; int cySize; int lpstrName; } ;
struct TYPE_21__ {int * lpVtbl; } ;
struct TYPE_20__ {int cbSizeofstruct; int fStrikethrough; int fUnderline; int fItalic; int sCharset; int sWeight; int cySize; int lpstrName; } ;
struct TYPE_19__ {int * lpVtbl; } ;
struct TYPE_18__ {int * lpVtbl; } ;
struct TYPE_17__ {int * lpVtbl; } ;
struct TYPE_16__ {int * lpVtbl; } ;
struct TYPE_15__ {int * lpVtbl; } ;
struct TYPE_22__ {int ref; long cyHimetric; int * pFontEventsCP; int * pPropertyNotifyCP; TYPE_7__ IFont_iface; int cyLogical; int dirty; scalar_t__ gdiFont; TYPE_6__ description; TYPE_5__ IPersistStreamInit_iface; TYPE_4__ IPersistPropertyBag_iface; TYPE_3__ IConnectionPointContainer_iface; TYPE_2__ IPersistStream_iface; TYPE_1__ IDispatch_iface; } ;
typedef TYPE_8__ OLEFontImpl ;
typedef int IUnknown ;
typedef TYPE_9__ FONTDESC ;


 int FUNC_0 (int *,int *,int **) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 TYPE_8__* FUNC_3 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_8__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (char*,TYPE_8__*) ;
 int VAR_9 ;
 int FUNC_7 () ;
 int VAR_10 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static OLEFontImpl* FUNC_9(const FONTDESC *VAR_11)
{
  OLEFontImpl* VAR_12;

  VAR_12 = FUNC_3(FUNC_2(), 0, sizeof(OLEFontImpl));

  if (VAR_12==0)
    return VAR_12;

  VAR_12->IFont_iface.lpVtbl = &VAR_8;
  VAR_12->IDispatch_iface.lpVtbl = &VAR_4;
  VAR_12->IPersistStream_iface.lpVtbl = &VAR_7;
  VAR_12->IConnectionPointContainer_iface.lpVtbl = &VAR_3;
  VAR_12->IPersistPropertyBag_iface.lpVtbl = &VAR_5;
  VAR_12->IPersistStreamInit_iface.lpVtbl = &VAR_6;

  VAR_12->ref = 1;

  VAR_12->description.cbSizeofstruct = sizeof(FONTDESC);
  VAR_12->description.lpstrName = FUNC_8(VAR_11->lpstrName);
  VAR_12->description.cySize = VAR_11->cySize;
  VAR_12->description.sWeight = VAR_11->sWeight;
  VAR_12->description.sCharset = VAR_11->sCharset;
  VAR_12->description.fItalic = VAR_11->fItalic;
  VAR_12->description.fUnderline = VAR_11->fUnderline;
  VAR_12->description.fStrikethrough = VAR_11->fStrikethrough;

  VAR_12->gdiFont = 0;
  VAR_12->dirty = VAR_9;
  VAR_12->cyLogical = FUNC_1(FUNC_7(), VAR_2);
  VAR_12->cyHimetric = 2540L;
  VAR_12->pPropertyNotifyCP = ((void*)0);
  VAR_12->pFontEventsCP = ((void*)0);

  FUNC_0((IUnknown*)&VAR_12->IFont_iface, &VAR_1, &VAR_12->pPropertyNotifyCP);
  FUNC_0((IUnknown*)&VAR_12->IFont_iface, &VAR_0, &VAR_12->pFontEventsCP);

  if (!VAR_12->pPropertyNotifyCP || !VAR_12->pFontEventsCP)
  {
    FUNC_5(VAR_12);
    return ((void*)0);
  }

  FUNC_4(&VAR_10);

  FUNC_6("returning %p\n", VAR_12);
  return VAR_12;
}
